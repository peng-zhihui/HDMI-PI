/**
  ******************************************************************************
  * @file    stm32f1xx_hal_dac_ex.h
  * @author  MCD Application Team
  * @brief   Header file of DAC HAL Extended module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2016 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32F1xx_HAL_DAC_EX_H
#define STM32F1xx_HAL_DAC_EX_H

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup STM32F1xx_HAL_Driver
  * @{
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal_def.h"

#if defined(DAC)

/** @addtogroup DACEx
  * @{
  */

/* Exported types ------------------------------------------------------------*/

/**
  * @brief  HAL State structures definition
  */

/* Exported constants --------------------------------------------------------*/

/** @defgroup DACEx_Exported_Constants DACEx Exported Constants
  * @{
  */

/** @defgroup DACEx_lfsrunmask_triangleamplitude DACEx lfsrunmask triangle amplitude
  * @{
  */
#define DAC_LFSRUNMASK_BIT0                0x00000000U                                                         /*!< Unmask DAC channel LFSR bit0 for noise wave generation */
#define DAC_LFSRUNMASK_BITS1_0             (                                                   DAC_CR_MAMP1_0) /*!< Unmask DAC channel LFSR bit[1:0] for noise wave generation */
#define DAC_LFSRUNMASK_BITS2_0             (                                  DAC_CR_MAMP1_1                 ) /*!< Unmask DAC channel LFSR bit[2:0] for noise wave generation */
#define DAC_LFSRUNMASK_BITS3_0             (                                  DAC_CR_MAMP1_1 | DAC_CR_MAMP1_0) /*!< Unmask DAC channel LFSR bit[3:0] for noise wave generation */
#define DAC_LFSRUNMASK_BITS4_0             (                 DAC_CR_MAMP1_2                                  ) /*!< Unmask DAC channel LFSR bit[4:0] for noise wave generation */
#define DAC_LFSRUNMASK_BITS5_0             (                 DAC_CR_MAMP1_2                  | DAC_CR_MAMP1_0) /*!< Unmask DAC channel LFSR bit[5:0] for noise wave generation */
#define DAC_LFSRUNMASK_BITS6_0             (                 DAC_CR_MAMP1_2 | DAC_CR_MAMP1_1                 ) /*!< Unmask DAC channel LFSR bit[6:0] for noise wave generation */
#define DAC_LFSRUNMASK_BITS7_0             (                 DAC_CR_MAMP1_2 | DAC_CR_MAMP1_1 | DAC_CR_MAMP1_0) /*!< Unmask DAC channel LFSR bit[7:0] for noise wave generation */
#define DAC_LFSRUNMASK_BITS8_0             (DAC_CR_MAMP1_3                                                   ) /*!< Unmask DAC channel LFSR bit[8:0] for noise wave generation */
#define DAC_LFSRUNMASK_BITS9_0             (DAC_CR_MAMP1_3                                   | DAC_CR_MAMP1_0) /*!< Unmask DAC channel LFSR bit[9:0] for noise wave generation */
#define DAC_LFSRUNMASK_BITS10_0            (DAC_CR_MAMP1_3                  | DAC_CR_MAMP1_1                 ) /*!< Unmask DAC channel LFSR bit[10:0] for noise wave generation */
#define DAC_LFSRUNMASK_BITS11_0            (DAC_CR_MAMP1_3                  | DAC_CR_MAMP1_1 | DAC_CR_MAMP1_0) /*!< Unmask DAC channel LFSR bit[11:0] for noise wave generation */
#define DAC_TRIANGLEAMPLITUDE_1            0x00000000U                                                         /*!< Select max triangle amplitude of 1 */
#define DAC_TRIANGLEAMPLITUDE_3            (                                                   DAC_CR_MAMP1_0) /*!< Select max triangle amplitude of 3 */
#define DAC_TRIANGLEAMPLITUDE_7            (                                  DAC_CR_MAMP1_1                 ) /*!< Select max triangle amplitude of 7 */
#define DAC_TRIANGLEAMPLITUDE_15           (                                  DAC_CR_MAMP1_1 | DAC_CR_MAMP1_0) /*!< Select max triangle amplitude of 15 */
#define DAC_TRIANGLEAMPLITUDE_31           (                 DAC_CR_MAMP1_2                                  ) /*!< Select max triangle amplitude of 31 */
#define DAC_TRIANGLEAMPLITUDE_63           (                 DAC_CR_MAMP1_2                  | DAC_CR_MAMP1_0) /*!< Select max triangle amplitude of 63 */
#define DAC_TRIANGLEAMPLITUDE_127          (                 DAC_CR_MAMP1_2 | DAC_CR_MAMP1_1                 ) /*!< Select max triangle amplitude of 127 */
#define DAC_TRIANGLEAMPLITUDE_255          (                 DAC_CR_MAMP1_2 | DAC_CR_MAMP1_1 | DAC_CR_MAMP1_0) /*!< Select max triangle amplitude of 255 */
#define DAC_TRIANGLEAMPLITUDE_511          (DAC_CR_MAMP1_3                                                   ) /*!< Select max triangle amplitude of 511 */
#define DAC_TRIANGLEAMPLITUDE_1023         (DAC_CR_MAMP1_3                                   | DAC_CR_MAMP1_0) /*!< Select max triangle amplitude of 1023 */
#define DAC_TRIANGLEAMPLITUDE_2047         (DAC_CR_MAMP1_3                  | DAC_CR_MAMP1_1                 ) /*!< Select max triangle amplitude of 2047 */
#define DAC_TRIANGLEAMPLITUDE_4095         (DAC_CR_MAMP1_3                  | DAC_CR_MAMP1_1 | DAC_CR_MAMP1_0) /*!< Select max triangle amplitude of 4095 */

