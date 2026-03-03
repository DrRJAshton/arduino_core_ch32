/*
 *******************************************************************************
 * Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
 * All rights reserved.
 *
 * This software component is licensed by WCH under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#pragma once

/* ENABLE Peripherals */
#define                         ADC_MODULE_ENABLED
#define                         UART_MODULE_ENABLED
#define                         DAC_MODULE_ENABLED
#define                         SPI_MODULE_ENABLED  
#define                         I2C_MODULE_ENABLED
#define                         TIM_MODULE_ENABLED    

/* CH32V307VCT6 Pins */
#define PA0                     PIN_A0
#define PA1                     PIN_A1
#define PA2                     PIN_A2
#define PA3                     PIN_A3
#define PA4                     PIN_A4
#define PA5                     PIN_A5

#define PA10                    6
#define PA9                     7
#define PA8                     8                     
#define PA7                     9
#define PA6                     10
#define PB5                     11 
#define PB8                     12
#define PB9                     13
#define PB1                     14
#define PB0                     15
#define PB12                    16
#define PB15                    17       
#define PB14                    18
#define PB13                    19
#define PB11                    20
#define PB10                    21 


#define PA11                    22
#define PA12                    23
#define PA13                    24
#define PA14                    25
#define PA15                    26

#define PB2			27
#define PB3			28
#define PB4			29
#define PB6			30
#define PB7			31

#define PC0  PC_0
#define PC1  PC_1
#define PC2  PC_2
#define PC3  PC_3
#define PC4  PC_4
#define PC5  PC_5
#define PC6  PC_6
#define PC7  PC_7
#define PC8  PC_8
#define PC9  PC_9
#define PC10 PC_10
#define PC11 PC_11
#define PC12 PC_12
#define PC13 PC_13
#define PC14 PC_14
#define PC15 PC_15

#define PD0  PD_0
#define PD1  PD_1
#define PD2  PD_2
#define PD3  PD_3
#define PD4  PD_4
#define PD5  PD_5
#define PD6  PD_6
#define PD7  PD_7
#define PD8  PD_8
#define PD9  PD_9
#define PD10 PD_10
#define PD11 PD_11
#define PD12 PD_12
#define PD13 PD_13
#define PD14 PD_14
#define PD15 PD_15

#define PE0  PE_0
#define PE1  PE_1
#define PE2  PE_2
#define PE3  PE_3
#define PE4  PE_4
#define PE5  PE_5
#define PE6  PE_6
#define PE7  PE_7
#define PE8  PE_8
#define PE9  PE_9
#define PE10 PE_10
#define PE11 PE_11
#define PE12 PE_12
#define PE13 PE_13
#define PE14 PE_14
#define PE15 PE_15

// Alternate pins number
#define PA0_ALT1                (PA0  | ALT1) 
#define PA1_ALT1                (PA1  | ALT1)
#define PA2_ALT1                (PA2  | ALT1)
#define PA3_ALT1                (PA3  | ALT1)
#define PA4_ALT1                (PA4  | ALT1)
#define PA5_ALT1                (PA5  | ALT1)

#define PA4_ALT2                (PA4  | ALT2) //for DAC_Channel1
#define PA5_ALT2                (PA5  | ALT2) //for DAC_Channel2




#define NUM_DIGITAL_PINS        22
#define NUM_ANALOG_INPUTS       6
// #define ADC_CTLR_ADCAL          
#define ADC_RESOLUTION          12


// On-board LED pin number
#ifndef LED_BUILTIN
  #define LED_BUILTIN           PNUM_NOT_DEFINED
#endif



// On-board user button
#ifndef USER_BTN
  #define USER_BTN              PNUM_NOT_DEFINED
#endif

// SPI definitions
#ifndef PIN_SPI_SS
  #define PIN_SPI_SS            PA4
#endif
#ifndef PIN_SPI_SS1
  #define PIN_SPI_SS1           PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS2
  #define PIN_SPI_SS2           PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS3
  #define PIN_SPI_SS3           PNUM_NOT_DEFINED
#endif

#ifndef PIN_SPI_MOSI
  #define PIN_SPI_MOSI          PA7
#endif
#ifndef PIN_SPI_MISO
  #define PIN_SPI_MISO          PA6
#endif
#ifndef PIN_SPI_SCK
  #define PIN_SPI_SCK           PA5
#endif

// I2C definitions
  #define PIN_WIRE_SDA          PB11
  #define PIN_WIRE_SCL          PB10

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE            TIM3
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO           TIM2
#endif


// UART Definitions
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  1
#endif
// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PA10
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PA9
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #ifndef SERIAL_PORT_MONITOR
    #define SERIAL_PORT_MONITOR   Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE
    #define SERIAL_PORT_HARDWARE  Serial
  #endif
#endif


