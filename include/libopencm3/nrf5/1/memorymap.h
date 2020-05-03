/** 
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

#ifndef LIBOPENCM3_MEMORYMAP_H
#define LIBOPENCM3_MEMORYMAP_H

#include <libopencm3/cm3/memorymap.h>

/* --- Convenience defines ----------------------------------------------- */
#define PTRIO32(addr)              ((volatile uint32_t *)(addr))
#define PTRIO64(addr)              ((volatile uint64_t *)(addr))

/* --- NRF52 specific peripheral definitions ----------------------------- */

/* Memory map for all busses */
#define PERIPH_BASE                0x40000000U
#define PERIPH_BASE_APB            0x40000000U
#define PERIPH_BASE_AHB            0x50000000U

/* Register boundary addresses */

/* APB */
#define CLOCK_BASE                (PERIPH_BASE_APB + 0x0000)
#define POWER_BASE                (PERIPH_BASE_APB + 0x0000)
//#define MPU_BASE                  (PERIPH_BASE_APB + 0x0000)
#define RADIO_BASE                (PERIPH_BASE_APB + 0x1000)
#define UART0_BASE                (PERIPH_BASE_APB + 0x2000)
#define TWI0_BASE                 (PERIPH_BASE_APB + 0x3000)
#define SPI0_BASE                 (PERIPH_BASE_APB + 0x3000)
#define TWI1_BASE                 (PERIPH_BASE_APB + 0x4000)
#define SPIS1_BASE                (PERIPH_BASE_APB + 0x4000)
#define SPI1_BASE                 (PERIPH_BASE_APB + 0x4000)
#define GPIOTE_BASE               (PERIPH_BASE_APB + 0x6000)
#define ADC_BASE                  (PERIPH_BASE_APB + 0x7000)
#define TIMER0_BASE               (PERIPH_BASE_APB + 0x8000)
#define TIMER1_BASE               (PERIPH_BASE_APB + 0x9000)
#define TIMER2_BASE               (PERIPH_BASE_APB + 0xA000)
#define RTC0_BASE                 (PERIPH_BASE_APB + 0xB000)
#define TEMP_BASE                 (PERIPH_BASE_APB + 0xC000)
#define RNG_BASE                  (PERIPH_BASE_APB + 0xD000)
#define ECB_BASE                  (PERIPH_BASE_APB + 0xE000)
#define CCM_BASE                  (PERIPH_BASE_APB + 0xF000)
#define AAR_BASE                  (PERIPH_BASE_APB + 0xF000)
#define WDT_BASE                  (PERIPH_BASE_APB + 0x10000)
#define RTC1_BASE                 (PERIPH_BASE_APB + 0x11000)
#define QDEC_BASE                 (PERIPH_BASE_APB + 0x12000)
#define LPCOMP_BASE               (PERIPH_BASE_APB + 0x13000)
#define SWI0_BASE                 (PERIPH_BASE_APB + 0x14000)
#define SWI1_BASE                 (PERIPH_BASE_APB + 0x15000)
#define SWI2_BASE                 (PERIPH_BASE_APB + 0x16000)
#define SWI3_BASE                 (PERIPH_BASE_APB + 0x17000)
#define SWI4_BASE                 (PERIPH_BASE_APB + 0x18000)
#define SWI5_BASE                 (PERIPH_BASE_APB + 0x19000)
#define NVMC_BASE                 (PERIPH_BASE_APB + 0x1E000)
#define PPI_BASE                  (PERIPH_BASE_APB + 0x1F000)

/* AHB */
#define GPIO_BASE                 (PERIPH_BASE_AHB + 0x0000)

#endif
