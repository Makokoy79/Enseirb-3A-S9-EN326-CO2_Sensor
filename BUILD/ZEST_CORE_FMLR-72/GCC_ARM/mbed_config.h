/*
 * mbed SDK
 * Copyright (c) 2017 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Automatically generated configuration file.
// DO NOT EDIT, content will be overwritten.

#ifndef __MBED_CONFIG_DATA__
#define __MBED_CONFIG_DATA__

// Configuration parameters
#define CLOCK_SOURCE                                                      USE_PLL_HSI                                                                                        // set by target:ZEST_CORE_FMLR-72
#define LPTICKER_DELAY_TICKS                                              0                                                                                                  // set by target:MCU_STM32L0
#define MBED_CONF_APP_MAIN_STACK_SIZE                                     4096                                                                                               // set by application
#define MBED_CONF_DRIVERS_OSPI_CSN                                        OSPI_FLASH1_CSN                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_DQS                                        OSPI_FLASH1_DQS                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO0                                        OSPI_FLASH1_IO0                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO1                                        OSPI_FLASH1_IO1                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO2                                        OSPI_FLASH1_IO2                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO3                                        OSPI_FLASH1_IO3                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO4                                        OSPI_FLASH1_IO4                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO5                                        OSPI_FLASH1_IO5                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO6                                        OSPI_FLASH1_IO6                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_IO7                                        OSPI_FLASH1_IO7                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_OSPI_SCK                                        OSPI_FLASH1_SCK                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_CSN                                        QSPI_FLASH1_CSN                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_IO0                                        QSPI_FLASH1_IO0                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_IO1                                        QSPI_FLASH1_IO1                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_IO2                                        QSPI_FLASH1_IO2                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_IO3                                        QSPI_FLASH1_IO3                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_QSPI_SCK                                        QSPI_FLASH1_SCK                                                                                    // set by library:drivers
#define MBED_CONF_DRIVERS_UART_SERIAL_RXBUF_SIZE                          256                                                                                                // set by library:drivers
#define MBED_CONF_DRIVERS_UART_SERIAL_TXBUF_SIZE                          256                                                                                                // set by library:drivers
#define MBED_CONF_EVENTS_PRESENT                                          1                                                                                                  // set by library:events
#define MBED_CONF_EVENTS_SHARED_DISPATCH_FROM_APPLICATION                 0                                                                                                  // set by library:events
#define MBED_CONF_EVENTS_SHARED_EVENTSIZE                                 768                                                                                                // set by library:events
#define MBED_CONF_EVENTS_SHARED_HIGHPRIO_EVENTSIZE                        256                                                                                                // set by library:events
#define MBED_CONF_EVENTS_SHARED_HIGHPRIO_STACKSIZE                        1024                                                                                               // set by library:events
#define MBED_CONF_EVENTS_SHARED_STACKSIZE                                 2048                                                                                               // set by library:events
#define MBED_CONF_EVENTS_USE_LOWPOWER_TIMER_TICKER                        0                                                                                                  // set by library:events
#define MBED_CONF_LORA_ADR_ON                                             1                                                                                                  // set by library:lora
#define MBED_CONF_LORA_APPLICATION_EUI                                    { 0x10, 0xCE, 0x45, 0xFF, 0xFE, 0x00, 0x8C, 0x7E }                                                 // set by application[*]
#define MBED_CONF_LORA_APPLICATION_KEY                                    { 0x9A, 0xC4, 0x9E, 0x29, 0xEB, 0x01, 0x5F, 0xDA, 0x7E, 0x12, 0x90, 0x30, 0xF0, 0x2B, 0x03, 0xE7 } // set by application[*]
#define MBED_CONF_LORA_APPSKEY                                            {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}   // set by library:lora
#define MBED_CONF_LORA_APP_PORT                                           15                                                                                                 // set by library:lora
#define MBED_CONF_LORA_AUTOMATIC_UPLINK_MESSAGE                           1                                                                                                  // set by library:lora
#define MBED_CONF_LORA_DEVICE_ADDRESS                                     0x00000000                                                                                         // set by library:lora
#define MBED_CONF_LORA_DEVICE_EUI                                         { 0x48, 0x73, 0x6D, 0x9E, 0xD0, 0x7A, 0x0B, 0xD6 }                                                 // set by application[*]
#define MBED_CONF_LORA_DOWNLINK_PREAMBLE_LENGTH                           5                                                                                                  // set by library:lora
#define MBED_CONF_LORA_DUTY_CYCLE_ON                                      1                                                                                                  // set by application[*]
#define MBED_CONF_LORA_DUTY_CYCLE_ON_JOIN                                 1                                                                                                  // set by library:lora
#define MBED_CONF_LORA_FSB_MASK                                           {0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x00FF}                                                           // set by library:lora
#define MBED_CONF_LORA_FSB_MASK_CHINA                                     {0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF}                                                   // set by library:lora
#define MBED_CONF_LORA_LBT_ON                                             0                                                                                                  // set by library:lora
#define MBED_CONF_LORA_MAX_SYS_RX_ERROR                                   5                                                                                                  // set by library:lora
#define MBED_CONF_LORA_NB_TRIALS                                          12                                                                                                 // set by library:lora
#define MBED_CONF_LORA_NWKSKEY                                            {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}   // set by library:lora
#define MBED_CONF_LORA_OVER_THE_AIR_ACTIVATION                            1                                                                                                  // set by application[*]
#define MBED_CONF_LORA_PHY                                                EU868                                                                                              // set by application[*]
#define MBED_CONF_LORA_PHY_AS923_SUB_REGION                               AS1                                                                                                // set by library:lora
#define MBED_CONF_LORA_PUBLIC_NETWORK                                     1                                                                                                  // set by library:lora
#define MBED_CONF_LORA_TX_MAX_SIZE                                        64                                                                                                 // set by library:lora
#define MBED_CONF_LORA_UPLINK_PREAMBLE_LENGTH                             8                                                                                                  // set by library:lora
#define MBED_CONF_LORA_WAKEUP_TIME                                        5                                                                                                  // set by library:lora
#define MBED_CONF_MBED_TRACE_ENABLE                                       0                                                                                                  // set by application[*]
#define MBED_CONF_PLATFORM_CALLBACK_COMPARABLE                            1                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_CALLBACK_NONTRIVIAL                            0                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_CRASH_CAPTURE_ENABLED                          0                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_CTHUNK_COUNT_MAX                               8                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_DEEPSLEEP_STATS_VERBOSE                        0                                                                                                  // set by library:platform[STM]
#define MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE                       115200                                                                                             // set by application[*]
#define MBED_CONF_PLATFORM_ERROR_ALL_THREADS_INFO                         0                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_FILENAME_CAPTURE_ENABLED                 0                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_HIST_ENABLED                             0                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_HIST_SIZE                                4                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_REBOOT_MAX                               1                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_FATAL_ERROR_AUTO_REBOOT_ENABLED                0                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_MAX_ERROR_FILENAME_LEN                         16                                                                                                 // set by library:platform
#define MBED_CONF_PLATFORM_MINIMAL_PRINTF_ENABLE_64_BIT                   1                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_MINIMAL_PRINTF_ENABLE_FLOATING_POINT           1                                                                                                  // set by application[*]
#define MBED_CONF_PLATFORM_MINIMAL_PRINTF_SET_FLOATING_POINT_MAX_DECIMALS 6                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_POLL_USE_LOWPOWER_TIMER                        0                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_BAUD_RATE                                115200                                                                                             // set by application[*]
#define MBED_CONF_PLATFORM_STDIO_BUFFERED_SERIAL                          0                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_CONVERT_NEWLINES                         1                                                                                                  // set by application[*]
#define MBED_CONF_PLATFORM_STDIO_CONVERT_TTY_NEWLINES                     1                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_FLUSH_AT_EXIT                            1                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_MINIMAL_CONSOLE_ONLY                     0                                                                                                  // set by library:platform
#define MBED_CONF_PLATFORM_USE_MPU                                        1                                                                                                  // set by library:platform
#define MBED_CONF_RTOS_API_PRESENT                                        1                                                                                                  // set by library:rtos-api
#define MBED_CONF_SX1272_LORA_DRIVER_ANT_SWITCH                           NC                                                                                                 // set by library:sx1272-lora-driver
#define MBED_CONF_SX1272_LORA_DRIVER_BUFFER_SIZE                          255                                                                                                // set by library:sx1272-lora-driver
#define MBED_CONF_SX1272_LORA_DRIVER_DIO0                                 LORA_DIO0                                                                                          // set by application[ZEST_CORE_FMLR-72]
#define MBED_CONF_SX1272_LORA_DRIVER_DIO1                                 LORA_DIO1                                                                                          // set by application[ZEST_CORE_FMLR-72]
#define MBED_CONF_SX1272_LORA_DRIVER_DIO2                                 LORA_DIO2                                                                                          // set by application[ZEST_CORE_FMLR-72]
#define MBED_CONF_SX1272_LORA_DRIVER_DIO3                                 LORA_DIO3                                                                                          // set by application[ZEST_CORE_FMLR-72]
#define MBED_CONF_SX1272_LORA_DRIVER_DIO4                                 LORA_DIO4                                                                                          // set by application[ZEST_CORE_FMLR-72]
#define MBED_CONF_SX1272_LORA_DRIVER_DIO5                                 NC                                                                                                 // set by library:sx1272-lora-driver
#define MBED_CONF_SX1272_LORA_DRIVER_PWR_AMP_CTL                          NC                                                                                                 // set by library:sx1272-lora-driver
#define MBED_CONF_SX1272_LORA_DRIVER_RADIO_VARIANT                        SX1272UNDEFINED                                                                                    // set by library:sx1272-lora-driver
#define MBED_CONF_SX1272_LORA_DRIVER_RESET                                LORA_RESET                                                                                         // set by application[ZEST_CORE_FMLR-72]
#define MBED_CONF_SX1272_LORA_DRIVER_RF_SWITCH_CTL1                       NC                                                                                                 // set by library:sx1272-lora-driver
#define MBED_CONF_SX1272_LORA_DRIVER_RF_SWITCH_CTL2                       NC                                                                                                 // set by library:sx1272-lora-driver
#define MBED_CONF_SX1272_LORA_DRIVER_RXCTL                                NC                                                                                                 // set by library:sx1272-lora-driver
#define MBED_CONF_SX1272_LORA_DRIVER_SPI_CS                               LORA_CS                                                                                            // set by application[ZEST_CORE_FMLR-72]
#define MBED_CONF_SX1272_LORA_DRIVER_SPI_FREQUENCY                        8000000                                                                                            // set by library:sx1272-lora-driver
#define MBED_CONF_SX1272_LORA_DRIVER_SPI_MISO                             LORA_MISO                                                                                          // set by application[ZEST_CORE_FMLR-72]
#define MBED_CONF_SX1272_LORA_DRIVER_SPI_MOSI                             LORA_MOSI                                                                                          // set by application[ZEST_CORE_FMLR-72]
#define MBED_CONF_SX1272_LORA_DRIVER_SPI_SCLK                             LORA_SCK                                                                                           // set by application[ZEST_CORE_FMLR-72]
#define MBED_CONF_SX1272_LORA_DRIVER_TCXO                                 NC                                                                                                 // set by library:sx1272-lora-driver
#define MBED_CONF_SX1272_LORA_DRIVER_TXCTL                                NC                                                                                                 // set by library:sx1272-lora-driver
#define MBED_CONF_TARGET_BOOT_STACK_SIZE                                  0x1000                                                                                             // set by target:Target
#define MBED_CONF_TARGET_CONSOLE_UART                                     1                                                                                                  // set by target:Target
#define MBED_CONF_TARGET_CUSTOM_TICKERS                                   1                                                                                                  // set by target:Target
#define MBED_CONF_TARGET_DEEP_SLEEP_LATENCY                               4                                                                                                  // set by target:MCU_STM32
#define MBED_CONF_TARGET_DEFAULT_ADC_VREF                                 NAN                                                                                                // set by target:Target
#define MBED_CONF_TARGET_GPIO_RESET_AT_INIT                               0                                                                                                  // set by target:MCU_STM32
#define MBED_CONF_TARGET_I2C_TIMING_VALUE_ALGO                            0                                                                                                  // set by target:MCU_STM32L0
#define MBED_CONF_TARGET_INIT_US_TICKER_AT_BOOT                           1                                                                                                  // set by target:MCU_STM32
#define MBED_CONF_TARGET_INTERNAL_FLASH_UNIFORM_SECTORS                   1                                                                                                  // set by target:Target
#define MBED_CONF_TARGET_LPTICKER_LPTIM                                   1                                                                                                  // set by target:MCU_STM32L0
#define MBED_CONF_TARGET_LPTICKER_LPTIM_CLOCK                             1                                                                                                  // set by target:MCU_STM32
#define MBED_CONF_TARGET_LPUART_CLOCK_SOURCE                              USE_LPUART_CLK_LSE|USE_LPUART_CLK_PCLK1|USE_LPUART_CLK_PCLK3                                       // set by target:MCU_STM32
#define MBED_CONF_TARGET_LSE_AVAILABLE                                    1                                                                                                  // set by target:MCU_STM32
#define MBED_CONF_TARGET_LSE_DRIVE_LOAD_LEVEL                             RCC_LSEDRIVE_LOW                                                                                   // set by target:MCU_STM32L0
#define MBED_CONF_TARGET_MPU_ROM_END                                      0x0fffffff                                                                                         // set by target:Target
#define MBED_CONF_TARGET_RTC_CLOCK_SOURCE                                 USE_RTC_CLK_LSE_OR_LSI                                                                             // set by target:MCU_STM32
#define MBED_CONF_TARGET_TICKLESS_FROM_US_TICKER                          0                                                                                                  // set by target:Target
#define MBED_CONF_TARGET_XIP_ENABLE                                       0                                                                                                  // set by target:Target
#define MBED_CRC_TABLE_SIZE                                               16                                                                                                 // set by library:drivers
#define MBED_STACK_DUMP_ENABLED                                           0                                                                                                  // set by library:platform
#define MBED_TRACE_COLOR_THEME                                            0                                                                                                  // set by library:mbed-trace
#define MBED_TRACE_MAX_LEVEL                                              TRACE_LEVEL_DEBUG                                                                                  // set by application[*]
#define MEM_ALLOC                                                         malloc                                                                                             // set by library:mbed-trace
#define MEM_FREE                                                          free                                                                                               // set by library:mbed-trace
// Macros
#define MBEDTLS_USER_CONFIG_FILE                                          "mbedtls_lora_config.h"                                                                            // defined by application

#endif
