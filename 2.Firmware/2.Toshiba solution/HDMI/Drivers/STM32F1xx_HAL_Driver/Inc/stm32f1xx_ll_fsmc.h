/**
  ******************************************************************************
  * @file    stm32f1xx_ll_fsmc.h
  * @author  MCD Application Team
  * @brief   Header file of FSMC HAL module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2016 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                       opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32F1xx_LL_FSMC_H
#define STM32F1xx_LL_FSMC_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal_def.h"

/** @addtogroup STM32F1xx_HAL_Driver
  * @{
  */

/** @addtogroup FSMC_LL
  * @{
  */

/** @addtogroup FSMC_LL_Private_Macros
  * @{
  */
#if defined FSMC_BANK1

#define IS_FSMC_NORSRAM_BANK(__BANK__) (((__BANK__) == FSMC_NORSRAM_BANK1) || \
                                       ((__BANK__) == FSMC_NORSRAM_BANK2) || \
                                       ((__BANK__) == FSMC_NORSRAM_BANK3) || \
                                       ((__BANK__) == FSMC_NORSRAM_BANK4))
#define IS_FSMC_MUX(__MUX__) (((__MUX__) == FSMC_DATA_ADDRESS_MUX_DISABLE) || \
                             ((__MUX__) == FSMC_DATA_ADDRESS_MUX_ENABLE))
#define IS_FSMC_MEMORY(__MEMORY__) (((__MEMORY__) == FSMC_MEMORY_TYPE_SRAM) || \
                                   ((__MEMORY__) == FSMC_MEMORY_TYPE_PSRAM)|| \
                                   ((__MEMORY__) == FSMC_MEMORY_TYPE_NOR))
#define IS_FSMC_NORSRAM_MEMORY_WIDTH(__WIDTH__) (((__WIDTH__) == FSMC_NORSRAM_MEM_BUS_WIDTH_8)  || \
                                                ((__WIDTH__) == FSMC_NORSRAM_MEM_BUS_WIDTH_16) || \
                                                ((__WIDTH__) == FSMC_NORSRAM_MEM_BUS_WIDTH_32))
#define IS_FSMC_PAGESIZE(__SIZE__) (((__SIZE__) == FSMC_PAGE_SIZE_NONE) || \
                                   ((__SIZE__) == FSMC_PAGE_SIZE_128) || \
                                   ((__SIZE__) == FSMC_PAGE_SIZE_256) || \
                                   ((__SIZE__) == FSMC_PAGE_SIZE_512) || \
                                   ((__SIZE__) == FSMC_PAGE_SIZE_1024))
#define IS_FSMC_ACCESS_MODE(__MODE__) (((__MODE__) == FSMC_ACCESS_MODE_A) || \
                                      ((__MODE__) == FSMC_ACCESS_MODE_B) || \
                                      ((__MODE__) == FSMC_ACCESS_MODE_C) || \
                                      ((__MODE__) == FSMC_ACCESS_MODE_D))
#define IS_FSMC_BURSTMODE(__STATE__) (((__STATE__) == FSMC_BURST_ACCESS_MODE_DISABLE) || \
                                     ((__STATE__) == FSMC_BURST_ACCESS_MODE_ENABLE))
#define IS_FSMC_WAIT_POLARITY(__POLARITY__) (((__POLARITY__) == FSMC_WAIT_SIGNAL_POLARITY_LOW) || \
                                            ((__POLARITY__) == FSMC_WAIT_SIGNAL_POLARITY_HIGH))
#define IS_FSMC_WRAP_MODE(__MODE__) (((__MODE__) == FSMC_WRAP_MODE_DISABLE) || \
                                             ((__MODE__) == FSMC_WRAP_MODE_ENABLE))
#define IS_FSMC_WAIT_SIGNAL_ACTIVE(__ACTIVE__) (((__ACTIVE__) == FSMC_WAIT_TIMING_BEFORE_WS) || \
                                               ((__ACTIVE__) == FSMC_WAIT_TIMING_DURING_WS))
#define IS_FSMC_WRITE_OPERATION(__OPERATION__) (((__OPERATION__) == FSMC_WRITE_OPERATION_DISABLE) || \
                                               ((__OPERATION__) == FSMC_WRITE_OPERATION_ENABLE))
#define IS_FSMC_WAITE_SIGNAL(__SIGNAL__) (((__SIGNAL__) == FSMC_WAIT_SIGNAL_DISABLE) || \
                                         ((__SIGNAL__) == FSMC_WAIT_SIGNAL_ENABLE))
#define IS_FSMC_EXTENDED_MODE(__MODE__) (((__MODE__) == FSMC_EXTENDED_MODE_DISABLE) || \
                                        ((__MODE__) == FSMC_EXTENDED_MODE_ENABLE))
#define IS_FSMC_ASYNWAIT(__STATE__) (((__STATE__) == FSMC_ASYNCHRONOUS_WAIT_DISABLE) || \
                                    ((__STATE__) == FSMC_ASYNCHRONOUS_WAIT_ENABLE))
#define IS_FSMC_DATA_LATENCY(__LATENCY__) (((__LATENCY__) > 1U) && ((__LATENCY__) <= 17U))
#define IS_FSMC_WRITE_BURST(__BURST__) (((__BURST__) == FSMC_WRITE_BURST_DISABLE) || \
                                       ((__BURST__) == FSMC_WRITE_BURST_ENABLE))
#define IS_FSMC_CONTINOUS_CLOCK(__CCLOCK__) (((__CCLOCK__) == FSMC_CONTINUOUS_CLOCK_SYNC_ONLY) || \
                                            ((__CCLOCK__) == FSMC_CONTINUOUS_CLOCK_SYNC_ASYNC))
