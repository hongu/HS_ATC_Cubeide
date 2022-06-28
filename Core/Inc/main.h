/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MT3_ABS_SCK_Pin GPIO_PIN_2
#define MT3_ABS_SCK_GPIO_Port GPIOE
#define MT3_ABS_DATA_Pin GPIO_PIN_5
#define MT3_ABS_DATA_GPIO_Port GPIOE
#define KEY_IN1_Pin GPIO_PIN_8
#define KEY_IN1_GPIO_Port GPIOI
#define KEY_IN2_Pin GPIO_PIN_9
#define KEY_IN2_GPIO_Port GPIOI
#define KEY_IN3_Pin GPIO_PIN_10
#define KEY_IN3_GPIO_Port GPIOI
#define KEY_IN4_Pin GPIO_PIN_11
#define KEY_IN4_GPIO_Port GPIOI
#define KEY_IN5_Pin GPIO_PIN_12
#define KEY_IN5_GPIO_Port GPIOI
#define KEY_IN6_Pin GPIO_PIN_13
#define KEY_IN6_GPIO_Port GPIOI
#define KEY_IN7_Pin GPIO_PIN_14
#define KEY_IN7_GPIO_Port GPIOI
#define SCIF_RX_Pin GPIO_PIN_6
#define SCIF_RX_GPIO_Port GPIOF
#define SCIF_TX_Pin GPIO_PIN_7
#define SCIF_TX_GPIO_Port GPIOF
#define MT1_ERR_Pin GPIO_PIN_8
#define MT1_ERR_GPIO_Port GPIOF
#define MT2_ERR_Pin GPIO_PIN_9
#define MT2_ERR_GPIO_Port GPIOF
#define MT3_ERR_Pin GPIO_PIN_10
#define MT3_ERR_GPIO_Port GPIOF
#define BAT_CHECK_Pin GPIO_PIN_0
#define BAT_CHECK_GPIO_Port GPIOC
#define TORQUE_AD_MT1_Pin GPIO_PIN_1
#define TORQUE_AD_MT1_GPIO_Port GPIOC
#define TORQUE_AD_MT2_Pin GPIO_PIN_2
#define TORQUE_AD_MT2_GPIO_Port GPIOC
#define TORQUE_AD_MT3_Pin GPIO_PIN_3
#define TORQUE_AD_MT3_GPIO_Port GPIOC
#define EQEP3A_Pin GPIO_PIN_0
#define EQEP3A_GPIO_Port GPIOA
#define EQEP3B_Pin GPIO_PIN_1
#define EQEP3B_GPIO_Port GPIOA
#define SCIB_TX_Pin GPIO_PIN_2
#define SCIB_TX_GPIO_Port GPIOA
#define DAC_CLR_Pin GPIO_PIN_2
#define DAC_CLR_GPIO_Port GPIOH
#define DAC_BIN_Pin GPIO_PIN_3
#define DAC_BIN_GPIO_Port GPIOH
#define SCIB_RX_Pin GPIO_PIN_3
#define SCIB_RX_GPIO_Port GPIOA
#define ROM_CS_Pin GPIO_PIN_4
#define ROM_CS_GPIO_Port GPIOA
#define ROM_SCK_Pin GPIO_PIN_5
#define ROM_SCK_GPIO_Port GPIOA
#define ROM_MISO_Pin GPIO_PIN_6
#define ROM_MISO_GPIO_Port GPIOA
#define ROM_MOSI_Pin GPIO_PIN_7
#define ROM_MOSI_GPIO_Port GPIOA
#define TORQUE_AD_MT4_Pin GPIO_PIN_4
#define TORQUE_AD_MT4_GPIO_Port GPIOC
#define ROM_WP_Pin GPIO_PIN_0
#define ROM_WP_GPIO_Port GPIOB
#define KEY_IN8_Pin GPIO_PIN_15
#define KEY_IN8_GPIO_Port GPIOI
#define TIM1_OUT1_Pin GPIO_PIN_0
#define TIM1_OUT1_GPIO_Port GPIOJ
#define TIM1_OUT2_Pin GPIO_PIN_1
#define TIM1_OUT2_GPIO_Port GPIOJ
#define TIM1_OUT3_Pin GPIO_PIN_2
#define TIM1_OUT3_GPIO_Port GPIOJ
#define TIM1_OUT4_Pin GPIO_PIN_3
#define TIM1_OUT4_GPIO_Port GPIOJ
#define TIM2_OUT1_Pin GPIO_PIN_4
#define TIM2_OUT1_GPIO_Port GPIOJ
#define MT4_ERR_Pin GPIO_PIN_11
#define MT4_ERR_GPIO_Port GPIOF
#define SPARE_IN1_Pin GPIO_PIN_12
#define SPARE_IN1_GPIO_Port GPIOF
#define SPARE_IN2_Pin GPIO_PIN_13
#define SPARE_IN2_GPIO_Port GPIOF
#define SPARE_IN3_Pin GPIO_PIN_14
#define SPARE_IN3_GPIO_Port GPIOF
#define SPARE_IN4_Pin GPIO_PIN_15
#define SPARE_IN4_GPIO_Port GPIOF
#define SPARE_IN5_Pin GPIO_PIN_0
#define SPARE_IN5_GPIO_Port GPIOG
#define SPARE_IN6_Pin GPIO_PIN_1
#define SPARE_IN6_GPIO_Port GPIOG
#define SCIC_TX_Pin GPIO_PIN_10
#define SCIC_TX_GPIO_Port GPIOB
#define SCIC_RX_Pin GPIO_PIN_11
#define SCIC_RX_GPIO_Port GPIOB
#define TIM2_OUT2_Pin GPIO_PIN_5
#define TIM2_OUT2_GPIO_Port GPIOJ
#define MT1_ABS_SCK_Pin GPIO_PIN_6
#define MT1_ABS_SCK_GPIO_Port GPIOH
#define MT1_ABS_DATA_Pin GPIO_PIN_7
#define MT1_ABS_DATA_GPIO_Port GPIOH
#define ENC_SEL1_Pin GPIO_PIN_8
#define ENC_SEL1_GPIO_Port GPIOH
#define ENC_SEL2_Pin GPIO_PIN_9
#define ENC_SEL2_GPIO_Port GPIOH
#define DIRECT_OUT5_Pin GPIO_PIN_12
#define DIRECT_OUT5_GPIO_Port GPIOH
#define MT_DAC_EN_Pin GPIO_PIN_8
#define MT_DAC_EN_GPIO_Port GPIOD
#define EQEP4A_Pin GPIO_PIN_12
#define EQEP4A_GPIO_Port GPIOD
#define EQEP4B_Pin GPIO_PIN_13
#define EQEP4B_GPIO_Port GPIOD
#define TIM2_OUT3_Pin GPIO_PIN_6
#define TIM2_OUT3_GPIO_Port GPIOJ
#define TIM2_OUT4_Pin GPIO_PIN_7
#define TIM2_OUT4_GPIO_Port GPIOJ
#define PIO_IN1_Pin GPIO_PIN_8
#define PIO_IN1_GPIO_Port GPIOJ
#define PIO_IN2_Pin GPIO_PIN_9
#define PIO_IN2_GPIO_Port GPIOJ
#define PIO_IN3_Pin GPIO_PIN_10
#define PIO_IN3_GPIO_Port GPIOJ
#define PIO_IN4_Pin GPIO_PIN_11
#define PIO_IN4_GPIO_Port GPIOJ
#define ATTACH1_UP_IN_Pin GPIO_PIN_0
#define ATTACH1_UP_IN_GPIO_Port GPIOK
#define ATTACH1_DOWN_IN_Pin GPIO_PIN_1
#define ATTACH1_DOWN_IN_GPIO_Port GPIOK
#define ATTACH2_UP_IN_Pin GPIO_PIN_2
#define ATTACH2_UP_IN_GPIO_Port GPIOK
#define SPARE_IN7_Pin GPIO_PIN_2
#define SPARE_IN7_GPIO_Port GPIOG
#define SPARE_IN8_Pin GPIO_PIN_3
#define SPARE_IN8_GPIO_Port GPIOG
#define SPARE_IN9_Pin GPIO_PIN_4
#define SPARE_IN9_GPIO_Port GPIOG
#define PIO_GO_Pin GPIO_PIN_6
#define PIO_GO_GPIO_Port GPIOG
#define EQEP2A_Pin GPIO_PIN_6
#define EQEP2A_GPIO_Port GPIOC
#define EQEP2B_Pin GPIO_PIN_7
#define EQEP2B_GPIO_Port GPIOC
#define EQEP1A_Pin GPIO_PIN_8
#define EQEP1A_GPIO_Port GPIOA
#define EQEP1B_Pin GPIO_PIN_9
#define EQEP1B_GPIO_Port GPIOA
#define SCIA_RE_Pin GPIO_PIN_11
#define SCIA_RE_GPIO_Port GPIOA
#define SCIB_RE_Pin GPIO_PIN_12
#define SCIB_RE_GPIO_Port GPIOA
#define DIRECT_OUT6_Pin GPIO_PIN_13
#define DIRECT_OUT6_GPIO_Port GPIOH
#define DIRECT_OUT7_Pin GPIO_PIN_14
#define DIRECT_OUT7_GPIO_Port GPIOH
#define DIRECT_OUT8_Pin GPIO_PIN_15
#define DIRECT_OUT8_GPIO_Port GPIOH
#define DAC_NSS_Pin GPIO_PIN_0
#define DAC_NSS_GPIO_Port GPIOI
#define SC_CD_Pin GPIO_PIN_3
#define SC_CD_GPIO_Port GPIOD
#define PIO_IN5_Pin GPIO_PIN_12
#define PIO_IN5_GPIO_Port GPIOJ
#define PIO_IN6_Pin GPIO_PIN_13
#define PIO_IN6_GPIO_Port GPIOJ
#define PIO_IN7_Pin GPIO_PIN_14
#define PIO_IN7_GPIO_Port GPIOJ
#define PIO_IN8_Pin GPIO_PIN_15
#define PIO_IN8_GPIO_Port GPIOJ
#define SCIE_TX_Pin GPIO_PIN_9
#define SCIE_TX_GPIO_Port GPIOG
#define DIRECT_OUT1_Pin GPIO_PIN_10
#define DIRECT_OUT1_GPIO_Port GPIOG
#define DIRECT_OUT2_Pin GPIO_PIN_11
#define DIRECT_OUT2_GPIO_Port GPIOG
#define DIRECT_OUT3_Pin GPIO_PIN_12
#define DIRECT_OUT3_GPIO_Port GPIOG
#define DIRECT_OUT4_Pin GPIO_PIN_13
#define DIRECT_OUT4_GPIO_Port GPIOG
#define SCIE_RX_Pin GPIO_PIN_14
#define SCIE_RX_GPIO_Port GPIOG
#define ATTACH2_DOWN_IN_Pin GPIO_PIN_3
#define ATTACH2_DOWN_IN_GPIO_Port GPIOK
#define MT1_ABS_RESET_Pin GPIO_PIN_4
#define MT1_ABS_RESET_GPIO_Port GPIOK
#define MT3_ABS_RESET_Pin GPIO_PIN_5
#define MT3_ABS_RESET_GPIO_Port GPIOK
#define MARK1_IN_Pin GPIO_PIN_6
#define MARK1_IN_GPIO_Port GPIOK
#define MARK2_IN_Pin GPIO_PIN_7
#define MARK2_IN_GPIO_Port GPIOK
#define MOTOR_ON_Pin GPIO_PIN_15
#define MOTOR_ON_GPIO_Port GPIOG
#define SCIA_TX_Pin GPIO_PIN_6
#define SCIA_TX_GPIO_Port GPIOB
#define SCIA_RX_Pin GPIO_PIN_7
#define SCIA_RX_GPIO_Port GPIOB
#define SCID_RX_Pin GPIO_PIN_0
#define SCID_RX_GPIO_Port GPIOE
#define SCID_TX_Pin GPIO_PIN_1
#define SCID_TX_GPIO_Port GPIOE
#define LED_BLUE_Pin GPIO_PIN_5
#define LED_BLUE_GPIO_Port GPIOI
#define LED_RED_Pin GPIO_PIN_6
#define LED_RED_GPIO_Port GPIOI
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOI
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
