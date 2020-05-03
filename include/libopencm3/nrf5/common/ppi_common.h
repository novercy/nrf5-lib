/** @addtogroup ppi_defines
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

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA PPI.H
The order of header inclusion is important. ppi.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_PPI_H)
/** @endcond */
#ifndef LIBOPENCM3_PPI_COMMON_H
#define LIBOPENCM3_PPI_COMMON_H

/**@{*/

/** @defgroup ppi_registers PPI Registers
 * @ingroup ppi_defines
 * @brief PPI Registers
@{*/
/* --------------------- PPI registers for NRF5x --------------------------- */

/* Tasks Registers */
struct PPI_TASKS_CHG_TYPE{
	uint32_t EN;
	uint32_t DIS;
};
#define PPI_TASKS_CHG    ((volatile struct PPI_TASKS_CHG_TYPE*)((PPI_BASE) + 0x000))
#define PPI_TASKS_CHG_EN(group)         MMIO32((PPI_BASE) + 0x000 + 8*group)
#define PPI_TASKS_CHG_DIS(group)        MMIO32((PPI_BASE) + 0x004 + 8*group)
#define PPI_TASKS_CHG0_EN               MMIO32((PPI_BASE) + 0x000)
#define PPI_TASKS_CHG0_DIS              MMIO32((PPI_BASE) + 0x004)
#define PPI_TASKS_CHG1_EN               MMIO32((PPI_BASE) + 0x008)
#define PPI_TASKS_CHG1_DIS              MMIO32((PPI_BASE) + 0x00C)
#define PPI_TASKS_CHG2_EN               MMIO32((PPI_BASE) + 0x010)
#define PPI_TASKS_CHG2_DIS              MMIO32((PPI_BASE) + 0x014)
#define PPI_TASKS_CHG3_EN               MMIO32((PPI_BASE) + 0x018)
#define PPI_TASKS_CHG3_DIS              MMIO32((PPI_BASE) + 0x01C)
#define PPI_TASKS_CHG4_EN               MMIO32((PPI_BASE) + 0x020)
#define PPI_TASKS_CHG4_DIS              MMIO32((PPI_BASE) + 0x024)
#define PPI_TASKS_CHG5_EN               MMIO32((PPI_BASE) + 0x028)
#define PPI_TASKS_CHG5_DIS              MMIO32((PPI_BASE) + 0x02C)

/* Registers */
#define PPI_CHEN                        MMIO32((PPI_BASE) + 0x500)
#define PPI_CHENSET                     MMIO32((PPI_BASE) + 0x504)
#define PPI_CHENCLR                     MMIO32((PPI_BASE) + 0x508)

