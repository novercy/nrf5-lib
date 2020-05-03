/** @defgroup clock_file Clock Control

@ingroup NRF52xx

@brief <b>libopencm3 NRF52xx Clock Control</b>

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

#include <libopencm3/cm3/assert.h>
#include <libopencm3/nrf5/clock.h>

/**@{*/

/*---------------------------------------------------------------------------*/
/** @brief Clock Enable bypass of LFCLK with external source.

If Bypass enabled, LFCLK crystal oscillator will use rail-to-rail external
source
*/

void clock_lfclk_extsource_bypass(void)
{
	CLOCK_LFCLKSRC |= CLOCK_LFCLKSRC_BYPASS_Enabled;
}

/*---------------------------------------------------------------------------*/
/** @brief Clock Enable LFCLK external source.

*/

void clock_lfclk_extsource_enable(void)
{
	CLOCK_LFCLKSRC |= CLOCK_LFCLKSRC_EXTERNAL_Enabled;
}


/**@}*/