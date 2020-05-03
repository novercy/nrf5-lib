/** @defgroup uart_defines Universal asynchronous receiver/transmitter Defines

@brief <b>Defined Constants and Types for the NRF52xx Universal asynchronous 
receiver/transmitter</b>

@ingroup NRF52xx_defines

@version 1.0.0

@date 15 August 2018

@author @htmlonly &copy; @endhtmlonly 2018 
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

/* --------------------- UART registers for NRF52 -------------------------- */
/** @defgroup uart_registers UARTE Registers
 * @ingroup uart_defines
 * @brief UART Registers
@{*/
#define UART_SHORTS(uart_base)               MMIO32((uart_base) + 0x200)
#define UART0_SHORTS                         MMIO32((UART0) + 0x200)
/**@}*/

/* --- UART_SHORTS values -------------------------------------------------- */
/** @defgroup uart_shorts Set shortcut between ENDRX-STARTRX and ENDRX-STOPRX
@ingroup uart_defines
@{*/
#define UART_SHORTS_CTS_STARTRX              (1 << 3)
#define UART_SHORTS_NCTS_STOPRX              (1 << 4)
/**@}*/

/* --- UART_BAUDRATE values ------------------------------------------------ */
/** @defgroup uart_baudrate Set baud rate for UART
@ingroup uart_defines
@{*/    
#define UART_BAUDRATE_BAUDRATE_Baud921600        0x0ebed000 
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS

#endif

