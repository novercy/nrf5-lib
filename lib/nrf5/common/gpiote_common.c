/** @addtogroup gpiote_file

@author @htmlonly &copy; @endhtmlonly 2018 
Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
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

#include <libopencm3/nrf5/gpiote.h>

/**@{*/

/*---------------------------------------------------------------------------*/
/** @brief Configurate for GPIOTE channel

"mode" can be set as MODE_DISABLED, MODE_TASK, or MODE_EVENT.
"pin" can be selected from 0 to 31.
"polarity" can be set as POLARITY_NONE, POLARITY_LOTOHI, POLARITY_HITOLO, or
   POLARITY_TOGGLE.
"outinit" can be set as OUTINIT_LOW or OUTINIT_HIGH.

@param[in] channel Unsigned int8. GPIOTE channel
@param[in] mode Unsigned int32. Set mode for tasks (pin output) or 
   event (pin input)
@param[in] pin Unsigned int32. Pin identifiers @ref gpio_pin_id
@param[in] polarity Unsigned int32. Set polarity for output in task mode
   or for input in event mode
@param[in] outinit Boolean. Initial output
*/
void gpiote_config(uint8_t channel, uint32_t mode, uint32_t pin,\
                      uint32_t polarity, bool outinit)
{
	GPIOTE_CONFIG[channel] = mode |
							 GPIOTE_CONFIG_PSEL(pin) |
							 polarity |
							 outinit;
}

/*---------------------------------------------------------------------------*/
/** @brief Write to selected pin

Write to pin specified in CONFIG, depends on which polarity choosed.

@param[in] channel Unsigned int8. GPIOTE channel.
*/
void gpiote_tasks_out(uint8_t channel)
{
	GPIOTE_TASKS_OUT[channel] = 1;
}

/*---------------------------------------------------------------------------*/
/** @brief Set selected pin to high

Set pin, which specified in CONFIG, to high.

@param[in] channel Unsigned int8. GPIOTE channel.
*/
void gpiote_tasks_set(uint8_t channel)
{
	GPIOTE_TASKS_SET[channel] = 1;
}

/*---------------------------------------------------------------------------*/
/** @brief Set selected pin to low

Set pin, which specified in CONFIG, to low.

@param[in] channel Unsigned int8. GPIOTE channel.
*/
void gpiote_tasks_clr(uint8_t channel)
{
	GPIOTE_TASKS_CLR[channel] = 1;
}

/**@}*/