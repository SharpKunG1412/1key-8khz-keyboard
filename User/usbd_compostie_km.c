/********************************** (C) COPYRIGHT *******************************
 * File Name          : usbd_composite_km.c
 * Author             : WCH
 * Version            : V1.0.0
 * Date               : 2022/08/18
 * Description        : USB keyboard and mouse processing.
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/


/*******************************************************************************/
/* Header Files */
#include "ch32v30x_usbhs_device.h"
#include "usbd_composite_km.h"
#include "layout.h"

/*******************************************************************************/
/* Variable Definition */

/* Keyboard */
volatile uint8_t  KB_Scan_Done = 0x00;                                          // Keyboard Keys Scan Done
volatile uint16_t KB_Scan_Result = 0xF000;                                      // Keyboard Keys Current Scan Result
volatile uint16_t KB_Scan_Last_Result = 0xF000;                                 // Keyboard Keys Last Scan Result
uint8_t KB_Data_Pack[ 2 ] = { 0x00 };                                          // Keyboard IN Data Packet
uint8_t cooked_matrix[4] = {0};
uint8_t sended_matrix[4] = {0};
uint8_t raw_matrix[4] = {0};
uint8_t scan_pattern[14] = {0, 5, 10, 1, 6, 11, 2, 7, 12, 3, 8, 13, 4, 9};
static uint8_t update_flag = 0;
static uint8_t usb_flag = 0;
uint8_t status;
uint8_t Debounce_timer[4] = {10};                                        // Debouncing Timer
uint8_t laststage[ 14 ] = {0x00};
uint8_t t_debounce = 20;                                                       //  Set Debounce (x0.625 ms)
volatile uint8_t  KB_LED_Last_Status = 0x00;                                    // Keyboard LED Last Result
volatile uint8_t  KB_LED_Cur_Status = 0x00;                                     // Keyboard LED Current Result

/*******************************************************************************/
/* Interrupt Function Declaration */
void TIM3_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));

/*********************************************************************
 * @fn      TIM3_Init
 *
 * @brief   Initialize timer3 for keyboard and mouse scan.
 *
 * @param   arr - The specific period value
 *          psc - The specifies prescaler value
 *
 * @return  none
 */
void TIM3_Init( uint16_t arr, uint16_t psc )
{
    TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
    NVIC_InitTypeDef NVIC_InitStructure;

    /* Enable Timer3 Clock */
    RCC_APB1PeriphClockCmd( RCC_APB1Periph_TIM3, ENABLE );

    /* Initialize Timer3 */
    TIM_TimeBaseStructure.TIM_Period = arr;
    TIM_TimeBaseStructure.TIM_Prescaler = psc;
    TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
    TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit( TIM3, &TIM_TimeBaseStructure );

    TIM_ITConfig( TIM3, TIM_IT_Update, ENABLE );

    NVIC_InitStructure.NVIC_IRQChannel = TIM3_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 2;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init( &NVIC_InitStructure );

    /* Enable Timer3 */
    TIM_Cmd( TIM3, ENABLE );
}

/*********************************************************************
 * @fn      TIM3_IRQHandler
 *
 * @brief   This function handles TIM3 global interrupt request.
 *
 * @return  none
 */
void TIM3_IRQHandler( void )
{
    if( TIM_GetITStatus( TIM3, TIM_IT_Update ) != RESET )
    {
        /* Clear interrupt flag */
        TIM_ClearITPendingBit( TIM3, TIM_IT_Update );

        /* Handle keyboard scan matrix */
        //KB_Scan( );

        /* Handle Debounce Timer */
        DB_Timer( );

    }
}

/*********************************************************************
 * @fn      KB_Scan_Init
 *
 * @brief   Initialize IO for keyboard scan.
 *
 * @return  none
 */
void KB_Scan_Init( void )
{
    GPIO_InitTypeDef GPIOin_InitStructure = { 0 };

    /* Enable GPIOA clock */
    RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA, ENABLE );

    /* Initialize GPIOA (Pin3-Pin7) for the keyboard scan */
    GPIOin_InitStructure.GPIO_Pin = GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;
    GPIOin_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
    GPIOin_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;
    GPIO_Init( GPIOA, &GPIOin_InitStructure );

    GPIO_InitTypeDef GPIOout_InitStructure = { 0 };

    /* Enable GPIOC clock */
    RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC, ENABLE );

    /* Initialize GPIOC (Pin0-Pin13) for the keyboard scan */
    GPIOout_InitStructure.GPIO_Pin = 0x3FFF; //all GPIO except 14 and 15
    GPIOout_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIOout_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init( GPIOC, &GPIOout_InitStructure );
}

/*********************************************************************
 * @fn      KB_Sleep_Wakeup_Cfg
 *
 * @brief   Configure keyboard wake up mode.
 *
 * @return  none
 */
