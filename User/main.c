/********************************** (C) COPYRIGHT *******************************
 * File Name          : main.c
 * Author             : WCH
 * Version            : V1.0.0
 * Date               : 2022/08/18
 * Description        : Main program body.
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/

/*
 * @Note
 * Please select the corresponding macro definition (CH32V30x_D8/CH32V30x_D8C)
 * and startup_xxx.s file according to the chip model, otherwise the example may be abnormal.
 */


/*******************************************************************************/
/* Header Files */
#include "ch32v30x_usbhs_device.h"
#include "usbd_composite_km.h"

/*********************************************************************
 * @fn      main
 *
 * @brief   Main program
 *
 * @return  none
 */
int main( void )
{
    /* Initialize system configuration */
	SystemCoreClockUpdate( );
    NVIC_PriorityGroupConfig( NVIC_PriorityGroup_2 );
	Delay_Init( );
	USART_Printf_Init( 115200 );
		
	//printf( "SystemClk:%d\r\n", SystemCoreClock );
	//printf( "ChipID:%08x\r\n", DBGMCU_GetCHIPID() );
    printf( "USBHS HID Sharp8K Firmware\r\n" );

	/* Initialize GPIO for keyboard scan */
	KB_Scan_Init( );
	//KB_Layer_Decode( );
	KB_Sleep_Wakeup_Cfg( );
	printf( "KB Scan Init OK!\r\n" );

	/* Initialize GPIO for mouse scan */
	//MS_Scan_Init( );
	//MS_Sleep_Wakeup_Cfg( );
	//printf( "MS Scan Init OK!\r\n" );

	/* Initialize GPIO for LED */
    LED_Init( );
    printf( "LED Init OK!\r\n" );

	/* Initialize timer for Keyboard and mouse scan timing */
	TIM3_Init( 1, SystemCoreClock / 2400 - 1 );
	printf( "TIM3 Init OK!\r\n" );

	/* Initialize USBHD interface to communicate with the host  */
	USBHS_RCC_Init( );
	USBHS_Device_Init( ENABLE );
	USB_Sleep_Wakeup_CFG( );
	GPIO_Write(GPIOB, 0xFFFF);
	GPIO_Write(GPIOC, 0x3FFF);

	while(1)
	{
	    KB_Schedule();
	}
}
