/** @defgroup clock_defines Clock Control Defines

@brief <b>Defined Constants and Types for the NRF52xx Clock Control</b>

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

#ifndef LIBOPENCM3_CLOCK_H
#define LIBOPENCM3_CLOCK_H

#include <libopencm3/nrf5/common/clock_common.h>

/* --------------------- CLOCK registers for NRF52 ------------------------- */
/** @defgroup clock_registers Clock Control Registers
 * @ingroup clock_defines
 * @brief Clock Control Registers
@{*/
#define CLOCK_TRACECONFIG                       MMIO32(CLOCK_BASE + 0x55C)
/**@}*/

/* --- CLOCK_TRACECONFIG values -------------------------------------------- */
/** @defgroup clock_traceconfig Retained register. Clocking options for the 
Trace Port debug interface
@ingroup clock_defines
@{*/
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_32MHz        (0 << 0) //TRACECLK = 16 MHz
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_16MHz        (1 << 0) //TRACECLK = 8 MHz
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_8MHz         (0x2 << 0) //TRACECLK = 4 MHz
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_4MHz         (0x3 << 0) //TRACECLK = 2 MHz
//gpio: GPIOs multiplexed onto all trace-pins
#define CLOCK_TRACECONFIG_TRACEMUX_GPIO               (0 << 16) 
//Serial: SWO multiplexed onto P0.18, GPIO multiplexed onto other trace-pins
#define CLOCK_TRACECONFIG_TRACEMUX_Serial             (1 << 16) 
//Parallel: TRACECLK and TRACEDATA multiplexed onto P0.20, P0.18, P0.16, P0.15, P0.14
#define CLOCK_TRACECONFIG_TRACEMUX_Parallel           (0x2 << 16)
/**@}*/

/* --- CLOCK_LFCLKSRC values ----------------------------------------------- */
/** @defgroup clock_lfclksrc Clock source for the LFCLK
@ingroup clock_defines
@{*/
#define CLOCK_LFCLKSRC_BYPASS_Enabled              (1 << 16)
#define CLOCK_LFCLKSRC_EXTERNAL_Enabled            (1 << 17)
/**@}*/


/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

void clock_lfclk_extsource_bypass(void);
void clock_lfclk_extsource_enable(void);

END_DECLS

#endif
