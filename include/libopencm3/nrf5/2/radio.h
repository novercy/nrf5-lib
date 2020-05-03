/** @defgroup radio_defines RADIO Defines

@brief <b>Defined Constants and Types for the NRF52xx RADIO</b>

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


#ifndef LIBOPENCM3_RADIO_H
#define LIBOPENCM3_RADIO_H

#include <libopencm3/nrf5/common/radio_common.h> 

/* --------------------- RADIO registers for NRF52 ------------------------- */
/** @defgroup radio_registers RADIO Registers
 * @ingroup radio_defines
 * @brief RADIO Registers
@{*/
#define RADIO_EVENTS_CRCOK               MMIO32((RADIO_BASE) + 0x130)
#define RADIO_EVENTS_CRCERROR            MMIO32((RADIO_BASE) + 0x134)
#define RADIO_MODECNF0                   MMIO32((RADIO_BASE) + 0x650)

/* --- RADIO_MODECNF0 values ----------------------------------------------- */
/** @defgroup radio_modecnf0 Configurates radio mode
@ingroup radio_defines
@{*/
#define RADIO_MODECNF0_RU_Default         (0 << 0)
#define RADIO_MODECNF0_RU_Fast            (1 << 0)
#define RADIO_MODECNF0_DTX_B1             (0 << 8)
#define RADIO_MODECNF0_DTX_B0             (1 << 8)
#define RADIO_MODECNF0_DTX_Center         (0x2 << 8)
/**@}*/


/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

uint32_t radio_crc_ok(void);
void radio_crc_ok_reset(void);

END_DECLS

#endif

