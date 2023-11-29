/* mbed Microcontroller Library
 * Copyright(C) Toshiba Electronic Device Solutions Corporation 2021
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TARGETS_TARGET_TOSHIBA_TARGET_TMPM4KNA_UART_SPI_INTERRUPTS_H_
#define TARGETS_TARGET_TOSHIBA_TARGET_TMPM4KNA_UART_SPI_INTERRUPTS_H_

#define SPI_PEPIRH    (0)
#define UART_PERIPH   (1)

void uart_spi_clear_pending_irq(IRQn_Type irq);
void uart_spi_enable_irq(IRQn_Type irq, int uart_spi_device);
void uart_spi_disable_irq(IRQn_Type irq, int uart_spi_device);


#endif /* TARGETS_TARGET_TOSHIBA_TARGET_TMPM4KNA_UART_SPI_INTERRUPTS_H_ */