#define IS_FSMC_ADDRESS_SETUP_TIME(__TIME__) ((__TIME__) <= 15U)
#define IS_FSMC_ADDRESS_HOLD_TIME(__TIME__) (((__TIME__) > 0U) && ((__TIME__) <= 15U))
#define IS_FSMC_DATASETUP_TIME(__TIME__) (((__TIME__) > 0U) && ((__TIME__) <= 255U))
#define IS_FSMC_DATAHOLD_DURATION(__DATAHOLD__) ((__DATAHOLD__) <= 3U)
#define IS_FSMC_TURNAROUND_TIME(__TIME__) ((__TIME__) <= 15U)
#define IS_FSMC_CLK_DIV(__DIV__) (((__DIV__) > 1U) && ((__DIV__) <= 16U))
#define IS_FSMC_NORSRAM_DEVICE(__INSTANCE__) ((__INSTANCE__) == FSMC_NORSRAM_DEVICE)
#define IS_FSMC_NORSRAM_EXTENDED_DEVICE(__INSTANCE__) ((__INSTANCE__) == FSMC_NORSRAM_EXTENDED_DEVICE)

#endif /* FSMC_BANK1 */
#if defined(FSMC_BANK3)

#define IS_FSMC_NAND_BANK(__BANK__) ((__BANK__) == FSMC_NAND_BANK3)
#define IS_FSMC_WAIT_FEATURE(__FEATURE__) (((__FEATURE__) == FSMC_NAND_PCC_WAIT_FEATURE_DISABLE) || \
                                                   ((__FEATURE__) == FSMC_NAND_PCC_WAIT_FEATURE_ENABLE))
#define IS_FSMC_NAND_MEMORY_WIDTH(__WIDTH__) (((__WIDTH__) == FSMC_NAND_PCC_MEM_BUS_WIDTH_8) || \
                                                      ((__WIDTH__) == FSMC_NAND_PCC_MEM_BUS_WIDTH_16))
#define IS_FSMC_ECC_STATE(__STATE__) (((__STATE__) == FSMC_NAND_ECC_DISABLE) || \
                                     ((__STATE__) == FSMC_NAND_ECC_ENABLE))

#define IS_FSMC_ECCPAGE_SIZE(__SIZE__) (((__SIZE__) == FSMC_NAND_ECC_PAGE_SIZE_256BYTE)  || \
                                       ((__SIZE__) == FSMC_NAND_ECC_PAGE_SIZE_512BYTE)  || \
                                       ((__SIZE__) == FSMC_NAND_ECC_PAGE_SIZE_1024BYTE) || \
                                       ((__SIZE__) == FSMC_NAND_ECC_PAGE_SIZE_2048BYTE) || \
                                       ((__SIZE__) == FSMC_NAND_ECC_PAGE_SIZE_4096BYTE) || \
                                       ((__SIZE__) == FSMC_NAND_ECC_PAGE_SIZE_8192BYTE))
#define IS_FSMC_TCLR_TIME(__TIME__) ((__TIME__) <= 255U)
#define IS_FSMC_TAR_TIME(__TIME__) ((__TIME__) <= 255U)
#define IS_FSMC_SETUP_TIME(__TIME__) ((__TIME__) <= 254U)
#define IS_FSMC_WAIT_TIME(__TIME__) ((__TIME__) <= 254U)
#define IS_FSMC_HOLD_TIME(__TIME__) ((__TIME__) <= 254U)
#define IS_FSMC_HIZ_TIME(__TIME__) ((__TIME__) <= 254U)
#define IS_FSMC_NAND_DEVICE(__INSTANCE__) ((__INSTANCE__) == FSMC_NAND_DEVICE)

#endif /* FSMC_BANK3 */
#if defined(FSMC_BANK4)
#define IS_FSMC_PCCARD_DEVICE(__INSTANCE__) ((__INSTANCE__) == FSMC_PCCARD_DEVICE)

#endif /* FSMC_BANK4 */

/**
  * @}
  */

/* Exported typedef ----------------------------------------------------------*/

/** @defgroup FSMC_LL_Exported_typedef FSMC Low Layer Exported Types
  * @{
  */

#if defined FSMC_BANK1
#define FSMC_NORSRAM_TypeDef            FSMC_Bank1_TypeDef
#define FSMC_NORSRAM_EXTENDED_TypeDef   FSMC_Bank1E_TypeDef
#endif /* FSMC_BANK1 */
#if defined(FSMC_BANK3)
#define FSMC_NAND_TypeDef               FSMC_Bank2_3_TypeDef
#endif /* FSMC_BANK3 */
#if defined(FSMC_BANK4)
#define FSMC_PCCARD_TypeDef             FSMC_Bank4_TypeDef
#endif /* FSMC_BANK4 */

#if defined FSMC_BANK1
#define FSMC_NORSRAM_DEVICE             FSMC_Bank1
#define FSMC_NORSRAM_EXTENDED_DEVICE    FSMC_Bank1E
#endif /* FSMC_BANK1 */
#if defined(FSMC_BANK3)
#define FSMC_NAND_DEVICE                FSMC_Bank2_3
#endif /* FSMC_BANK3 */
#if defined(FSMC_BANK4)
#define FSMC_PCCARD_DEVICE              FSMC_Bank4
#endif /* FSMC_BANK4 */

#if defined FSMC_BANK1
/**
  * @brief  FSMC NORSRAM Configuration Structure definition
  */
