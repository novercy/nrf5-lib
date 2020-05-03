/** @addtogroup gpio_defines
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

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA GPIO.H
The order of header inclusion is important. gpio.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_GPIO_H)
/** @endcond */
#ifndef LIBOPENCM3_GPIO_COMMON_H
#define LIBOPENCM3_GPIO_COMMON_H

/**@{*/

/** @defgroup gpio_registers GPIO Registers
 * @ingroup gpio_defines
 * @brief GPIO Registers
@{*/

/* --------------------- GPIO registers for NRF5x -------------------------- */

/* Registers */
#define GPIO_OUT                       MMIO32((GPIO_BASE) + 0x504)
#define GPIO_OUTSET                    MMIO32((GPIO_BASE) + 0x508)
#define GPIO_OUTCLR                    MMIO32((GPIO_BASE) + 0x50C)
#define GPIO_IN                        MMIO32((GPIO_BASE) + 0x510)
#define GPIO_DIR                       MMIO32((GPIO_BASE) + 0x514)
#define GPIO_DIRSET                    MMIO32((GPIO_BASE) + 0x518)
#define GPIO_DIRCLR                    MMIO32((GPIO_BASE) + 0x51C)
#define GPIO_PIN_CNF                   PTRIO32((GPIO_BASE) + 0x700)
/**@}*/

/* --- GPIO_OUT values ----------------------------------------------------- */
/** @defgroup gpio_out Write GPIO port
@ingroup gpio_defines
@{*/
#define GPIO_OUT_PIN_Low(n)              (0 << n)
#define GPIO_OUT_PIN_High(n)             (1 << n)
/**@}*/

/* --- GPIO_OUTSET values -------------------------------------------------- */
/** @defgroup gpio_outset Set individual bits in GPIO port
@ingroup gpio_defines
@{*/
#define GPIO_OUTSET_PIN(n)               (1 << n)
/**@}*/

/* --- GPIO_OUTCLR values -------------------------------------------------- */
/** @defgroup gpio_outclr Clear individual bits in GPIO port
@ingroup gpio_defines
@{*/
#define GPIO_OUTCLR_PIN(n)               (1 << n)
/**@}*/

/* --- GPIO_IN values ------------------------------------------------------ */
/** @defgroup gpio_in Read GPIO port
@ingroup gpio_defines
@{*/
#define GPIO_IN_PIN(n)                   (1 << n)
/**@}*/

/* --- GPIO_DIR values ----------------------------------------------------- */
/** @defgroup gpio_dir Direction of GPIO pins
@ingroup gpio_defines
@{*/
#define GPIO_DIR_PIN_Input(n)            (0 << n)
#define GPIO_DIR_PIN_Output(n)           (1 << n)
/**@}*/

/* --- GPIO_DIRSET values -------------------------------------------------- */
/** @defgroup gpio_dirset Set direction of individual GPIO pins
@ingroup gpio_defines
@{*/
#define GPIO_DIRSET_PIN(n)               (1 << n)
/**@}*/

/* --- GPIO_DIRCLR values -------------------------------------------------- */
/** @defgroup gpio_dirclr Clear direction of individual GPIO pins
@ingroup gpio_defines
@{*/
#define GPIO_DIRCLR_PIN(n)               (1 << n)
/**@}*/

