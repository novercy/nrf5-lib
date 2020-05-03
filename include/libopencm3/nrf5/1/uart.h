/** @defgroup uart_defines Universal asynchronous receiver/transmitter Defines

@brief <b>Defined Constants and Types for the NRF51xx Universal asynchronous 
receiver/transmitter</b>

@ingroup NRF51xx_defines

@version 1.0.0

@date 14 February 2019

@author @htmlonly &copy; @endhtmlonly 2019 
Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>

LGPL License Terms @ref lgpl_license
 */

/*
 * This file is part of the libopencm3 project.
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBOPENCM3_UART_H
#define LIBOPENCM3_UART_H

#include <libopencm3/nrf5/common/uart_common.h>

/* --------------------- UART registers for NRF51 -------------------------- */
/** @defgroup uart_registers UARTE Registers
 * @ingroup uart_defines
 * @brief UART Registers
@{*/
#define UART_INTEN(uart_base)             MMIO32((uart_base) + 0x300)
#define UART0_INTEN                       MMIO32((UART0) + 0x300)
/**@}*/

/* --- UART_INTEN values --------------------------------------------------- */
/** @defgroup uart_inten Enable or disable interrupt
@ingroup uart_defines
@{*/
#define UART_INTEN_CTS_Enabled              (1 << 0)
#define UART_INTEN_CTS_Disabled             (1 << 0)
#define UART_INTEN_NCTS_Enabled             (1 << 1)
#define UART_INTEN_NCTS_Disabled            (1 << 1)    
#define UART_INTEN_RXDRDY_Enabled           (1 << 2)
#define UART_INTEN_RXDRDY_Disabled          (1 << 2)    
#define UART_INTEN_TXDRDY_Enabled           (1 << 7)
#define UART_INTEN_TXDRDY_Disabled          (1 << 7)    
#define UART_INTEN_ERROR_Enabled            (1 << 9)
#define UART_INTEN_ERROR_Disabled           (1 << 9)    
#define UART_INTEN_RXTO_Enabled             (1 << 17)
#define UART_INTEN_RXTO_Disabled            (1 << 17)
/**@}*/

/* --- UART_BAUDRATE values ------------------------------------------------ */
/** @defgroup uart_baudrate Set baud rate for UART
@ingroup uart_defines
@{*/
#define UART_BAUDRATE_BAUDRATE_Baud31250         0x00800000    
#define UART_BAUDRATE_BAUDRATE_Baud56000         0x00e50000
#define UART_BAUDRATE_BAUDRATE_Baud921600        0x0ebedfa4
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS

#endif