typedef struct
{
  uint32_t NSBank;                       /*!< Specifies the NORSRAM memory device that will be used.
                                              This parameter can be a value of @ref FSMC_NORSRAM_Bank                     */

  uint32_t DataAddressMux;               /*!< Specifies whether the address and data values are
                                              multiplexed on the data bus or not.
                                              This parameter can be a value of @ref FSMC_Data_Address_Bus_Multiplexing    */

  uint32_t MemoryType;                   /*!< Specifies the type of external memory attached to
                                              the corresponding memory device.
                                              This parameter can be a value of @ref FSMC_Memory_Type                      */

  uint32_t MemoryDataWidth;              /*!< Specifies the external memory device width.
                                              This parameter can be a value of @ref FSMC_NORSRAM_Data_Width               */

  uint32_t BurstAccessMode;              /*!< Enables or disables the burst access mode for Flash memory,
                                              valid only with synchronous burst Flash memories.
                                              This parameter can be a value of @ref FSMC_Burst_Access_Mode                */

  uint32_t WaitSignalPolarity;           /*!< Specifies the wait signal polarity, valid only when accessing
                                              the Flash memory in burst mode.
                                              This parameter can be a value of @ref FSMC_Wait_Signal_Polarity             */

  uint32_t WrapMode;                     /*!< Enables or disables the Wrapped burst access mode for Flash
                                              memory, valid only when accessing Flash memories in burst mode.
                                              This parameter can be a value of @ref FSMC_Wrap_Mode                        */

  uint32_t WaitSignalActive;             /*!< Specifies if the wait signal is asserted by the memory one
                                              clock cycle before the wait state or during the wait state,
                                              valid only when accessing memories in burst mode.
                                              This parameter can be a value of @ref FSMC_Wait_Timing                      */

  uint32_t WriteOperation;               /*!< Enables or disables the write operation in the selected device by the FSMC.
                                              This parameter can be a value of @ref FSMC_Write_Operation                  */

  uint32_t WaitSignal;                   /*!< Enables or disables the wait state insertion via wait
                                              signal, valid for Flash memory access in burst mode.
                                              This parameter can be a value of @ref FSMC_Wait_Signal                      */

  uint32_t ExtendedMode;                 /*!< Enables or disables the extended mode.
                                              This parameter can be a value of @ref FSMC_Extended_Mode                    */

  uint32_t AsynchronousWait;             /*!< Enables or disables wait signal during asynchronous transfers,
                                              valid only with asynchronous Flash memories.
                                              This parameter can be a value of @ref FSMC_AsynchronousWait                 */

  uint32_t WriteBurst;                   /*!< Enables or disables the write burst operation.
                                              This parameter can be a value of @ref FSMC_Write_Burst                      */


  uint32_t PageSize;                     /*!< Specifies the memory page size.
                                              This parameter can be a value of @ref FSMC_Page_Size                        */
} FSMC_NORSRAM_InitTypeDef;

/**
  * @brief  FSMC NORSRAM Timing parameters structure definition
  */
typedef struct
{
  uint32_t AddressSetupTime;             /*!< Defines the number of HCLK cycles to configure
                                              the duration of the address setup time.
                                              This parameter can be a value between Min_Data = 0 and Max_Data = 15.
                                              @note This parameter is not used with synchronous NOR Flash memories.      */

  uint32_t AddressHoldTime;              /*!< Defines the number of HCLK cycles to configure
                                              the duration of the address hold time.
                                              This parameter can be a value between Min_Data = 1 and Max_Data = 15.
                                              @note This parameter is not used with synchronous NOR Flash memories.      */

  uint32_t DataSetupTime;                /*!< Defines the number of HCLK cycles to configure
                                              the duration of the data setup time.
                                              This parameter can be a value between Min_Data = 1 and Max_Data = 255.
                                              @note This parameter is used for SRAMs, ROMs and asynchronous multiplexed
                                              NOR Flash memories.                                                        */

  uint32_t BusTurnAroundDuration;        /*!< Defines the number of HCLK cycles to configure
                                              the duration of the bus turnaround.
                                              This parameter can be a value between Min_Data = 0 and Max_Data = 15.
                                              @note This parameter is only used for multiplexed NOR Flash memories.      */

  uint32_t CLKDivision;                  /*!< Defines the period of CLK clock output signal, expressed in number of
                                              HCLK cycles. This parameter can be a value between Min_Data = 2 and Max_Data = 16.
                                              @note This parameter is not used for asynchronous NOR Flash, SRAM or ROM
                                              accesses.                                                                  */

  uint32_t DataLatency;                  /*!< Defines the number of memory clock cycles to issue
                                              to the memory before getting the first data.
                                              The parameter value depends on the memory type as shown below:
                                              - It must be set to 0 in case of a CRAM
                                              - It is don't care in asynchronous NOR, SRAM or ROM accesses
                                              - It may assume a value between Min_Data = 2 and Max_Data = 17 in NOR Flash memories
                                                with synchronous burst mode enable                                       */

  uint32_t AccessMode;                   /*!< Specifies the asynchronous access mode.
                                              This parameter can be a value of @ref FSMC_Access_Mode                      */
} FSMC_NORSRAM_TimingTypeDef;
#endif /* FSMC_BANK1 */

#if defined(FSMC_BANK3)
/**
  * @brief  FSMC NAND Configuration Structure definition
  */
typedef struct
{
  uint32_t NandBank;               /*!< Specifies the NAND memory device that will be used.
                                        This parameter can be a value of @ref FSMC_NAND_Bank                    */

  uint32_t Waitfeature;            /*!< Enables or disables the Wait feature for the NAND Memory device.
                                        This parameter can be any value of @ref FSMC_Wait_feature               */

  uint32_t MemoryDataWidth;        /*!< Specifies the external memory device width.
                                        This parameter can be any value of @ref FSMC_NAND_Data_Width            */

  uint32_t EccComputation;         /*!< Enables or disables the ECC computation.
                                        This parameter can be any value of @ref FSMC_ECC                        */

  uint32_t ECCPageSize;            /*!< Defines the page size for the extended ECC.
                                        This parameter can be any value of @ref FSMC_ECC_Page_Size              */

  uint32_t TCLRSetupTime;          /*!< Defines the number of HCLK cycles to configure the
                                        delay between CLE low and RE low.
                                        This parameter can be a value between Min_Data = 0 and Max_Data = 255  */

  uint32_t TARSetupTime;           /*!< Defines the number of HCLK cycles to configure the
                                        delay between ALE low and RE low.
                                        This parameter can be a number between Min_Data = 0 and Max_Data = 255 */
} FSMC_NAND_InitTypeDef;
#endif