/* --- GPIO_PIN_CNF[n] values ---------------------------------------------- */
/** @defgroup gpio_pin_cnf[n] Configuration of GPIO pins
@ingroup gpio_defines
@{*/
/* Pin direction */
#define GPIO_PIN_CNF_DIR(n)                    (((n)&0x01) << 0)
#define GPIO_PIN_CNF_DIR_Input                 (0 << 0)
#define GPIO_PIN_CNF_DIR_Output                (1 << 0)
#define DIR_INPUT                              (0)
#define DIR_OUTPUT                             (1)
/* Input buffer configuration */
#define GPIO_PIN_CNF_INPUT(n)                  (((n)&0x01) << 1)
#define GPIO_PIN_CNF_INPUT_Connect             (0 << 1)
#define GPIO_PIN_CNF_INPUT_Disconnect          (1 << 1)
#define INPUT_CONNECT                          (0)
#define INPUT_DISCONNECT                       (1)
/* Pull configuration */
#define GPIO_PIN_CNF_PULL(n)                   (((n)&0x03) << 2)
#define GPIO_PIN_CNF_PULL_Disabled             (0 << 2)
#define GPIO_PIN_CNF_PULL_Pulldown             (1 << 2)
#define GPIO_PIN_CNF_PULL_Pullup               (0x3 << 2)
#define PULL_DISABLED                          (0)
#define PULL_DOWN                              (1)
#define PULL_UP                                (3)
/* Drive configuration */
/* Note: S stands for Standard. H stands for High drive. D stands for 
Disconnect. Eg. S0S1 is Standard '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE(n)                  (((n)&0x07) << 8)
#define GPIO_PIN_CNF_DRIVE_S0S1                (0 << 8)
#define GPIO_PIN_CNF_DRIVE_H0S1                (1 << 8)
#define GPIO_PIN_CNF_DRIVE_S0H1                (0x2 << 8)
#define GPIO_PIN_CNF_DRIVE_H0H1                (0x3 << 8)
#define GPIO_PIN_CNF_DRIVE_D0S1                (0x4 << 8)
#define GPIO_PIN_CNF_DRIVE_D0H1                (0x5 << 8)
#define GPIO_PIN_CNF_DRIVE_S0D1                (0x6 << 8)
#define GPIO_PIN_CNF_DRIVE_H0D1                (0x7 << 8)
#define DRIVE_S0S1                             (0)
#define DRIVE_H0S1                             (1)
#define DRIVE_S0H1                             (2)
#define DRIVE_H0H1                             (3)
#define DRIVE_D0S1                             (4)
#define DRIVE_D0H1                             (5)
#define DRIVE_S0D1                             (6)
#define DRIVE_H0D1                             (7)
/* Pin sensing mechanism */
#define GPIO_PIN_CNF_SENSE(n)                  (((n)&0x03) << 16)
#define GPIO_PIN_CNF_SENSE_Disabled            (0 << 16)
#define GPIO_PIN_CNF_SENSE_High                (0x2 << 16)
#define GPIO_PIN_CNF_SENSE_Low                 (0x3 << 16)
#define SENSE_DISABLED                         (0)
#define SENSE_HIGH                             (2)
#define SENSE_LOW                              (3)

/* ------------------------------------------------------------------------- */
/* GPIO number definitions (for convenience) */
/** @defgroup gpio_pin_id GPIO Pin Identifiers
@ingroup gpio_defines

@{*/
#define GPIO(n)               (1 << n)
#define GPIO0                 (1 << 0)
#define GPIO1                 (1 << 1)
#define GPIO2                 (1 << 2)
#define GPIO3                 (1 << 3)
#define GPIO4                 (1 << 4)
#define GPIO5                 (1 << 5)
#define GPIO6                 (1 << 6)
#define GPIO7                 (1 << 7)
#define GPIO8                 (1 << 8)
#define GPIO9                 (1 << 9)
#define GPIO10                (1 << 10)
#define GPIO11                (1 << 11)
#define GPIO12                (1 << 12)
#define GPIO13                (1 << 13)
#define GPIO14                (1 << 14)
#define GPIO15                (1 << 15)
#define GPIO16                (1 << 16)
#define GPIO17                (1 << 17)
#define GPIO18                (1 << 18)
#define GPIO19                (1 << 19)
#define GPIO20                (1 << 20)
#define GPIO21                (1 << 21)
#define GPIO22                (1 << 22)
#define GPIO23                (1 << 23)
#define GPIO24                (1 << 24)
#define GPIO25                (1 << 25)
#define GPIO26                (1 << 26)
#define GPIO27                (1 << 27)
#define GPIO28                (1 << 28)
#define GPIO29                (1 << 29)
#define GPIO30                (1 << 30)
#define GPIO31                (1 << 31)
#define GPIO_ALL              0xffffffff
/*Pin number definitions for convenience*/
#define pin(n)            n
#define pin0              0
#define pin1              1
#define pin2              2
#define pin3              3
#define pin4              4
#define pin5              5
#define pin6              6
#define pin7              7
#define pin8              8 
#define pin9              9
#define pin10            10
#define pin11            11
#define pin12            12
#define pin13            13
#define pin14            14
#define pin15            15
#define pin16            16
#define pin17            17
#define pin18            18
#define pin19            19
#define pin20            20
#define pin21            21
#define pin22            22
#define pin23            23
#define pin24            24
#define pin25            25
#define pin26            26
#define pin27            27
#define pin28            28
#define pin29            29
#define pin30            30
#define pin31            31
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

void gpio_set(uint32_t gpios);
void gpio_clear(uint32_t gpios);
uint32_t gpio_read(uint32_t gpios);
void gpio_dir_output(uint32_t gpios);
void gpio_dir_input(uint32_t gpios);
void gpio_toggle(uint32_t gpios);
void gpio_config(uint32_t gpios, uint32_t dir, uint32_t input, 
			uint32_t pull, uint32_t drive, uint32_t sense);

END_DECLS

/**@}*/

#endif
/** @cond */
#else
#warning "gpio_common.h should not be included explicitly, only via gpio.h"
#endif
/** @endcond */