/**
  * @}
  */

/** @defgroup DACEx_trigger_selection DAC trigger selection
  * @{
  */
#define DAC_TRIGGER_NONE                   0x00000000U            /*!< Conversion is automatic once the DAC1_DHRxxxx register 
                                                                       has been loaded, and not by external trigger */
#define DAC_TRIGGER_T6_TRGO                ((uint32_t)                                                    DAC_CR_TEN1)  /*!< TIM6 TRGO selected as external conversion trigger for DAC channel */
#define DAC_TRIGGER_T7_TRGO                ((uint32_t)(                 DAC_CR_TSEL1_1                  | DAC_CR_TEN1)) /*!< TIM7 TRGO selected as external conversion trigger for DAC channel */
#define DAC_TRIGGER_T2_TRGO                ((uint32_t)(DAC_CR_TSEL1_2                                   | DAC_CR_TEN1)) /*!< TIM2 TRGO selected as external conversion trigger for DAC channel */
#define DAC_TRIGGER_T4_TRGO                ((uint32_t)(DAC_CR_TSEL1_2                  | DAC_CR_TSEL1_0 | DAC_CR_TEN1)) /*!< TIM4 TRGO selected as external conversion trigger for DAC channel */
#define DAC_TRIGGER_EXT_IT9                ((uint32_t)(DAC_CR_TSEL1_2 | DAC_CR_TSEL1_1                  | DAC_CR_TEN1)) /*!< EXTI Line9 event selected as external conversion trigger for DAC channel */
#define DAC_TRIGGER_SOFTWARE               ((uint32_t)(DAC_CR_TSEL1                                     | DAC_CR_TEN1)) /*!< Conversion started by software trigger for DAC channel */

#if defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG)
/* For STM32F10x high-density and XL-density devices: TIM8 */
#define DAC_TRIGGER_T8_TRGO                ((uint32_t)                                   DAC_CR_TSEL1_0 | DAC_CR_TEN1)  /*!< TIM8 TRGO selected as external conversion trigger for DAC channel */
#endif /* STM32F101xE || STM32F101xG || STM32F103xE || STM32F103xG */
   
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F105xC) || defined (STM32F107xC)
/* For STM32F10x connectivity line devices and STM32F100x devices: TIM3 */
#define DAC_TRIGGER_T3_TRGO                ((uint32_t)                                   DAC_CR_TSEL1_0 | DAC_CR_TEN1)  /*!< TIM3 TRGO selected as external conversion trigger for DAC channel */
#endif /* STM32F100xB || STM32F100xE || STM32F105xC || STM32F107xC */

/* Availability of trigger from TIM5 and TIM15:                               */
/*  - For STM32F10x value line devices STM32F100xB:                           */
/*    trigger from TIM15 is available, TIM5 not available.                    */
/*  - For STM32F10x value line devices STM32F100xE:                           */
/*    trigger from TIM15 and TIM5 are both available,                         */
/*    selection depends on remap (with TIM5 as default configuration).        */
/*  - Other STM32F1 devices:                                                  */
/*    trigger from TIM5 is available, TIM15 not  available.                   */
#if defined (STM32F100xB)
#define DAC_TRIGGER_T15_TRGO               ((uint32_t)(                 DAC_CR_TSEL1_1 | DAC_CR_TSEL1_0 | DAC_CR_TEN1)) /*!< TIM15 TRGO selected as external conversion trigger for DAC channel */
#else

#define DAC_TRIGGER_T5_TRGO                ((uint32_t)(                 DAC_CR_TSEL1_1 | DAC_CR_TSEL1_0 | DAC_CR_TEN1)) /*!< TIM5 TRGO selected as external conversion trigger for DAC channel */

#if defined (STM32F100xE)
/*!< DAC trigger availability depending on STM32F1 devices:
     For STM32F100x high-density value line devices, the TIM15 TRGO event can be selected 
     as replacement of TIM5 TRGO if the MISC_REMAP bit in the AFIO_MAPR2 register is set.
     Refer to macro "__HAL_AFIO_REMAP_MISC_ENABLE()/__HAL_AFIO_REMAP_MISC_DISABLE()".
     Otherwise, TIM5 TRGO is used and TIM15 TRGO is not used (default case).
     For more details please refer to the AFIO section. */