#if defined(FSMC_BANK3)||defined(FSMC_BANK4)
/**
  * @brief  FSMC NAND Timing parameters structure definition
  */
typedef struct
{
  uint32_t SetupTime;            /*!< Defines the number of HCLK cycles to setup address before
                                      the command assertion for NAND-Flash read or write access
                                      to common/Attribute or I/O memory space (depending on
                                      the memory space timing to be configured).
                                      This parameter can be a value between Min_Data = 0 and Max_Data = 254    */

  uint32_t WaitSetupTime;        /*!< Defines the minimum number of HCLK cycles to assert the
                                      command for NAND-Flash read or write access to
                                      common/Attribute or I/O memory space (depending on the
                                      memory space timing to be configured).
                                      This parameter can be a number between Min_Data = 0 and Max_Data = 254   */

  uint32_t HoldSetupTime;        /*!< Defines the number of HCLK clock cycles to hold address
                                      (and data for write access) after the command de-assertion
                                      for NAND-Flash read or write access to common/Attribute
                                      or I/O memory space (depending on the memory space timing
                                      to be configured).
                                      This parameter can be a number between Min_Data = 0 and Max_Data = 254   */

  uint32_t HiZSetupTime;         /*!< Defines the number of HCLK clock cycles during which the
                                      data bus is kept in HiZ after the start of a NAND-Flash
                                      write access to common/Attribute or I/O memory space (depending
                                      on the memory space timing to be configured).
                                      This parameter can be a number between Min_Data = 0 and Max_Data = 254   */
} FSMC_NAND_PCC_TimingTypeDef;
#endif /* FSMC_BANK3 */

#if defined(FSMC_BANK4)
/**
  * @brief FSMC PCCARD Configuration Structure definition
  */
typedef struct
{
  uint32_t Waitfeature;            /*!< Enables or disables the Wait feature for the PCCARD Memory device.
                                        This parameter can be any value of @ref FSMC_Wait_feature      */

  uint32_t TCLRSetupTime;          /*!< Defines the number of HCLK cycles to configure the
                                        delay between CLE low and RE low.
                                        This parameter can be a value between Min_Data = 0 and Max_Data = 255  */

  uint32_t TARSetupTime;           /*!< Defines the number of HCLK cycles to configure the
                                        delay between ALE low and RE low.
                                        This parameter can be a number between Min_Data = 0 and Max_Data = 255 */
}FSMC_PCCARD_InitTypeDef;
#endif

