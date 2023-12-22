/********************************** (C) COPYRIGHT *******************************
 * File Name          : composite_km_desc.h
 * Author             : WCH
 * Version            : V1.0.0
 * Date               : 2022/08/18
 * Description        : All descriptors for the keyboard and mouse composite device.
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/


/*******************************************************************************/
/* Header File */
#include "usbd_desc.h"

/*******************************************************************************/
/* Device Descriptor */
const uint8_t MyDevDescr[ ] =
{
    0x12,                                                   // bLength
    0x01,                                                   // bDescriptorType
    0x00, 0x02,                                             // bcdUSB
    0x00,                                                   // bDeviceClass
    0x00,                                                   // bDeviceSubClass
    0x00,                                                   // bDeviceProtocol
    DEF_USBD_UEP0_SIZE,                                     // bMaxPacketSize0
    (uint8_t)DEF_USB_VID, (uint8_t)( DEF_USB_VID >> 8 ),    // idVendor
    (uint8_t)DEF_USB_PID, (uint8_t)( DEF_USB_PID >> 8 ),    // idProduct
    0x00, DEF_IC_PRG_VER,                                   // bcdDevice
    0x01,                                                   // iManufacturer
    0x02,                                                   // iProduct
    0x03,                                                   // iSerialNumber
    0x01,                                                   // bNumConfigurations
};

/* Configuration Descriptor Set */
const uint8_t MyCfgDescr[ ] =
{
    /* Configuration Descriptor */
    0x09,                                                   // bLength
    0x02,                                                   // bDescriptorType
    0x3B, 0x00,                                             // wTotalLength
    0x02,                                                   // bNumInterfaces
    0x01,                                                   // bConfigurationValue
    0x00,                                                   // iConfiguration
    0xA0,//0xA0,                                                   // bmAttributes: Bus Powered; Remote Wake up
    0x32,                                                   // MaxPower: 100mA

    /* Interface Descriptor (Keyboard) */
    0x09,                                                   // bLength
    0x04,                                                   // bDescriptorType
    0x00,                                                   // bInterfaceNumber
    0x00,                                                   // bAlternateSetting
    0x01,                                                   // bNumEndpoints
    0x03,                                                   // bInterfaceClass
    0x01,                                                   // bInterfaceSubClass
    0x01,                                                   // bInterfaceProtocol: Keyboard
    0x00,                                                   // iInterface

    /* HID Descriptor (Keyboard) */
    0x09,                                                   // bLength
    0x21,                                                   // bDescriptorType
    0x11, 0x01,                                             // bcdHID
    0x00,                                                   // bCountryCode
    0x01,                                                   // bNumDescriptors
    0x22,                                                   // bDescriptorType
    0x35, 0x00,                                             // wDescriptorLength

    /* Endpoint Descriptor (Keyboard) */
    0x07,                                                   // bLength
    0x05,                                                   // bDescriptorType
    0x81, 0x03,                                             // bEndpointAddress: IN Endpoint 1
    0x02, 0x00,                                             // wMaxPacketSize
    0x01,                                                   // bInterval: 1mS


    0x09,
    0x04,
    0x01,
    0x00,
    0x01,
    0x03,
    0x00,
    0x00,
    0x00,

    0x09,
    0x21,
    0x11, 0x01,
    0x00,
    0x01,
    0x22,
    0x50, 0x00,

    0x07,
    0x05,
    0x82, 0x03,
    0x08, 0x00,
    0x0A

};

/* Keyboard Report Descriptor */
const uint8_t KeyRepDesc[ ] =
{
    0x05, 0x01,                     // Usage Page (Generic desktop)
    0x09, 0x06,                     // Usage (Keyboard)
    0xA1, 0x01,                     // Collection (Application)

    0x05, 0x07,                     // Usage page 7 (Keyboard/Keypad)
    0x19, 0xE0,                     // Local usage minimum: E0
    0x29, 0xE7,                     // Local usage maximum: E7
    0x15, 0x00,                     // Local minimum: 0
    0x25, 0x01,                     // Local maximum: 1
    0x75, 0x01,                     // Report size: 1 bit
    0x95, 0x08,                     // Report count: 8 reports
    0x81, 0x02,                     // Input (variable)

    0x19, 0x00,                     // Local usage minimum: 00
    0x29, 0x07,                     // Local usage maximum: 07
    0x95, 0x08,                     // Report count: 0x08
    0x81, 0x02,                     // Input (variable)

    0x05, 0x08,                     // Usage page 8 (LED page)
    0x19, 0x01,                     // Local usage minimum: 1
    0x29, 0x05,                     // Local usage maximum: 5
    0x15, 0x00,                     // Local minimum: 0
    0x25, 0x01,                     // Local maximum: 1
    0x75, 0x01,                     // Report size: 1 bit
    0x95, 0x05,                     // Report count: 5 reports
    0x91, 0x02,                     // Output (variable)

    0x75, 0x03,                     // Report size: 3 bits
    0x95, 0x01,                     // Report count: 1 report
    0x91, 0x01,                     // Output (constant)

    0xC0                            // End collection

};

