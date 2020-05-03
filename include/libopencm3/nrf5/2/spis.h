/** @defgroup ppi_defines Serial peripheral interface slave Defines

@brief <b>Defined Constants and Types for the NRF52xx Serial peripheral 
interface slave</b>

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

#ifndef LIBOPENCM3_SPIS_H
#define LIBOPENCM3_SPIS_H

#include <libopencm3/nrf5/common/spis_common.h>    

/** @defgroup spis_reg_base SPIS register base addresses
 * @ingroup spis_defines
 * @{
 */
#define SPIS0                            SPIS0_BASE
#define SPIS2                            SPIS2_BASE
/**@}*/

/* --------------------- SPIS registers for NRF52 ------------------------- */
/** @defgroup spis_registers SPIS Registers
 * @ingroup spis_defines
 * @brief SPIS Registers
@{*/
#define SPIS_EVENTS_ENDRX(spis_base)             MMIO32((spis_base) + 0x110)

struct SPIS_PSEL_TYPE{
	uint32_t SCK;
	uint32_t MISO;
	uint32_t MOSI;
	uint32_t CSN;
};
#define SPIS_PSEL(spis_base)      (*(volatile struct SPIS_PSEL_TYPE*)((spis_base) + 0x508))

struct SPIS_RXD_TYPE{
	uint32_t PTR;
	uint32_t MAXCNT;
	uint32_t AMOUNT;
};
#define SPIS_RXD(spis_base)       (*(volatile struct SPIS_RXD_TYPE*)((spis_base) + 0x534))

struct SPIS_TXD_TYPE{
	uint32_t PTR;
	uint32_t MAXCNT;
	uint32_t AMOUNT;
};
#define SPIS_TXD(spis_base)       (*(volatile struct SPIS_TXD_TYPE*)((spis_base) + 0x544))

/* --- SPIS_INTENSET values ------------------------------------------------ */
/** @defgroup spis_intenset Enable interrupt
@ingroup spis_defines
@{*/
#define SPIS_INTENSET_ENDRX_Set               (1 << 4)
/**@}*/

/* --- SPIS_INTENCLR values ------------------------------------------------ */
/** @defgroup spis_intenclr Disable interrupt
@ingroup spis_defines
@{*/
#define SPIS_INTENCLR_ENDRX_Clear            (1 << 4)
/**@}*/

/* --- SPIS_PSEL.SCK values ------------------------------------------------ */
/** @defgroup spis_psel_sck Select pin for SCK
@ingroup spis_defines
@{*/
#define SPIS_PSEL_SCK_PIN(n)                     (n)
#define SPIS_PSEL_SCK_CONNECT_Connected          (0 << 31)
#define SPIS_PSEL_SCK_CONNECT_Disconnected       (1 << 31)
/**@}*/

/* --- SPIS_PSEL.MISO values ----------------------------------------------- */
/** @defgroup spis_psel_miso Select pin for MISO signal
@ingroup spis_defines
@{*/
#define SPIS_PSEL_MISO_PIN(n)                    (n)
#define SPIS_PSEL_MISO_CONNECT_Connected         (0 << 31)
#define SPIS_PSEL_MISO_CONNECT_Disconnected      (1 << 31)
/**@}*/

/* --- SPIS_PSEL.MOSI values ----------------------------------------------- */
/** @defgroup spis_psel_mosi Select pin for MOSI signal
@ingroup spis_defines
@{*/
#define SPIS_PSEL_MOSI_PIN(n)                    (n)
#define SPIS_PSEL_MOSI_CONNECT_Connected         (0 << 31)
#define SPIS_PSEL_MOSI_CONNECT_Disconnected      (1 << 31)
/**@}*/

/* --- SPIS_PSEL.CSN values ------------------------------------------------ */
/** @defgroup spis_psel_csn Select pin for CSN signal
@ingroup spis_defines
@{*/
#define SPIS_PSEL_CSN_PIN(n)                     (n)
#define SPIS_PSEL_CSN_CONNECT_Connected          (0 << 31)
#define SPIS_PSEL_CSN_CONNECT_Disconnected       (1 << 31)
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS

#endif

