/**
  ******************************************************************************
  * file           : mx_led.h
  * brief          : Exporting led part resources
  ******************************************************************************
  * attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MX_LED_H
#define MX_LED_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "led.h"


#include "mx_hal_def.h"

/* Exported macro for ------------------------------------------------------------*/
/* GPIO LEDs  macros auto-generated */
#define MX_STATUS_LED_GPIO_PORT        HAL_GPIOE
#define MX_STATUS_LED_PIN              HAL_GPIO_PIN_13
#define MX_STATUS_LED_ACTIVE_STATE     HAL_GPIO_PIN_SET
#define MX_STATUS_LED                  1

#ifdef __cplusplus
}
#endif

#endif /* MX_LED_H */