/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @addtogroup FSMC_LL_Exported_Constants FSMC Low Layer Exported Constants
  * @{
  */
#if defined FSMC_BANK1

/** @defgroup FSMC_LL_NOR_SRAM_Controller FSMC NOR/SRAM Controller
  * @{
  */

/** @defgroup FSMC_NORSRAM_Bank FSMC NOR/SRAM Bank
  * @{
  */
#define FSMC_NORSRAM_BANK1                       (0x00000000U)
#define FSMC_NORSRAM_BANK2                       (0x00000002U)
#define FSMC_NORSRAM_BANK3                       (0x00000004U)
#define FSMC_NORSRAM_BANK4                       (0x00000006U)
/**
  * @}
  */

/** @defgroup FSMC_Data_Address_Bus_Multiplexing FSMC Data Address Bus Multiplexing
  * @{
  */
#define FSMC_DATA_ADDRESS_MUX_DISABLE            (0x00000000U)
#define FSMC_DATA_ADDRESS_MUX_ENABLE             (0x00000002U)
/**
  * @}
  */

/** @defgroup FSMC_Memory_Type FSMC Memory Type
  * @{
  */
#define FSMC_MEMORY_TYPE_SRAM                    (0x00000000U)
#define FSMC_MEMORY_TYPE_PSRAM                   (0x00000004U)
#define FSMC_MEMORY_TYPE_NOR                     (0x00000008U)
/**
  * @}
  */

/** @defgroup FSMC_NORSRAM_Data_Width FSMC NORSRAM Data Width
  * @{
  */
#define FSMC_NORSRAM_MEM_BUS_WIDTH_8             (0x00000000U)
#define FSMC_NORSRAM_MEM_BUS_WIDTH_16            (0x00000010U)
#define FSMC_NORSRAM_MEM_BUS_WIDTH_32            (0x00000020U)
/**
  * @}
  */

/** @defgroup FSMC_NORSRAM_Flash_Access FSMC NOR/SRAM Flash Access
  * @{
  */
#define FSMC_NORSRAM_FLASH_ACCESS_ENABLE         (0x00000040U)
#define FSMC_NORSRAM_FLASH_ACCESS_DISABLE        (0x00000000U)
/**
  * @}
  */

/** @defgroup FSMC_Burst_Access_Mode FSMC Burst Access Mode
  * @{
  */
#define FSMC_BURST_ACCESS_MODE_DISABLE           (0x00000000U)
#define FSMC_BURST_ACCESS_MODE_ENABLE            (0x00000100U)
/**
  * @}
  */

/** @defgroup FSMC_Wait_Signal_Polarity FSMC Wait Signal Polarity
  * @{
  */
#define FSMC_WAIT_SIGNAL_POLARITY_LOW            (0x00000000U)
#define FSMC_WAIT_SIGNAL_POLARITY_HIGH           (0x00000200U)
/**
  * @}
  */

/** @defgroup FSMC_Wrap_Mode FSMC Wrap Mode
  * @{
  */
#define FSMC_WRAP_MODE_DISABLE                   (0x00000000U)
#define FSMC_WRAP_MODE_ENABLE                    (0x00000400U)
/**
  * @}
  */

/** @defgroup FSMC_Wait_Timing FSMC Wait Timing
  * @{
  */
#define FSMC_WAIT_TIMING_BEFORE_WS               (0x00000000U)
#define FSMC_WAIT_TIMING_DURING_WS               (0x00000800U)
/**
  * @}
  */

/** @defgroup FSMC_Write_Operation FSMC Write Operation
  * @{
  */
#define FSMC_WRITE_OPERATION_DISABLE             (0x00000000U)
#define FSMC_WRITE_OPERATION_ENABLE              (0x00001000U)
/**
  * @}
  */

/** @defgroup FSMC_Wait_Signal FSMC Wait Signal
  * @{
  */
#define FSMC_WAIT_SIGNAL_DISABLE                 (0x00000000U)
#define FSMC_WAIT_SIGNAL_ENABLE                  (0x00002000U)
/**
  * @}
  */

/** @defgroup FSMC_Extended_Mode FSMC Extended Mode
  * @{
  */
#define FSMC_EXTENDED_MODE_DISABLE               (0x00000000U)
#define FSMC_EXTENDED_MODE_ENABLE                (0x00004000U)
/**
  * @}
  */

/** @defgroup FSMC_AsynchronousWait FSMC Asynchronous Wait
  * @{
  */
#define FSMC_ASYNCHRONOUS_WAIT_DISABLE           (0x00000000U)
#define FSMC_ASYNCHRONOUS_WAIT_ENABLE            (0x00008000U)
/**
  * @}
  */

/** @defgroup FSMC_Page_Size FSMC Page Size
  * @{
  */
#define FSMC_PAGE_SIZE_NONE                      (0x00000000U)
#define FSMC_PAGE_SIZE_128                       (0x00010000U)
#define FSMC_PAGE_SIZE_256                       (0x00020000U)
#define FSMC_PAGE_SIZE_512                       (0x00030000U)
#define FSMC_PAGE_SIZE_1024                      (0x00040000U)
/**
  * @}
  */

/** @defgroup FSMC_Write_Burst FSMC Write Burst
  * @{
  */
#define FSMC_WRITE_BURST_DISABLE                 (0x00000000U)
#define FSMC_WRITE_BURST_ENABLE                  (0x00080000U)
/**
  * @}
  */

/** @defgroup FSMC_Continous_Clock FSMC Continuous Clock
  * @{
  */
#define FSMC_CONTINUOUS_CLOCK_SYNC_ONLY          (0x00000000U)
#define FSMC_CONTINUOUS_CLOCK_SYNC_ASYNC         (0x00100000U)
/**
  * @}
  */

/** @defgroup FSMC_Access_Mode FSMC Access Mode
  * @{
  */
#define FSMC_ACCESS_MODE_A                       (0x00000000U)
#define FSMC_ACCESS_MODE_B                       (0x10000000U)
#define FSMC_ACCESS_MODE_C                       (0x20000000U)
#define FSMC_ACCESS_MODE_D                       (0x30000000U)
/**
  * @}
  */

/**
  * @}
  */
#endif /* FSMC_BANK1 */

#if defined(FSMC_BANK3)||defined(FSMC_BANK4)

/** @defgroup FSMC_LL_NAND_Controller FSMC NAND Controller
  * @{
  */
/** @defgroup FSMC_NAND_Bank FSMC NAND Bank
  * @{
  */
#define FSMC_NAND_BANK2                          (0x00000010U)
#define FSMC_NAND_BANK3                          (0x00000100U)
/**
  * @}
  */

/** @defgroup FSMC_Wait_feature FSMC Wait feature
  * @{
  */
#define FSMC_NAND_PCC_WAIT_FEATURE_DISABLE       (0x00000000U)
#define FSMC_NAND_PCC_WAIT_FEATURE_ENABLE        (0x00000002U)
/**
  * @}
  */

/** @defgroup FSMC_PCR_Memory_Type FSMC PCR Memory Type
  * @{
  */
#if defined(FSMC_BANK4)
#define FSMC_PCR_MEMORY_TYPE_PCCARD              (0x00000000U)
#endif
#define FSMC_PCR_MEMORY_TYPE_NAND                (0x00000008U)
/**
  * @}
  */

/** @defgroup FSMC_NAND_Data_Width FSMC NAND Data Width
  * @{
  */
#define FSMC_NAND_PCC_MEM_BUS_WIDTH_8            (0x00000000U)
#define FSMC_NAND_PCC_MEM_BUS_WIDTH_16           (0x00000010U)
/**
  * @}
  */

/** @defgroup FSMC_ECC FSMC ECC
  * @{
  */
#define FSMC_NAND_ECC_DISABLE                    (0x00000000U)
#define FSMC_NAND_ECC_ENABLE                     (0x00000040U)
/**
  * @}
  */

/** @defgroup FSMC_ECC_Page_Size FSMC ECC Page Size
  * @{
  */
#define FSMC_NAND_ECC_PAGE_SIZE_256BYTE          (0x00000000U)
#define FSMC_NAND_ECC_PAGE_SIZE_512BYTE          (0x00020000U)
#define FSMC_NAND_ECC_PAGE_SIZE_1024BYTE         (0x00040000U)
#define FSMC_NAND_ECC_PAGE_SIZE_2048BYTE         (0x00060000U)
#define FSMC_NAND_ECC_PAGE_SIZE_4096BYTE         (0x00080000U)
#define FSMC_NAND_ECC_PAGE_SIZE_8192BYTE         (0x000A0000U)
/**
  * @}
  */

/**
  * @}
  */
#endif /* FSMC_BANK3 */


/** @defgroup FSMC_LL_Interrupt_definition FSMC Low Layer Interrupt definition
  * @{
  */
#if defined(FSMC_BANK3)||defined(FSMC_BANK4)
#define FSMC_IT_RISING_EDGE                      (0x00000008U)
#define FSMC_IT_LEVEL                            (0x00000010U)
#define FSMC_IT_FALLING_EDGE                     (0x00000020U)
#endif /* FSMC_BANK3 */
/**
  * @}
  */

/** @defgroup FSMC_LL_Flag_definition FSMC Low Layer Flag definition
  * @{
  */
#if defined(FSMC_BANK3)||defined(FSMC_BANK4)
#define FSMC_FLAG_RISING_EDGE                    (0x00000001U)
#define FSMC_FLAG_LEVEL                          (0x00000002U)
#define FSMC_FLAG_FALLING_EDGE                   (0x00000004U)
#define FSMC_FLAG_FEMPT                          (0x00000040U)
#endif /* FSMC_BANK3 */
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/* Private macro -------------------------------------------------------------*/
/** @defgroup FSMC_LL_Private_Macros FSMC_LL  Private Macros
  * @{
  */
#if defined FSMC_BANK1
/** @defgroup FSMC_LL_NOR_Macros FSMC NOR/SRAM Macros
  * @brief macros to handle NOR device enable/disable and read/write operations
  * @{
  */

/**
  * @brief  Enable the NORSRAM device access.
  * @param  __INSTANCE__ FSMC_NORSRAM Instance
  * @param  __BANK__ FSMC_NORSRAM Bank
  * @retval None
  */
#define __FSMC_NORSRAM_ENABLE(__INSTANCE__, __BANK__)  ((__INSTANCE__)->BTCR[(__BANK__)]\
                                                       |= FSMC_BCRx_MBKEN)