struct PPI_CH_TYPE{
	uint32_t EEP;
	uint32_t TEP;
};
#define PPI_CH            ((volatile struct PPI_CH_TYPE*)((PPI_BASE) + 0x510))
#define PPI_CH_EEP(channel)             MMIO32((PPI_BASE) + 0x510 + 8*channel)
#define PPI_CH_TEP(channel)             MMIO32((PPI_BASE) + 0x514 + 8*channel)
#define PPI_CH0_EEP                     MMIO32((PPI_BASE) + 0x510)
#define PPI_CH0_TEP                     MMIO32((PPI_BASE) + 0x514)
#define PPI_CH1_EEP                     MMIO32((PPI_BASE) + 0x518)
#define PPI_CH1_TEP                     MMIO32((PPI_BASE) + 0x51C)
#define PPI_CH2_EEP                     MMIO32((PPI_BASE) + 0x520)
#define PPI_CH2_TEP                     MMIO32((PPI_BASE) + 0x524)
#define PPI_CH3_EEP                     MMIO32((PPI_BASE) + 0x528)
#define PPI_CH3_TEP                     MMIO32((PPI_BASE) + 0x52C)
#define PPI_CH4_EEP                     MMIO32((PPI_BASE) + 0x530)
#define PPI_CH4_TEP                     MMIO32((PPI_BASE) + 0x534)
#define PPI_CH5_EEP                     MMIO32((PPI_BASE) + 0x538)
#define PPI_CH5_TEP                     MMIO32((PPI_BASE) + 0x53C)
#define PPI_CH6_EEP                     MMIO32((PPI_BASE) + 0x540)
#define PPI_CH6_TEP                     MMIO32((PPI_BASE) + 0x544)
#define PPI_CH7_EEP                     MMIO32((PPI_BASE) + 0x548)
#define PPI_CH7_TEP                     MMIO32((PPI_BASE) + 0x54C)
#define PPI_CH8_EEP                     MMIO32((PPI_BASE) + 0x550)
#define PPI_CH8_TEP                     MMIO32((PPI_BASE) + 0x554)
#define PPI_CH9_EEP                     MMIO32((PPI_BASE) + 0x558)
#define PPI_CH9_TEP                     MMIO32((PPI_BASE) + 0x55C)
#define PPI_CH10_EEP                    MMIO32((PPI_BASE) + 0x560)
#define PPI_CH10_TEP                    MMIO32((PPI_BASE) + 0x564)
#define PPI_CH11_EEP                    MMIO32((PPI_BASE) + 0x568)
#define PPI_CH11_TEP                    MMIO32((PPI_BASE) + 0x56C)
#define PPI_CH12_EEP                    MMIO32((PPI_BASE) + 0x570)
#define PPI_CH12_TEP                    MMIO32((PPI_BASE) + 0x574)
#define PPI_CH13_EEP                    MMIO32((PPI_BASE) + 0x578)
#define PPI_CH13_TEP                    MMIO32((PPI_BASE) + 0x57C)
#define PPI_CH14_EEP                    MMIO32((PPI_BASE) + 0x580)
#define PPI_CH14_TEP                    MMIO32((PPI_BASE) + 0x584)
#define PPI_CH15_EEP                    MMIO32((PPI_BASE) + 0x588)
#define PPI_CH15_TEP                    MMIO32((PPI_BASE) + 0x58C)
#define PPI_CH16_EEP                    MMIO32((PPI_BASE) + 0x590)
#define PPI_CH16_TEP                    MMIO32((PPI_BASE) + 0x594)
#define PPI_CH17_EEP                    MMIO32((PPI_BASE) + 0x598)
#define PPI_CH17_TEP                    MMIO32((PPI_BASE) + 0x59C)
#define PPI_CH18_EEP                    MMIO32((PPI_BASE) + 0x5A0)
#define PPI_CH18_TEP                    MMIO32((PPI_BASE) + 0x5A4)
#define PPI_CH19_EEP                    MMIO32((PPI_BASE) + 0x5A8)
#define PPI_CH19_TEP                    MMIO32((PPI_BASE) + 0x5AC)

#define PPI_CHG                         PTRIO32((PPI_BASE) + 0x800)
#define PPI_CHG0                        MMIO32((PPI_BASE) + 0x800)
#define PPI_CHG1                        MMIO32((PPI_BASE) + 0x804)
#define PPI_CHG2                        MMIO32((PPI_BASE) + 0x808)
#define PPI_CHG3                        MMIO32((PPI_BASE) + 0x80C)
#define PPI_CHG4                        MMIO32((PPI_BASE) + 0x810)
#define PPI_CHG5                        MMIO32((PPI_BASE) + 0x814)

