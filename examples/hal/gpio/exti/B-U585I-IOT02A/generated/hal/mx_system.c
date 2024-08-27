/**
  ******************************************************************************
  * @file           : mx_system.c
  * @brief          : STM32 system program body
  *                   Applicative target system level initialization
  *                   (system clock, cache, TZ...) and system level peripherals
  *                   initialization. mx_system_init() service is called by the main
  *                   before jumping the example entry point.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "mx_system.h"
#include "mx_interrupts.h"
#include "mx_rcc.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private functions prototype------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/
system_status_t mx_system_init(void)
{
  if(pre_system_init_hook() != SYSTEM_OK)
  {
    return SYSTEM_PRESYSTEM_ERROR;
  }

  /*
    startup system section
  */
  if (HAL_Init() != HAL_OK)
  {
    return SYSTEM_STARTUP_ERROR;
  }

  /*
    Interruptions section
  */
  if (mx_interrupts_init() != SYSTEM_OK)
  {
    return SYSTEM_INTERRUPTS_ERROR;
  }

  /*
    Clock system section
  */
  if(mx_rcc_cfg1_hal_init() != SYSTEM_OK)
  {
    return SYSTEM_CLOCK_ERROR;
  }

  /* peripherals clock configuration and activation
    is centralized: no clock activation/deactivation in pppi_init */

  if(mx_rcc_peripherals_clock_config() != SYSTEM_OK)
  {
    return SYSTEM_CLOCK_ERROR;
  }

  /*
    Peripheral init section
  */
  /** mx_gpio_default_cfg1_hal_init() has been generated,
    * (mx_example_exti_trigger_init)
    * but it is not the default configuration.
    */

  /*
    mx_basic_stdio_init
  */
  if (mx_usart1_cfg1_hal_uart_init() == NULL)
  {
    return SYSTEM_PERIPHERAL_ERROR;
  }


  if (post_system_init_hook() != SYSTEM_OK)
  {
    return SYSTEM_POSTSYSTEM_ERROR;
  }

  return SYSTEM_OK;
}

/**
  * @brief  User hook function called before the HAL_Init() function
  * @retval system_status_t System status
  */
__WEAK system_status_t pre_system_init_hook(void)
{
  /* NOTE : This function should not be modified, when the callback is needed,
            the pre_system_init_hook should be implemented in the user file
   */
  return SYSTEM_OK;
}

/**
  * @brief  User hook function called after the HAL_Init() and Peripheral init functions
  * @retval system_status_t System status
  */
__WEAK system_status_t post_system_init_hook(void)
{
  /* NOTE : This function should not be modified, when the callback is needed,
            the post_system_init_hook should be implemented in the user file
   */
  return SYSTEM_OK;
}