void KB_Sleep_Wakeup_Cfg( void )
{
    EXTI_InitTypeDef EXTI_InitStructure = { 0 };

    /* Enable GPIOB clock */
    RCC_APB2PeriphClockCmd( RCC_APB2Periph_AFIO, ENABLE );

    GPIO_EXTILineConfig( GPIO_PortSourceGPIOA, GPIO_PinSource3 );
    EXTI_InitStructure.EXTI_Line = EXTI_Line3;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Event;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init( &EXTI_InitStructure );

    GPIO_EXTILineConfig( GPIO_PortSourceGPIOA, GPIO_PinSource4 );
    EXTI_InitStructure.EXTI_Line = EXTI_Line4;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Event;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init( &EXTI_InitStructure );

    GPIO_EXTILineConfig( GPIO_PortSourceGPIOA, GPIO_PinSource5 );
    EXTI_InitStructure.EXTI_Line = EXTI_Line5;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Event;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init( &EXTI_InitStructure );

    GPIO_EXTILineConfig( GPIO_PortSourceGPIOA, GPIO_PinSource6 );
    EXTI_InitStructure.EXTI_Line = EXTI_Line6;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Event;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init( &EXTI_InitStructure );

    GPIO_EXTILineConfig( GPIO_PortSourceGPIOA, GPIO_PinSource7 );
    EXTI_InitStructure.EXTI_Line = EXTI_Line7;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Event;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init( &EXTI_InitStructure );

    EXTI->INTENR |= EXTI_INTENR_MR3 | EXTI_INTENR_MR4 | EXTI_INTENR_MR5 | EXTI_INTENR_MR6 | EXTI_INTENR_MR7;
}

/*********************************************************************
 * @fn      KB_Scan
 *
 * @brief   Perform keyboard scan.
 *
 * @return  none
 */
void KB_Scan( void )
{
    for(int i = 0; i < 2; ++i)
    {
        if( GPIO_ReadInputData(GPIOA) & (0x0008 << i) )
        {
            raw_matrix[i] = 1;
        }
        else
        {
            raw_matrix[i] = 0;
        }
    }
}

/*********************************************************************
 * @fn      Debounce Timer
 *
 * @brief   Perform debouncing timer.
 *
 * @return  none
 */
void DB_Timer( void )
{
    for(int i = 0; i < 2; ++i)
    {
        if( Debounce_timer[i] > 0 )
            --Debounce_timer[i];
    }

    DB_Algo( );
}

/*********************************************************************
 * @fn      Debounce Algorithm
 *
 * @brief   Perform debouncing Algorithm.
 *
 * @return  none
 */
void DB_Algo( void )
{
    for(int i = 0; i < 2; ++i)
    {
        if( (raw_matrix[i] != cooked_matrix[i]) && Debounce_timer[i] == 0 )
        {
            //Activate Immediately when press button
            cooked_matrix[i] = raw_matrix[i];
            Debounce_timer[i] = t_debounce;
            update_flag = 1;
        }
    }
}

/*********************************************************************
 * @fn      KB_Scan_Handle
 *
 * @brief   Handle keyboard scan data.
 *
 * @return  none
 */
void KB_Scan_Handle( void )
{

    KB_Scan();
    if( update_flag )
    {
        usb_flag = 1;
        if(cooked_matrix[0])
        {
            KB_Data_Pack[1] |= (1 << 6);
            GPIO_WriteBit(GPIOB, GPIO_Pin_8, 0);
        }
        else
        {
            KB_Data_Pack[1] &= (~(1 << 6));
            GPIO_WriteBit(GPIOB, GPIO_Pin_8, 1);
        }
        if(cooked_matrix[1])
        {
            KB_Data_Pack[1] |= (1 << 7);
        }
        else
        {
            KB_Data_Pack[1] &= (~(1 << 7));
        }
        update_flag = 0;
    }
    if( usb_flag )
    {
        /* Load keyboard data to endpoint 1 */
        status = USBHS_Endp_DataUp( DEF_UEP1, KB_Data_Pack, sizeof( KB_Data_Pack ), DEF_UEP_CPY_LOAD );
        if( status == READY )
        {
            /* Clear flag after successful loading */
            usb_flag = 0;
            if(cooked_matrix[0])
            {
                GPIO_Write( GPIOC, 0x0003 );
            }
            else
            {
                GPIO_Write( GPIOC, 0x000C );
            }
        }
    }
}

/*********************************************************************
 * @fn      LED_GPIO_Initialize
 *
 * @brief   Handle keyboard lighting.
 *
 * @return  none
 */
