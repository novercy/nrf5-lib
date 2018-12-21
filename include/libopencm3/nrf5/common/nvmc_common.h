/** @addtogroup nvmc_defines
 *
 * @author @htmlonly &copy; @endhtmlonly 2018
 * Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
 *
 */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2018 Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
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

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA NVMC.H
The order of header inclusion is important. nvmc.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_NVMC_H)
/** @endcond */
#ifndef LIBOPENCM3_NVMC_COMMON_H
#define LIBOPENCM3_NVMC_COMMON_H

/**@{*/

/** @defgroup nvmc_registers NVMC Registers
 * @ingroup nvmc_defines
 * @brief NVMC (Non-Volatile Memory Controller) Registers
@{*/

/* --------------------- NVMC registers for NRF52 -------------------------- */

/* Registers */
#define NVMC_ICACHECNF                    MMIO32((NVMC_BASE) + 0x540)
/**@}*/

/* --- NVMC_ICACHECNF values ----------------------------------------------------- */

/** @defgroup nvmc_icachecnf I-Code cache configuration
@ingroup nvmc_defines
@{*/
#define NVMC_ICACHECNF_CACHEEN_Enabled            (1 << 0)
#define NVMC_ICACHECNF_CACHEEN_ENABLED            NVMC_ICACHECNF_CACHEEN_Enabled
/**@}*/

#endif
/** @cond */
#else
#warning "nvmc_common.h should not be included explicitly, only via nvmc.h"
#endif
/** @endcond */