/**
  * @brief  Disable the NORSRAM device access.
  * @param  __INSTANCE__ FSMC_NORSRAM Instance
  * @param  __BANK__ FSMC_NORSRAM Bank
  * @retval None
  */
#define __FSMC_NORSRAM_DISABLE(__INSTANCE__, __BANK__) ((__INSTANCE__)->BTCR[(__BANK__)]\
                                                       &= ~FSMC_BCRx_MBKEN)

/**
  * @}
  */
#endif /* FSMC_BANK1 */

#if defined(FSMC_BANK3)
/** @defgroup FSMC_LL_NAND_Macros FSMC NAND Macros
  *  @brief macros to handle NAND device enable/disable
  *  @{
  */

/**
  * @brief  Enable the NAND device access.
  * @param  __INSTANCE__ FSMC_NAND Instance
  * @param  __BANK__     FSMC_NAND Bank
  * @retval None
  */
#define __FSMC_NAND_ENABLE(__INSTANCE__, __BANK__)  (((__BANK__) == FSMC_NAND_BANK2)? ((__INSTANCE__)->PCR2 |= FSMC_PCRx_PBKEN): \
                                                             ((__INSTANCE__)->PCR3 |= FSMC_PCRx_PBKEN))

/**
  * @brief  Disable the NAND device access.
  * @param  __INSTANCE__ FSMC_NAND Instance
  * @param  __BANK__     FSMC_NAND Bank
  * @retval None
  */
#define __FSMC_NAND_DISABLE(__INSTANCE__, __BANK__) (((__BANK__) == FSMC_NAND_BANK2)? CLEAR_BIT((__INSTANCE__)->PCR2, FSMC_PCRx_PBKEN): \
                                                             CLEAR_BIT((__INSTANCE__)->PCR3, FSMC_PCRx_PBKEN))

/**
  * @}
  */
#endif

#if defined(FSMC_BANK4)
/** @defgroup FSMC_LL_PCCARD_Macros FMC PCCARD Macros
  *  @brief macros to handle PCCARD read/write operations
  *  @{
  */
/**
  * @brief  Enable the PCCARD device access.
  * @param  __INSTANCE__ FSMC_PCCARD Instance
  * @retval None
  */
#define __FSMC_PCCARD_ENABLE(__INSTANCE__)  ((__INSTANCE__)->PCR4 |= FSMC_PCRx_PBKEN)

/**
  * @brief  Disable the PCCARD device access.
  * @param  __INSTANCE__ FSMC_PCCARD Instance
  * @retval None
  */
#define __FSMC_PCCARD_DISABLE(__INSTANCE__) ((__INSTANCE__)->PCR4 &= ~FSMC_PCRx_PBKEN)
/**
  * @}
  */

#endif
#if defined(FSMC_BANK3)
/** @defgroup FSMC_LL_NAND_Interrupt FSMC NAND Interrupt
  * @brief macros to handle NAND interrupts
  * @{
  */

/**
  * @brief  Enable the NAND device interrupt.
  * @param  __INSTANCE__  FSMC_NAND instance
  * @param  __BANK__     FSMC_NAND Bank
  * @param  __INTERRUPT__ FSMC_NAND interrupt
  *         This parameter can be any combination of the following values:
  *            @arg FSMC_IT_RISING_EDGE: Interrupt rising edge.
  *            @arg FSMC_IT_LEVEL: Interrupt level.
  *            @arg FSMC_IT_FALLING_EDGE: Interrupt falling edge.
  * @retval None
  */
#define __FSMC_NAND_ENABLE_IT(__INSTANCE__, __BANK__, __INTERRUPT__)  (((__BANK__) == FSMC_NAND_BANK2)? ((__INSTANCE__)->SR2 |= (__INTERRUPT__)): \
                                                                               ((__INSTANCE__)->SR3 |= (__INTERRUPT__)))