#define DAC_TRIGGER_T15_TRGO    DAC_TRIGGER_T5_TRGO
#endif /* STM32F100xE */
   
#endif /* STM32F100xB */
/**
  * @}
  */

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/

/** @defgroup DACEx_Private_Macros DACEx Private Macros
  * @{
  */

#if defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG)
#define IS_DAC_TRIGGER(TRIGGER) (((TRIGGER) == DAC_TRIGGER_NONE)    || \
                                 ((TRIGGER) == DAC_TRIGGER_T6_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T8_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T7_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T5_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T2_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T4_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_EXT_IT9) || \
                                 ((TRIGGER) == DAC_TRIGGER_SOFTWARE))
#endif /* STM32F101xE || STM32F101xG || STM32F103xE || STM32F103xG */
#if defined (STM32F100xE) || defined (STM32F105xC) || defined (STM32F107xC)
#define IS_DAC_TRIGGER(TRIGGER) (((TRIGGER) == DAC_TRIGGER_NONE)    || \
                                 ((TRIGGER) == DAC_TRIGGER_T6_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T3_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T7_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T5_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T2_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T4_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_EXT_IT9) || \
                                 ((TRIGGER) == DAC_TRIGGER_SOFTWARE))
#endif /* STM32F100xE || STM32F105xC || STM32F107xC */
#if defined (STM32F100xB)
#define IS_DAC_TRIGGER(TRIGGER) (((TRIGGER) == DAC_TRIGGER_NONE)     || \
                                 ((TRIGGER) == DAC_TRIGGER_T6_TRGO)  || \
                                 ((TRIGGER) == DAC_TRIGGER_T3_TRGO)  || \
                                 ((TRIGGER) == DAC_TRIGGER_T7_TRGO)  || \
                                 ((TRIGGER) == DAC_TRIGGER_T15_TRGO) || \
                                 ((TRIGGER) == DAC_TRIGGER_T2_TRGO)  || \
                                 ((TRIGGER) == DAC_TRIGGER_T4_TRGO)  || \
                                 ((TRIGGER) == DAC_TRIGGER_EXT_IT9)  || \
                                 ((TRIGGER) == DAC_TRIGGER_SOFTWARE))
#endif /* STM32F100xB */

#define IS_DAC_LFSR_UNMASK_TRIANGLE_AMPLITUDE(VALUE) (((VALUE) == DAC_LFSRUNMASK_BIT0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS1_0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS2_0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS3_0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS4_0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS5_0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS6_0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS7_0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS8_0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS9_0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS10_0) || \
                                                      ((VALUE) == DAC_LFSRUNMASK_BITS11_0) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_1) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_3) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_7) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_15) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_31) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_63) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_127) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_255) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_511) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_1023) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_2047) || \
                                                      ((VALUE) == DAC_TRIANGLEAMPLITUDE_4095))
/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/* Extended features functions ***********************************************/

/** @addtogroup DACEx_Exported_Functions
  * @{
  */

/** @addtogroup DACEx_Exported_Functions_Group2
  * @{
  */
/* IO operation functions *****************************************************/

HAL_StatusTypeDef HAL_DACEx_TriangleWaveGenerate(DAC_HandleTypeDef *hdac, uint32_t Channel, uint32_t Amplitude);
HAL_StatusTypeDef HAL_DACEx_NoiseWaveGenerate(DAC_HandleTypeDef *hdac, uint32_t Channel, uint32_t Amplitude);

HAL_StatusTypeDef HAL_DACEx_DualSetValue(DAC_HandleTypeDef *hdac, uint32_t Alignment, uint32_t Data1, uint32_t Data2);
uint32_t HAL_DACEx_DualGetValue(DAC_HandleTypeDef *hdac);

void HAL_DACEx_ConvCpltCallbackCh2(DAC_HandleTypeDef *hdac);
void HAL_DACEx_ConvHalfCpltCallbackCh2(DAC_HandleTypeDef *hdac);
void HAL_DACEx_ErrorCallbackCh2(DAC_HandleTypeDef *hdac);
void HAL_DACEx_DMAUnderrunCallbackCh2(DAC_HandleTypeDef *hdac);


/**
  * @}
  */

/**
  * @}
  */

/** @addtogroup DACEx_Private_Functions
  * @{
  */

/* DAC_DMAConvCpltCh2 / DAC_DMAErrorCh2 / DAC_DMAHalfConvCpltCh2 */
/* are called by HAL_DAC_Start_DMA */
void DAC_DMAConvCpltCh2(DMA_HandleTypeDef *hdma);
void DAC_DMAErrorCh2(DMA_HandleTypeDef *hdma);
void DAC_DMAHalfConvCpltCh2(DMA_HandleTypeDef *hdma);

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#endif /* DAC */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /*STM32F1xx_HAL_DAC_EX_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