const uint8_t MediaRepDesc[ ] =
{
        /*0x05, 0x01,
        0x09, 0x80,
        0xA1, 0x01,

        0x85, 0x02,
        0x09, 0x81,
        0x09, 0x82,
        0x09, 0x83,
        0x15, 0x00,
        0x25, 0x01,
        0x75, 0x01,
        0x95, 0x03,
        0x81, 0x06,

        0x75, 0x05,
        0x95, 0x01,
        0x81, 0x01,

        0x06, 0x00, 0xFF,
        0x09, 0x01,
        0x85, 0x01,
        0x15, 0x00,
        0x26, 0xFF, 0x00,
        0x75, 0x08,
        0x95, 0x07,
        0xB1, 0x00,
        0xC0,*/

        0x05, 0x0C,
        0x09, 0x01,
        0xA1, 0x01,

        //0x85, 0x03,  // report id 3
        0x15, 0x00,             // logical minimum: 0
        0x25, 0x01,             // logical maximum: 1
        0x09, 0xB5,             // Usage scan next track
        0x09, 0xB6,             // Usage scan previous track
        0x09, 0xB7,             // Usage stop
        0x09, 0xCD,             // Usage play/pause
        0x09, 0xE2,             // Usage Mute
        0x09, 0xE5,             // Usage bass boost
        0x09, 0xE7,             // Usage loudness
        0x09, 0xE9,             // Usage volume increment
        0x09, 0xEA,             // Usage volume decrement
        0x0A, 0x52, 0x01,       // Usage bass increment
        0x0A, 0x53, 0x01,       // Usage bass decrement
        0x0A, 0x54, 0x01,       // Usage treble increment
        0x0A, 0x55, 0x01,       // Usage treble decrement
        0x0A, 0x83, 0x01,       // Usage consumer control config
        0x0A, 0x8A, 0x01,       // Usage email reader
        0x0A, 0x92, 0x01,       // Usage calculator
        0x0A, 0x94, 0x01,       // Usage local machine browser
        0x0A, 0x21, 0x02,       // Usage AC search
        0x0A, 0x23, 0x02,       // Usage AC home
        0x0A, 0x24, 0x02,       // Usage AC back
        0x0A, 0x25, 0x02,       // Usage AC forward
        0x0A, 0x26, 0x02,       // Usage AC stop
        0x0A, 0x27, 0x02,       // Usage AC refresh
        0x0A, 0x2A, 0x02,       // Usage AC bookmark
        0x75, 0x01,             // Report size: 1 bit
        0x95, 0x18,             // Report count: 24 report
        0x81, 0x02,             // Input variable
        0xC0
};

/* Qualifier Descriptor */
const uint8_t  MyQuaDesc[ ] =
{
    0x0A,                                                   // bLength
    0x06,                                                   // bDescriptorType
    0x00, 0x02,                                             // bcdUSB
    0x00,                                                   // bDeviceClass
    0x00,                                                   // bDeviceSubClass
    0x00,                                                   // bDeviceProtocol
    0x40,                                                   // bMaxPacketSize0
    0x00,                                                   // bNumConfigurations
    0x00                                                    // bReserved
};

/* Language Descriptor */
const uint8_t  MyLangDescr[] =
{
    0x04, 0x03, 0x09, 0x04
};

/* Manufacturer Descriptor */
const uint8_t  MyManuInfo[] =
{
    0x12, 0x03, 'S', 0, 'h', 0, 'a', 0, 'r', 0, 'p', 0, 'D', 0, 'E', 0, 'V', 0
};

/* Product Information */
const uint8_t  MyProdInfo[] =
{
    0x14, 0x03, 'S', 0, 'h', 0, 'a', 0, 'r', 0, 'p', 0, '8', 0, 'K', 0, '6', 0, '0', 0
};

/* Serial Number Information */
const uint8_t  MySerNumInfo[] =
{
    0x16, 0x03, 'S', 0, '8', 0, 'K', 0, '6', 0, '0', 0, 'E', 0
              , '0', 0, '0', 0, '0', 0, '0', 0
};