struct PPI_FORK_TYPE{
	uint32_t TEP;
};
#define PPI_FORK      ((volatile struct PPI_FORK_TYPE*)((PPI_BASE) + 0x910))
#define PPI_FORK_TEP                    PTRIO32((PPI_BASE) + 0x910)
#define PPI_FORK0_TEP                   MMIO32((PPI_BASE) + 0x910)
#define PPI_FORK1_TEP                   MMIO32((PPI_BASE) + 0x914)
#define PPI_FORK2_TEP                   MMIO32((PPI_BASE) + 0x918)
#define PPI_FORK3_TEP                   MMIO32((PPI_BASE) + 0x91C)
#define PPI_FORK4_TEP                   MMIO32((PPI_BASE) + 0x920)
#define PPI_FORK5_TEP                   MMIO32((PPI_BASE) + 0x924)
#define PPI_FORK6_TEP                   MMIO32((PPI_BASE) + 0x928)
#define PPI_FORK7_TEP                   MMIO32((PPI_BASE) + 0x92C)
#define PPI_FORK8_TEP                   MMIO32((PPI_BASE) + 0x930)
#define PPI_FORK9_TEP                   MMIO32((PPI_BASE) + 0x934)
#define PPI_FORK10_TEP                  MMIO32((PPI_BASE) + 0x938)
#define PPI_FORK11_TEP                  MMIO32((PPI_BASE) + 0x93C)
#define PPI_FORK12_TEP                  MMIO32((PPI_BASE) + 0x940)
#define PPI_FORK13_TEP                  MMIO32((PPI_BASE) + 0x944)
#define PPI_FORK14_TEP                  MMIO32((PPI_BASE) + 0x948)
#define PPI_FORK15_TEP                  MMIO32((PPI_BASE) + 0x94C)
#define PPI_FORK16_TEP                  MMIO32((PPI_BASE) + 0x950)
#define PPI_FORK17_TEP                  MMIO32((PPI_BASE) + 0x954)
#define PPI_FORK18_TEP                  MMIO32((PPI_BASE) + 0x958)
#define PPI_FORK19_TEP                  MMIO32((PPI_BASE) + 0x95C)
#define PPI_FORK20_TEP                  MMIO32((PPI_BASE) + 0x960)
#define PPI_FORK21_TEP                  MMIO32((PPI_BASE) + 0x964)
#define PPI_FORK22_TEP                  MMIO32((PPI_BASE) + 0x968)
#define PPI_FORK23_TEP                  MMIO32((PPI_BASE) + 0x96C)
#define PPI_FORK24_TEP                  MMIO32((PPI_BASE) + 0x970)
#define PPI_FORK25_TEP                  MMIO32((PPI_BASE) + 0x974)
#define PPI_FORK26_TEP                  MMIO32((PPI_BASE) + 0x978)
#define PPI_FORK27_TEP                  MMIO32((PPI_BASE) + 0x97C)
#define PPI_FORK28_TEP                  MMIO32((PPI_BASE) + 0x980)
#define PPI_FORK29_TEP                  MMIO32((PPI_BASE) + 0x984)
#define PPI_FORK30_TEP                  MMIO32((PPI_BASE) + 0x988)
#define PPI_FORK31_TEP                  MMIO32((PPI_BASE) + 0x98C)
/**@}*/

/* --- PPI_CHEN values ----------------------------------------------------- */
/** @defgroup ppi_chen Enable or disable Channel
@ingroup ppi_defines
@{*/
#define PPI_CHEN_CH_Disabled(channel)                (0 << channel)
#define PPI_CHEN_CH_Enabled(channel)                 (1 << channel)
/**@}*/

/* --- PPI_CHENSET values -------------------------------------------------- */
/** @defgroup ppi_chenset Enable Channel set register
@ingroup ppi_defines
@{*/
#define PPI_CHENSET_CH_Set(channel)                  (1 << channel)
/**@}*/

/* --- PPI_CHENCLR values -------------------------------------------------- */
/** @defgroup ppi_chenclr Enable Channel clear register
@ingroup ppi_defines
@{*/
#define PPI_CHENCLR_CH_Clear(channel)                (1 << channel)
/**@}*/

/* --- PPI_CHG values ------------------------------------------------------ */
/** @defgroup ppi_chg Include or exclude Channel
@ingroup ppi_defines
@{*/
#define PPI_CHG_CH_Excluded(channel)                (0 << channel)
#define PPI_CHG_CH_Included(channel)                (1 << channel)
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS

/**@}*/

#endif
/** @cond */
#else
#warning "ppi_common.h should not be included explicitly, only via ppi.h"
#endif
/** @endcond */

