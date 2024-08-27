/**
  ******************************************************************************
  * @file           : mx_hal_def.h
  * @brief          : Exporting peripherals initialization
  *                   Include entry for the target folder to the application.
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
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MX_HAL_DEF_H
#define MX_HAL_DEF_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Includes ------------------------------------------------------------------*/
#include "stm32_hal.h"
#include "mx_gpio_default.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* ########### Aliases to initialization functions ########### */

/* *********************************************************** */
/*        gpio_default_instance0: aliases for initialization functions */
/* *********************************************************** */

/**
  * @brief  Initialize the mx_gpio_default_cfg1_hal with HAL layer
  *         Name of the User label:
  *                   mx_example_gpio
  *         Name of the Config label:
  *                   
  * @retval hal_gpio_handle_t Pointer on the handle on the gpio_default instance
  */
#define mx_example_gpio_init mx_gpio_default_cfg1_hal_init


/* ########################################################### */

/* ########### Aliases to De-Initialization functions ########### */

/* *********************************************************** */
/*        gpio_default_instance0: aliases for De-Initialization functions */
/* *********************************************************** */

/**
  * @brief  De-Initialize the mx_gpio_default_cfg1_hal with HAL layer
  *         Name of the User label:
  *                   mx_example_gpio
  *         Name of the Config label:
  *                   
  */
#define mx_example_gpio_deinit mx_gpio_default_cfg1_hal_deinit


/* ########################################################### */

/* ########### Aliases to get HAL handle functions ########### */

/* *********************************************************** */
/*        GPIO: aliases for get EXTI object functions */
/* *********************************************************** */



/* ########################################################### */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MX_HAL_DEF_H */
