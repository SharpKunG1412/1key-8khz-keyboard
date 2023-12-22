/********************************** (C) COPYRIGHT *******************************
 * File Name          : usbd_composite_km.h
 * Author             : WCH
 * Version            : V1.0.0
 * Date               : 2022/08/18
 * Description        : USB keyboard and mouse processing.
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/


#ifndef __USBD_COMPOSITE_KM_H
#define __USBD_COMPOSITE_KM_H

/*******************************************************************************/
/* Included Header Files */
#include "debug.h"
#include "string.h"
#include "usbd_desc.h"

/*******************************************************************************/
/* Global Variable Declaration */
extern volatile uint8_t  KB_LED_Last_Status;
extern volatile uint8_t  KB_LED_Cur_Status;

/*******************************************************************************/
/* Function Declaration */
extern void KB_Scan_Init( void );
extern void KB_Sleep_Wakeup_Cfg( void );
extern void KB_Schedule( void );
extern void KB_Scan( void );
extern void KB_Scan_Handle( void );
extern void DB_Timer( void );
extern void DB_Algo( void );
extern void LED_Init( void );
extern void KB_LED_Handle( void );
extern void USB_Sleep_Wakeup_CFG( void );
extern void MCU_Sleep_Wakeup_Operate( void );


#endif
