/** @defgroup ppi_defines Serial peripheral interface slave Defines

@brief <b>Defined Constants and Types for the NRF51xx Serial peripheral 
interface slave</b>

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

#ifndef LIBOPENCM3_SPIS_H
#define LIBOPENCM3_SPIS_H

#include <libopencm3/nrf5/common/spis_common.h>    

/* --------------------- SPIS registers for NRF51 ------------------------- */
/** @defgroup spis_registers SPIS Registers
 * @ingroup spis_defines
 * @brief SPIS Registers
@{*/
#define SPIS_INTEN(spis_base)             MMIO32((spis_base) + 0x300)

#define SPIS_PSELSCK(spis_base)           MMIO32((spis_base) + 0x508)
#define SPIS_PSELMISO(spis_base)          MMIO32((spis_base) + 0x50C)
#define SPIS_PSELMOSI(spis_base)          MMIO32((spis_base) + 0x510)
#define SPIS_PSELCSN(spis_base)           MMIO32((spis_base) + 0x514)

#define SPIS_RXDPTR(spis_base)            MMIO32((spis_base) + 0x534)
#define SPIS_MAXRX(spis_base)             MMIO32((spis_base) + 0x538)
#define SPIS_AMOUNTRX(spis_base)          MMIO32((spis_base) + 0x53C)

#define SPIS_TXDPTR(spis_base)            MMIO32((spis_base) + 0x544)
#define SPIS_MAXTX(spis_base)             MMIO32((spis_base) + 0x548)
#define SPIS_AMOUNTTX(spis_base)          MMIO32((spis_base) + 0x54C)
/**@}*/

/* --- SPIS_INTEN values --------------------------------------------------- */
/** @defgroup spis_inten Enable or disable interrupt
@ingroup spis_defines
@{*/
#define SPIS_INTEN_END_Enabled                (1 << 1)
#define SPIS_INTEN_END_Disabled               (0 << 1)
#define SPIS_INTEN_ACQUIRED_Enabled           (1 << 10)
#define SPIS_INTEN_ACQUIRED_Disabled          (0 << 10)
/**@}*/

/* --- SPIS_PSELSCK values ------------------------------------------------- */
/** @defgroup spis_pselsck Select pin for SCK
@ingroup spis_defines
@{*/
#define SPIS_PSELSCK_PIN(n)                   (n)
#define SPIS_PSELSCK_Disconnected             0xFFFFFFFF
/**@}*/

/* --- SPIS_PSELMISO values ------------------------------------------------ */
/** @defgroup spis_pselmiso Select pin for MISO signal
@ingroup spis_defines
@{*/
#define SPIS_PSELMISO_PIN(n)                  (n)
#define SPIS_PSELMISO_Disconnected            0xFFFFFFFF
/**@}*/

/* --- SPIS_PSELMOSI values ------------------------------------------------ */
/** @defgroup spis_pselmosi Select pin for MOSI signal
@ingroup spis_defines
@{*/
#define SPIS_PSELMOSI_PIN(n)                  (n)
#define SPIS_PSELMOSI_Disconnected            0xFFFFFFFF
/**@}*/

/* --- SPIS_PSELCSN values ------------------------------------------------- */
/** @defgroup spis_pselcsn Select pin for CSN signal
@ingroup spis_defines
@{*/
#define SPIS_PSELCSN_PIN(n)                   (n)
#define SPIS_PSELCSN_Disconnected             0xFFFFFFFF
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS

#endif

