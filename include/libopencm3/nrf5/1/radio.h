/** @defgroup radio_defines RADIO Defines

@brief <b>Defined Constants and Types for the NRF51xx RADIO</b>

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

#ifndef LIBOPENCM3_RADIO_H
#define LIBOPENCM3_RADIO_H

#include <libopencm3/nrf5/common/radio_common.h> 

/* --------------------- RADIO registers for NRF51 ------------------------- */
/** @defgroup radio_registers RADIO Registers
 * @ingroup radio_defines
 * @brief RADIO Registers
@{*/
#define RADIO_TEST                       MMIO32((RADIO_BASE) + 0x540)
#define RADIO_OVERRIDE0                  MMIO32((RADIO_BASE) + 0x724)
#define RADIO_OVERRIDE1                  MMIO32((RADIO_BASE) + 0x728)
#define RADIO_OVERRIDE2                  MMIO32((RADIO_BASE) + 0x72C)
#define RADIO_OVERRIDE3                  MMIO32((RADIO_BASE) + 0x730)
#define RADIO_OVERRIDE4                  MMIO32((RADIO_BASE) + 0x734)
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS

#endif

