/** @addtogroup wdt_defines
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

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA WDT.H
The order of header inclusion is important. wdt.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_WDT_H)
/** @endcond */
#ifndef LIBOPENCM3_WDT_COMMON_H
#define LIBOPENCM3_WDT_COMMON_H

/**@{*/

/** @defgroup wdt_registers Watchdog Timer Registers
 * @ingroup wdt_defines
 * @brief Watchdog Timer Registers
@{*/

/* --------------------- WDT registers for NRF52 -------------------------- */

/* Registers */
#define WDT_TASKS_START                       MMIO32((WDT_BASE) + 0x000)
#define WDT_EVENTS_TIMEOUT                    MMIO32((WDT_BASE) + 0x100)
#define WDT_INTENSET                          MMIO32((WDT_BASE) + 0x304)
#define WDT_INTENCLR                          MMIO32((WDT_BASE) + 0x308)
#define WDT_RUNSTATUS                         MMIO32((WDT_BASE) + 0x400)
#define WDT_REQSTATUS                         MMIO32((WDT_BASE) + 0x404)
#define WDT_CRV                               MMIO32((WDT_BASE) + 0x504)
#define WDT_RREN                              MMIO32((WDT_BASE) + 0x508)
#define WDT_CONFIG                            MMIO32((WDT_BASE) + 0x50C)
#define WDT_RR                               PTRIO32((WDT_BASE) + 0x600)
/**@}*/

/* --- WDT_CONFIG values -------------------------------------------------- */


#define WDT_CONFIG_SLEEP_Run                  (1 << 0)
#define WDT_CONFIG_HALT_Run                   (1 << 3)
#define WDT_CONFIG_SLEEP_RUN                  WDT_CONFIG_SLEEP_Run
#define WDT_CONFIG_HALT_RUN                   WDT_CONFIG_HALT_Run

/* --- WDT_RREN values -------------------------------------------------- */


#define WDT_RREN_RR0_Enabled                  (1 << 0)
#define WDT_RREN_RR1_Enabled                  (1 << 1)
#define WDT_RREN_RR2_Enabled                  (1 << 2)
#define WDT_RREN_RR3_Enabled                  (1 << 3)
#define WDT_RREN_RR4_Enabled                  (1 << 4)
#define WDT_RREN_RR5_Enabled                  (1 << 5)
#define WDT_RREN_RR6_Enabled                  (1 << 6)
#define WDT_RREN_RR7_Enabled                  (1 << 7)


#define WDT_RREN_RR0_ENABLED                  WDT_RREN_RR0_Enabled
#define WDT_RREN_RR1_ENABLED                  WDT_RREN_RR1_Enabled
#define WDT_RREN_RR2_ENABLED                  WDT_RREN_RR2_Enabled
#define WDT_RREN_RR3_ENABLED                  WDT_RREN_RR3_Enabled
#define WDT_RREN_RR4_ENABLED                  WDT_RREN_RR4_Enabled
#define WDT_RREN_RR5_ENABLED                  WDT_RREN_RR5_Enabled
#define WDT_RREN_RR6_ENABLED                  WDT_RREN_RR6_Enabled
#define WDT_RREN_RR7_ENABLED                  WDT_RREN_RR7_Enabled


/* --- WDT_RR values -------------------------------------------------- */

#define WDT_RR_RR_Reload                      0x6E524635
#define WDT_RR_RR_RELOAD                      WDT_RR_RR_Reload

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS
/**@}*/
#endif
/** @cond */
#else
#warning "wdt_common.h should not be included explicitly, only via wdt.h"
#endif
/** @endcond */