void LED_Init( void )
{
    GPIO_InitTypeDef GPIOout_InitStructure = { 0 };

    /* Enable GPIOB clock */
    RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB, ENABLE );

    /* Initialize GPIOB (Pin3-Pin5) for the led */
    GPIOout_InitStructure.GPIO_Pin = GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_8 | GPIO_Pin_9;
    GPIOout_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIOout_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init( GPIOB, &GPIOout_InitStructure );
}

/*********************************************************************
 * @fn      KB_LED_Handle
 *
 * @brief   Handle keyboard lighting.
 *
 * @return  none
 */
void KB_LED_Handle( void )
{
    if( KB_LED_Cur_Status != KB_LED_Last_Status )
    {
        if( ( KB_LED_Cur_Status & 0x01 ) != ( KB_LED_Last_Status & 0x01 ) )
        {
            if( KB_LED_Cur_Status & 0x01 )
            {
                //printf("Turn on the NUM LED\r\n");
                GPIO_WriteBit(GPIOB, GPIO_Pin_3, 0);
            }
            else
            {
                //printf("Turn off the NUM LED\r\n");
                GPIO_WriteBit(GPIOB, GPIO_Pin_3, 1);
            }
        }
        if( ( KB_LED_Cur_Status & 0x02 ) != ( KB_LED_Last_Status & 0x02 ) )
        {
            if( KB_LED_Cur_Status & 0x02 )
            {
                //printf("Turn on the CAPS LED\r\n");
                GPIO_WriteBit(GPIOB, GPIO_Pin_4, 0);
            }
            else
            {
                //printf("Turn off the CAPS LED\r\n");
                GPIO_WriteBit(GPIOB, GPIO_Pin_4, 1);
            }
        }
        if( ( KB_LED_Cur_Status & 0x04 ) != ( KB_LED_Last_Status & 0x04 ) )
        {
            if( KB_LED_Cur_Status & 0x04 )
            {
                //printf("Turn on the SCROLL LED\r\n");
                GPIO_WriteBit(GPIOB, GPIO_Pin_5, 0);
            }
            else
            {
                //printf("Turn off the SCROLL LED\r\n");
                GPIO_WriteBit(GPIOB, GPIO_Pin_5, 0);
            }
        }
        KB_LED_Last_Status = KB_LED_Cur_Status;
    }
}

/*********************************************************************
 * @fn      KB_Schedule
 *
 * @brief   Running main keyboard schedule
 *
 * @return  none
 */
void KB_Schedule( void )
{
    while(1)
    {
        if( USBHS_DevEnumStatus )
        {
            /* Handle keyboard scan data */
            KB_Scan_Handle( );

            /* Handle keyboard lighting */
            KB_LED_Handle( );

            /* Handle mouse scan data */
            //MS_Scan_Handle( );
        }
    }
}

/*********************************************************************
 * @fn      USBHD_Sleep_Wakeup_CFG
 *
 * @brief   Configure USB wake up mode
 *
 * @return  none
 */
void USB_Sleep_Wakeup_CFG( void )
{
    EXTI_InitTypeDef EXTI_InitStructure = { 0 };

    EXTI_InitStructure.EXTI_Line = EXTI_Line20;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Event;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init( &EXTI_InitStructure );
}

/*********************************************************************
 * @fn      USBHD_Sleep_Wakeup_Operate
 *
 * @brief   Perform sleep operation
 *
 * @return  none
 */
void MCU_Sleep_Wakeup_Operate( void )
{
    EXTI_ClearFlag( EXTI_Line3 | EXTI_Line4 | EXTI_Line5 | EXTI_Line6  | EXTI_Line7 );
    GPIO_Write( GPIOC, 0x3FFF );
    printf( "Sleep\r\n" );
    __WFE( );

    if( EXTI_GetFlagStatus( EXTI_Line3 | EXTI_Line4 | EXTI_Line5 | EXTI_Line6  | EXTI_Line7 ) != RESET  )
    {
        GPIO_Write( GPIOC, 0x0000 );
        Delay_Us(5);
        EXTI_ClearFlag( EXTI_Line3 | EXTI_Line4 | EXTI_Line5 | EXTI_Line6  | EXTI_Line7 );
        GPIO_Write( GPIOC, 0x3FFF );
        while(GPIO_ReadInputData(GPIOA)&0x00F8)
            Delay_Ms(10);
        GPIO_Write( GPIOC, 0x0000 );
        USBHS_Send_Resume( );
    }
    //else if( EXTI_GetFlagStatus( EXTI_Line4 | EXTI_Line5 | EXTI_Line6 | EXTI_Line7 ) != RESET )
    //{
    //    EXTI_ClearFlag( EXTI_Line4 | EXTI_Line5 | EXTI_Line6 | EXTI_Line7 );
    //    USBHS_Send_Resume( );
    //}


    printf( "Wake\r\n" );

}
