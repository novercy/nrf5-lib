/** @addtogroup uicr_defines
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

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA UICR.H
The order of header inclusion is important. uicr.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined LIBOPENCM3_UICR_H
/** @endcond */
#ifndef LIBOPENCM3_UICR_COMMON_H
#define LIBOPENCM3_UICR_COMMON_H

/**@{*/

/** @defgroup uicr_registers User Information Configuration Registers
 * @ingroup uicr_defines
 * @brief UICR (User information configuration registers)
@{*/

/* --------------------- UICR registers for NRF5x --------------------------- */

/** Registers */
#define UICR_NRFFW                       PTRIO32((UICR_BASE) + 0x014)
#define UICR_CUSTOMER                    PTRIO32((UICR_BASE) + 0x080)
#define UICR_PSELRESET                   PTRIO32((UICR_BASE) + 0x200)
#define UICR_APPROTECT                   MMIO32((UICR_BASE) + 0x208)
#define UICR_NFCPINS                     MMIO32((UICR_BASE) + 0x20C)
/**@}*/

/* --- UICR_PSELRESET values ------------------------------------------------ */


/** @defgroup uicr_approtect UICR APPROTECT register
@ingroup uicr_defines
@{*/
#define UICR_APPROTECT_PALL_Enabled       0
/**@}*/

/** @defgroup uicr_nfcpins UICR NFCPINS register
@ingroup uicr_defines
@{*/
#define UICR_NFCPINS_PROTECT_Disabled     0
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS

/**@}*/

#endif
/** @cond */
#else
#warning "uicr_common.h should not be included explicitly, only via uicr.h"
#endif
/** @endcond */

