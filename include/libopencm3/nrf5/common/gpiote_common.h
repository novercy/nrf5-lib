/** @addtogroup gpiote_defines
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

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA GPIOTE.H
The order of header inclusion is important. gpiote.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_GPIOTE_H)
/** @endcond */
#ifndef LIBOPENCM3_GPIOTE_COMMON_H
#define LIBOPENCM3_GPIOTE_COMMON_H

/**@{*/

/** @defgroup gpiote_registers GPIOTE Registers
 * @ingroup gpiote_defines
 * @brief GPIOTE Registers
@{*/

/* --------------------- GPIOTE registers for NRF5x ------------------------ */

/* Registers */
#define GPIOTE_TASKS_OUT               PTRIO32((GPIOTE_BASE) + 0x000)
#define GPIOTE_TASKS_SET               PTRIO32((GPIOTE_BASE) + 0x030)
#define GPIOTE_TASKS_CLR               PTRIO32((GPIOTE_BASE) + 0x060)
#define GPIOTE_EVENTS_IN               PTRIO32((GPIOTE_BASE) + 0x100)
#define GPIOTE_EVENTS_PORT             MMIO32((GPIOTE_BASE) + 0x17C)
#define GPIOTE_INTENSET                MMIO32((GPIOTE_BASE) + 0x304)
#define GPIOTE_INTENCLR                MMIO32((GPIOTE_BASE) + 0x308)
#define GPIOTE_CONFIG                  PTRIO32((GPIOTE_BASE) + 0x510)
/**@}*/

/* --- GPIOTE_INTENSET values ---------------------------------------------- */
/** @defgroup gpiote_intenset Enable interrupt
@ingroup gpiote_defines
@{*/
#define GPIOTE_INTENSET_IN_Set(n)        (1 << n)
#define GPIOTE_INTENSET_PORT_Set         (1 << 31)
/**@}*/

/* --- GPIOTE_INTENCLR values ---------------------------------------------- */
/** @defgroup gpiote_intenclr Disable interrupt
@ingroup gpiote_defines
@{*/
#define GPIOTE_INTENCLR_IN_Clear(n)      (1 << n)
#define GPIOTE_INTENCLR_PORT_Clear       (1 << 31)
/**@}*/

/* --- GPIOTE_CONFIG[x] values --------------------------------------------- */
/** @defgroup gpiote_config Configuration for OUT[x], SET[x] and CLR[x] tasks
and IN[x] event
@ingroup gpiote_defines
@{*/
#define MODE_DISABLED                    (0 << 0)
#define GPIOTE_CONFIG_MODE_Disabled      (0 << 0)
#define MODE_EVENT                       (1 << 0)
#define GPIOTE_CONFIG_MODE_Event         (1 << 0)
#define MODE_TASK                        (3 << 0)
#define GPIOTE_CONFIG_MODE_Task          (3 << 0)

#define GPIOTE_CONFIG_PSEL(n)            (n << 8)

#define POLARITY_NONE                    (0 << 16)
#define GPIOTE_CONFIG_POLARITY_None      (0 << 16)
#define POLARITY_LOTOHI                  (1 << 16)
#define GPIOTE_CONFIG_POLARITY_LoToHi    (1 << 16)
#define POLARITY_HITOLO                  (2 << 16)
#define GPIOTE_CONFIG_POLARITY_HiToLo    (2 << 16)
#define POLARITY_TOGGLE                  (3 << 16)
#define GPIOTE_CONFIG_POLARITY_Toggle    (3 << 16)

#define OUTINIT_LOW                      (0 << 20)
#define GPIOTE_CONFIG_OUTINIT_Low        (0 << 20)
#define OUTINIT_HIGH                     (1 << 20)
#define GPIOTE_CONFIG_OUTINIT_High       (1 << 20)
/**@}*/


/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

void gpiote_config(uint8_t channel, uint32_t mode, uint32_t pin,\
                      uint32_t polarity, bool outinit);
void gpiote_tasks_out(uint8_t channel);
void gpiote_tasks_set(uint8_t channel);
void gpiote_tasks_clr(uint8_t channel);

END_DECLS

/**@}*/

#endif
/** @cond */
#else
#warning "gpiote_common.h should not be included explicitly, only via gpiote.h"
#endif
/** @endcond */

