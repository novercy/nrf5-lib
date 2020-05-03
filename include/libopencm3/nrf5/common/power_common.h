/** @addtogroup power_defines
 *
 * @author @htmlonly &copy; @endhtmlonly 2018
 * Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
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

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA POWER.H
The order of header inclusion is important. power.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_POWER_H)
/** @endcond */
#ifndef LIBOPENCM3_POWER_COMMON_H
#define LIBOPENCM3_POWER_COMMON_H

/**@{*/

/** @defgroup power_registers POWER Registers
 * @ingroup power_defines
 * @brief POWER Registers
@{*/

/* --------------------- POWER registers for NRF52 -------------------------- */

/* Registers */
#define POWER_DCDCEN                       MMIO32((POWER_BASE) + 0x578)
#define POWER_RESETREAS                    MMIO32((POWER_BASE) + 0x400)

/**@}*/

/* --- POWER_RESETREAS values ----------------------------------------------- */

#define POWER_RESETREAS_RESETPIN_Detected          (1 << 0)
#define POWER_RESETREAS_DOG_Detected               (1 << 1)
#define POWER_RESETREAS_SREQ_Detected              (1 << 2)
#define POWER_RESETREAS_LOCKUP_Detected            (1 << 3)
#define POWER_RESETREAS_OFF_Detected               (1 << 16)
#define POWER_RESETREAS_LPCOMP_Detected            (1 << 17)
#define POWER_RESETREAS_DIF_Detected               (1 << 18)
#define POWER_RESETREAS_NFC_Detected               (1 << 19)

/* --- POWER_DCDCEN values -------------------------------------------------- */


#define POWER_DCDCEN_DCDCEN_Enabled                (1 << 0)
#define POWER_DCDCEN_DCDCEN_Disabled               (0 << 0)


/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS

/**@}*/

#endif
/** @cond */
#else
#warning "power_common.h should not be included explicitly, only via power.h"
#endif
/** @endcond */

