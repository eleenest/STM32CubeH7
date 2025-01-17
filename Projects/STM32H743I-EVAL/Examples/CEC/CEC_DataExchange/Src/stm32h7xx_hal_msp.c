/**
  ******************************************************************************
  * @file    CEC/CEC_DataExchange/Src/stm32h7xx_hal_msp.c 
  * @author  MCD Application Team
  * @brief   HAL MSP module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/** @addtogroup STM32H7xx_HAL_Examples
  * @{
  */

/** @defgroup CEC_DataExchange
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/** @defgroup HAL_MSP_Private_Functions
  * @{
  */

/**
  * @brief CEC MSP Initialization 
  *        This function configures the hardware resources used in this example: 
  *           - Peripheral's clock enable
  *           - Peripheral's GPIO Configuration  
  * @param hcec: CEC handle pointer
  * @retval None
  */  
void HAL_CEC_MspInit(CEC_HandleTypeDef *hcec)
{
  GPIO_InitTypeDef  GPIO_InitStruct;
  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_PeriphCLKInitTypeDef RCC_PeriphClkInit;
  
  /* Enable CEC clock */
  __HAL_RCC_CEC_CLK_ENABLE();  
    
  /* Enable GPIO clock and initialize GPIO */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  GPIO_InitStruct.Pin = GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF4_CEC;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
  
  /* Enable and set CEC Interrupt to the lowest priority */
  HAL_NVIC_SetPriority(CEC_IRQn, 0x0F, 0);
  HAL_NVIC_EnableIRQ(CEC_IRQn);

  /* Enable HSE Oscillator and activate PLL with HSE as source */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI|RCC_OSCILLATORTYPE_LSE;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.LSEState = RCC_LSE_ON;
  HAL_RCC_OscConfig(&RCC_OscInitStruct);

  /* Select LSE as CEC source clock */
  RCC_PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_CEC;
  RCC_PeriphClkInit.CecClockSelection = RCC_CECCLKSOURCE_LSE;
  HAL_RCCEx_PeriphCLKConfig(&RCC_PeriphClkInit);
}

/**
  * @brief CEC MSP De-Initialization 
  *        This function disable the Peripheral's clock
  * @param hcec: CEC handle pointer
  * @retval None
  */
void HAL_CEC_MspDeInit(CEC_HandleTypeDef *hcec)
{ 
  /* Disable CEC clock */ 
  __HAL_RCC_CEC_CLK_DISABLE();
  /* Disable GPIO TX/RX clock */
  __HAL_RCC_GPIOA_CLK_DISABLE();
}

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