/**
  * @brief  Disable the NAND device interrupt.
  * @param  __INSTANCE__  FSMC_NAND Instance
  * @param  __BANK__     FSMC_NAND Bank
  * @param  __INTERRUPT__ FSMC_NAND interrupt
  *         This parameter can be any combination of the following values:
  *            @arg FSMC_IT_RISING_EDGE: Interrupt rising edge.
  *            @arg FSMC_IT_LEVEL: Interrupt level.
  *            @arg FSMC_IT_FALLING_EDGE: Interrupt falling edge.
  * @retval None
  */
#define __FSMC_NAND_DISABLE_IT(__INSTANCE__, __BANK__, __INTERRUPT__)  (((__BANK__) == FSMC_NAND_BANK2)? ((__INSTANCE__)->SR2 &= ~(__INTERRUPT__)): \
                                                                                ((__INSTANCE__)->SR3 &= ~(__INTERRUPT__)))

/**
  * @brief  Get flag status of the NAND device.
  * @param  __INSTANCE__ FSMC_NAND Instance
  * @param  __BANK__     FSMC_NAND Bank
  * @param  __FLAG__     FSMC_NAND flag
  *         This parameter can be any combination of the following values:
  *            @arg FSMC_FLAG_RISING_EDGE: Interrupt rising edge flag.
  *            @arg FSMC_FLAG_LEVEL: Interrupt level edge flag.
  *            @arg FSMC_FLAG_FALLING_EDGE: Interrupt falling edge flag.
  *            @arg FSMC_FLAG_FEMPT: FIFO empty flag.
  * @retval The state of FLAG (SET or RESET).
  */
#define __FSMC_NAND_GET_FLAG(__INSTANCE__, __BANK__, __FLAG__)  (((__BANK__) == FSMC_NAND_BANK2)? (((__INSTANCE__)->SR2 &(__FLAG__)) == (__FLAG__)): \
                                                                         (((__INSTANCE__)->SR3 &(__FLAG__)) == (__FLAG__)))

/**
  * @brief  Clear flag status of the NAND device.
  * @param  __INSTANCE__ FSMC_NAND Instance
  * @param  __BANK__     FSMC_NAND Bank
  * @param  __FLAG__     FSMC_NAND flag
  *         This parameter can be any combination of the following values:
  *            @arg FSMC_FLAG_RISING_EDGE: Interrupt rising edge flag.
  *            @arg FSMC_FLAG_LEVEL: Interrupt level edge flag.
  *            @arg FSMC_FLAG_FALLING_EDGE: Interrupt falling edge flag.
  *            @arg FSMC_FLAG_FEMPT: FIFO empty flag.
  * @retval None
  */
#define __FSMC_NAND_CLEAR_FLAG(__INSTANCE__, __BANK__, __FLAG__)  (((__BANK__) == FSMC_NAND_BANK2)? ((__INSTANCE__)->SR2 &= ~(__FLAG__)): \
                                                                           ((__INSTANCE__)->SR3 &= ~(__FLAG__)))

/**
  * @}
  */
#endif /* FSMC_BANK3 */

#if defined(FSMC_BANK4)
/** @defgroup FSMC_LL_PCCARD_Interrupt FSMC PCCARD Interrupt
  * @brief macros to handle PCCARD interrupts
  * @{
  */

/**
  * @brief  Enable the PCCARD device interrupt.
  * @param  __INSTANCE__ FSMC_PCCARD instance
  * @param  __INTERRUPT__ FSMC_PCCARD interrupt
  *         This parameter can be any combination of the following values:
  *            @arg FSMC_IT_RISING_EDGE: Interrupt rising edge.
  *            @arg FSMC_IT_LEVEL: Interrupt level.
  *            @arg FSMC_IT_FALLING_EDGE: Interrupt falling edge.
  * @retval None
  */
#define __FSMC_PCCARD_ENABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->SR4 |= (__INTERRUPT__))

/**
  * @brief  Disable the PCCARD device interrupt.
  * @param  __INSTANCE__ FSMC_PCCARD instance
  * @param  __INTERRUPT__ FSMC_PCCARD interrupt
  *         This parameter can be any combination of the following values:
  *            @arg FSMC_IT_RISING_EDGE: Interrupt rising edge.
  *            @arg FSMC_IT_LEVEL: Interrupt level.
  *            @arg FSMC_IT_FALLING_EDGE: Interrupt falling edge.
  * @retval None
  */
#define __FSMC_PCCARD_DISABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->SR4 &= ~(__INTERRUPT__))

/**
  * @brief  Get flag status of the PCCARD device.
  * @param  __INSTANCE__ FSMC_PCCARD instance
  * @param  __FLAG__ FSMC_PCCARD flag
  *         This parameter can be any combination of the following values:
  *            @arg  FSMC_FLAG_RISING_EDGE: Interrupt rising edge flag.
  *            @arg  FSMC_FLAG_LEVEL: Interrupt level edge flag.
  *            @arg  FSMC_FLAG_FALLING_EDGE: Interrupt falling edge flag.
  *            @arg  FSMC_FLAG_FEMPT: FIFO empty flag.
  * @retval The state of FLAG (SET or RESET).
  */
#define __FSMC_PCCARD_GET_FLAG(__INSTANCE__, __FLAG__)  (((__INSTANCE__)->SR4 &(__FLAG__)) == (__FLAG__))

