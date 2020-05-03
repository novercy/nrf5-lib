/** @addtogroup spis_defines
 *
 * @author @htmlonly &copy; @endhtmlonly 2019 
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

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA SPIS.H
The order of header inclusion is important. spis.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_SPIS_H)
/** @endcond */
#ifndef LIBOPENCM3_SPIS_COMMON_H
#define LIBOPENCM3_SPIS_COMMON_H

/**@{*/
/** @defgroup spis_reg_base SPIS register base addresses
 * @ingroup spis_defines
 * @{
 */
#define SPIS1                            SPIS1_BASE
/**@}*/

/** @defgroup spis_registers SPIS Registers
 * @ingroup spis_defines
 * @brief SPIS Registers
@{*/
/* --------------------- SPIS registers for NRF5x ------------------------- */

/* Tasks Registers */
#define SPIS_TASKS_ACQUIRE(spis_base)            MMIO32((spis_base) + 0x024)

#define SPIS_TASKS_RELEASE(spis_base)            MMIO32((spis_base) + 0x028)

/*Events Register*/
#define SPIS_EVENTS_END(spis_base)               MMIO32((spis_base) + 0x104)

#define SPIS_EVENTS_ACQUIRED(spis_base)          MMIO32((spis_base) + 0x128)

/***/
#define SPIS_SHORTS(spis_base)                   MMIO32((spis_base) + 0x200)

#define SPIS_INTENSET(spis_base)                 MMIO32((spis_base) + 0x304)

#define SPIS_INTENCLR(spis_base)                 MMIO32((spis_base) + 0x308)

#define SPIS_SEMSTAT(spis_base)                  MMIO32((spis_base) + 0x400)

#define SPIS_STATUS(spis_base)                   MMIO32((spis_base) + 0x440)

#define SPIS_ENABLE(spis_base)                   MMIO32((spis_base) + 0x500)

#define SPIS_CONFIG(spis_base)                   MMIO32((spis_base) + 0x554)

#define SPIS_DEF(spis_base)                      MMIO32((spis_base) + 0x55C)

#define SPIS_ORC(spis_base)                      MMIO32((spis_base) + 0x5C0)
/**@}*/

/* --- SPIS_SHORTS values -------------------------------------------------- */
/** @defgroup spis_shorts Set shortcut between END event and ACQUIRE task
@ingroup spis_defines
@{*/
#define SPIS_SHORTS_END_ACQUIRE_Enabled             (1 << 2)
/**@}*/

/* --- SPIS_INTENSET values ------------------------------------------------ */
/** @defgroup spis_intenset Enable interrupt
@ingroup spis_defines
@{*/
#define SPIS_INTENSET_END_Set                 (1 << 1)
#define SPIS_INTENSET_ACQUIRED_Set            (1 << 10)
/**@}*/

/* --- SPIS_INTENCLR values ------------------------------------------------ */
/** @defgroup spis_intenclr Disable interrupt
@ingroup spis_defines
@{*/
#define SPIS_INTENCLR_END_Clear              (1 << 1)
#define SPIS_INTENCLR_ACQUIRED_Clear         (1 << 10)
/**@}*/

/* --- SPIS_SEMSTAT values ------------------------------------------------- */
/** @defgroup spis_semstat Read semaphore status
@ingroup spis_defines
@{*/
#define SPIS_SEMSTAT_SEMSTAT_Free               (0)
#define SPIS_SEMSTAT_SEMSTAT_CPU                (1)
#define SPIS_SEMSTAT_SEMSTAT_SPIS               (2)
#define SPIS_SEMSTAT_SEMSTAT_CPUPending         (3)
/**@}*/

/* --- SPIS_STATUS values -------------------------------------------------- */
/** @defgroup spis_status Read status from last transaction and clear error
@ingroup spis_defines
@{*/
#define SPIS_STATUS_OVERREAD_NotPresent         (0)
#define SPIS_STATUS_OVERREAD_Present            (1)
#define SPIS_STATUS_OVERREAD_Clear              (1)
#define SPIS_STATUS_OVERFLOW_NotPresent         (0 << 1)
#define SPIS_STATUS_OVERFLOW_Present            (1 << 1)
#define SPIS_STATUS_OVERFLOW_Clear              (1 << 1)
/**@}*/

/* --- SPIS_ENABLE values -------------------------------------------------- */
/** @defgroup spis_enable Enable SPI Slave
@ingroup spis_defines
@{*/
#define SPIS_ENABLE_ENABLE_Enabled               (2)
#define SPIS_ENABLE_ENABLE_Disabled              (0)
/**@}*/

/* --- SPIS_CONFIG values -------------------------------------------------- */
/** @defgroup spis_config Bit order, Serial clock phase and polarity
configuration
@ingroup spis_defines
@{*/
#define SPIS_CONFIG_ORDER_MsbFirst               (0 << 0)
#define SPIS_CONFIG_ORDER_LsbFirst               (1 << 0)
//Sample on leading edge of clock, shift serial data on trailing edge
#define SPIS_CONFIG_CPHA_Leading                 (0 << 1)
//Sample on trailing edge of clock, shift serial data on leading edge
#define SPIS_CONFIG_CPHA_Trailing                (1 << 1)
//Serial clock polarity
#define SPIS_CONFIG_CPOL_ActiveHigh              (0 << 2) 
#define SPIS_CONFIG_CPOL_ActiveLow               (1 << 2)
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS

/**@}*/

#endif
/** @cond */
#else
#warning "spis_common.h should not be included explicitly, only via spis.h"
#endif
/** @endcond */

