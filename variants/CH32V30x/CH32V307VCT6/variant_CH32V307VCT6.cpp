/**
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

#include "pins_arduino.h"




// Digital PinName array
const PinName digitalPin[] = {
  PA_0,  //D0/A0
  PA_1,  //D1/A1
  PA_2,  //D2/A2
  PA_3,  //D3/A3
  PA_4,  //D4/A4    SPI1_NSS
  PA_5,  //D5/A5    SPI1_SCK

  PA_10,  //D6      USART1_RX
  PA_9,   //D7      USART1_TX
  PA_8,   //D8   
  PA_7,   //D9      SPI_MOSI    TIM8_CH1N  TIM3_CH2  
  PA_6,   //D10     SPI1_MISO  
  PB_5,   //D11                 TIM3_CH2_2 TIM10_CH3_1  
  PB_8,   //D12                 TIM4_CH3 TIM10_CH1 TIM8_CH3_1
  PB_9,   //D13                  
  PB_1,   //D14                 TIM3_CH4 TIM8_CH3N TIM1_CH3N_1    TIM3_CH4_2 TIM9_CH2N_1 
  PB_0,   //D15                 TIM3_CH3 TIM8_CH2N TIM1_CH2N_1    TIM3_CH3_2 TIM9_CH1N_1 
  PB_12,  //D16    SPI2_NSS
  PB_15,  //D17    SPI2_MOSI
  PB_14,  //D18    SPI2_MISO 
  PB_13,  //D19    SPI2_SCK 
  PB_11,  //D20    I2C2_SDA
  PB_10   //D21    I2C2_SCL

  PA_11,  //D22
  PA_12,  //D23
  PA_13,  //D24
  PA_14,  //D25
  PA_15,  //D26
  PB_2,   //D27
  PB_3,   //D28
  PB_4,   //D29
  PB_6,   //D30
  PB_7,   //D31
  PC_0,   //D32 ...
  PC_1,
  PC_2,
  PC_3,
  PC_4,
  PC_5,
  PC_6,
  PC_7,
  PC_8,
  PC_9,
  PC_10,
  PC_11,
  PC_12,
  PC_13,
  PC_14,
  PC_15,
  PD_0,
  PD_1,
  PD_2,
  PD_3,
  PD_4,
  PD_5,
  PD_6,
  PD_7,
  PD_8,
  PD_9,
  PD_10,
  PD_11,
  PD_12,
  PD_13,
  PD_14,
  PD_15,
  PE_0,
  PE_1,
  PE_2,
  PE_3,
  PE_4,
  PE_5,
  PE_6,
  PE_7,
  PE_8,
  PE_9,
  PE_10,
  PE_11,
  PE_12,
  PE_13,
  PE_14,
  PE_15

};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA2
  3,  // A3,  PA3
  4,  // A4,  PA4
  5   // A5,  PA5
};



