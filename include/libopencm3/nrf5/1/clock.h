/** @defgroup clock_defines Clock Control Defines

@brief <b>Defined Constants and Types for the NRF51xx Clock Control</b>

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

#ifndef LIBOPENCM3_CLOCK_H
#define LIBOPENCM3_CLOCK_H

#include <libopencm3/nrf5/common/clock_common.h>

/* --------------------- CLOCK registers for NRF51 ------------------------- */
/** @defgroup clock_registers Clock Control Registers
 * @ingroup clock_defines
 * @brief Clock Control Registers
@{*/
#define CLOCK_XTALFREQ                          MMIO32(CLOCK_BASE + 0x550)
/**@}*/

/* --- CLOCK_XTALFREQ values ----------------------------------------------- */
/** @defgroup clock_xtalfreq register. Select nominal frequency of external
crystal for HFCLK
@ingroup clock_defines
@{*/
#define CLOCK_XTALFREQ_XTALFREQ_16MHz        (0xFF)
#define CLOCK_XTALFREQ_XTALFREQ_32MHz        (0x00)
/**@}*/

#endif