/**
  * @brief  Clear flag status of the PCCARD device.
  * @param  __INSTANCE__ FSMC_PCCARD instance
  * @param  __FLAG__ FSMC_PCCARD flag
  *         This parameter can be any combination of the following values:
  *            @arg  FSMC_FLAG_RISING_EDGE: Interrupt rising edge flag.
  *            @arg  FSMC_FLAG_LEVEL: Interrupt level edge flag.
  *            @arg  FSMC_FLAG_FALLING_EDGE: Interrupt falling edge flag.
  *            @arg  FSMC_FLAG_FEMPT: FIFO empty flag.
  * @retval None
  */
#define __FSMC_PCCARD_CLEAR_FLAG(__INSTANCE__, __FLAG__)  ((__INSTANCE__)->SR4 &= ~(__FLAG__))

/**
  * @}
  */
#endif

/**
  * @}
  */

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup FSMC_LL_Private_Functions FSMC LL Private Functions
  *  @{
  */

#if defined FSMC_BANK1
/** @defgroup FSMC_LL_NORSRAM  NOR SRAM
  *  @{
  */
/** @defgroup FSMC_LL_NORSRAM_Private_Functions_Group1 NOR SRAM Initialization/de-initialization functions
  *  @{
  */
HAL_StatusTypeDef  FSMC_NORSRAM_Init(FSMC_NORSRAM_TypeDef *Device,
                                    FSMC_NORSRAM_InitTypeDef *Init);
HAL_StatusTypeDef  FSMC_NORSRAM_Timing_Init(FSMC_NORSRAM_TypeDef *Device,
                                           FSMC_NORSRAM_TimingTypeDef *Timing, uint32_t Bank);
HAL_StatusTypeDef  FSMC_NORSRAM_Extended_Timing_Init(FSMC_NORSRAM_EXTENDED_TypeDef *Device,
                                                    FSMC_NORSRAM_TimingTypeDef *Timing, uint32_t Bank, uint32_t ExtendedMode);
HAL_StatusTypeDef  FSMC_NORSRAM_DeInit(FSMC_NORSRAM_TypeDef *Device,
                                      FSMC_NORSRAM_EXTENDED_TypeDef *ExDevice, uint32_t Bank);
/**
  * @}
  */

/** @defgroup FSMC_LL_NORSRAM_Private_Functions_Group2 NOR SRAM Control functions
  *  @{
  */
HAL_StatusTypeDef  FSMC_NORSRAM_WriteOperation_Enable(FSMC_NORSRAM_TypeDef *Device, uint32_t Bank);
HAL_StatusTypeDef  FSMC_NORSRAM_WriteOperation_Disable(FSMC_NORSRAM_TypeDef *Device, uint32_t Bank);
/**
  * @}
  */
/**
  * @}
  */
#endif /* FSMC_BANK1 */

#if defined(FSMC_BANK3)
/** @defgroup FSMC_LL_NAND NAND
  *  @{
  */
/** @defgroup FSMC_LL_NAND_Private_Functions_Group1 NAND Initialization/de-initialization functions
  *  @{
  */
HAL_StatusTypeDef  FSMC_NAND_Init(FSMC_NAND_TypeDef *Device, FSMC_NAND_InitTypeDef *Init);
HAL_StatusTypeDef  FSMC_NAND_CommonSpace_Timing_Init(FSMC_NAND_TypeDef *Device,
                                                    FSMC_NAND_PCC_TimingTypeDef *Timing, uint32_t Bank);
HAL_StatusTypeDef  FSMC_NAND_AttributeSpace_Timing_Init(FSMC_NAND_TypeDef *Device,
                                                       FSMC_NAND_PCC_TimingTypeDef *Timing, uint32_t Bank);
HAL_StatusTypeDef  FSMC_NAND_DeInit(FSMC_NAND_TypeDef *Device, uint32_t Bank);
/**
  * @}
  */

/** @defgroup FSMC_LL_NAND_Private_Functions_Group2 NAND Control functions
  *  @{
  */
HAL_StatusTypeDef  FSMC_NAND_ECC_Enable(FSMC_NAND_TypeDef *Device, uint32_t Bank);
HAL_StatusTypeDef  FSMC_NAND_ECC_Disable(FSMC_NAND_TypeDef *Device, uint32_t Bank);
HAL_StatusTypeDef  FSMC_NAND_GetECC(FSMC_NAND_TypeDef *Device, uint32_t *ECCval, uint32_t Bank,
                                   uint32_t Timeout);
/**
  * @}
  */
/**
  * @}
  */
#endif /* FSMC_BANK3 */

#if defined(FSMC_BANK4)
/** @defgroup FSMC_LL_PCCARD PCCARD
  *  @{
  */
/** @defgroup FSMC_LL_PCCARD_Private_Functions_Group1 PCCARD Initialization/de-initialization functions
  *  @{
  */
HAL_StatusTypeDef  FSMC_PCCARD_Init(FSMC_PCCARD_TypeDef *Device, FSMC_PCCARD_InitTypeDef *Init);
HAL_StatusTypeDef  FSMC_PCCARD_CommonSpace_Timing_Init(FSMC_PCCARD_TypeDef *Device,
                                                               FSMC_NAND_PCC_TimingTypeDef *Timing);
HAL_StatusTypeDef  FSMC_PCCARD_AttributeSpace_Timing_Init(FSMC_PCCARD_TypeDef *Device,
                                                                  FSMC_NAND_PCC_TimingTypeDef *Timing);
HAL_StatusTypeDef  FSMC_PCCARD_IOSpace_Timing_Init(FSMC_PCCARD_TypeDef *Device,
                                                           FSMC_NAND_PCC_TimingTypeDef *Timing);
HAL_StatusTypeDef  FSMC_PCCARD_DeInit(FSMC_PCCARD_TypeDef *Device);
/**
  * @}
  */
/**
  * @}
  */
#endif /* FSMC_BANK4 */


/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* STM32F1xx_LL_FSMC_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
