/** @defgroup radio_file RADIO

@ingroup NRF52xx

@brief <b>libopencm3 NRF52xx RADIO</b>

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

#include <libopencm3/nrf5/radio.h>
#include <libopencm3/nrf5/clock.h>

/**@{*/

/*---------------------------------------------------------------------------*/
/** @brief RADIO CRC check status

Return 1 if packet received with CRC ok
*/

uint32_t radio_crc_ok(void)
{
	return RADIO_EVENTS_CRCOK;
}

/*---------------------------------------------------------------------------*/
/** @brief RADIO Reset CRC check event

Clear CRCOK event and ready to check CRC for the next transmission/reception
*/

void radio_crc_ok_reset(void)
{
	RADIO_EVENTS_CRCOK = 0;
}

/**@}*/