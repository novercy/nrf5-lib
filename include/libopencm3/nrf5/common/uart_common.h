/** @addtogroup uart_defines
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

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA UART.H
The order of header inclusion is important. uart.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_UART_H)
/** @endcond */
#ifndef LIBOPENCM3_UART_COMMON_H
#define LIBOPENCM3_UART_COMMON_H

/**@{*/
/** @defgroup uart_reg_base UART register base addresses
 * @ingroup uart_defines
 * @{
 */
#define UART0                     UART0_BASE
/**@}*/

/** @defgroup uart_registers UARTE Registers
 * @ingroup uart_defines
 * @brief UART Registers
@{*/
/* --------------------- UART registers for NRF5x -------------------------- */

/* Tasks Registers */
#define UART_TASKS_STARTRX(uart_base)        MMIO32((uart_base) + 0x000)
#define UART0_TASKS_STARTRX                  MMIO32((UART0) + 0x000)    

#define UART_TASKS_STOPRX(uart_base)         MMIO32((uart_base) + 0x004)
#define UART0_TASKS_STOPRX                   MMIO32((UART0) + 0x004)    

#define UART_TASKS_STARTTX(uart_base)        MMIO32((uart_base) + 0x008)
#define UART0_TASKS_STARTTX                  MMIO32((UART0) + 0x008)    

#define UART_TASKS_STOPTX(uart_base)         MMIO32((uart_base) + 0x00C)
#define UART0_TASKS_STOPTX                   MMIO32((UART0) + 0x00C)    

#define UART_TASKS_SUSPEND(uart_base)        MMIO32((uart_base) + 0x01C)
#define UART0_TASKS_SUSPEND                  MMIO32((UART0) + 0x01C)    

/* Events Registers */
#define UART_EVENTS_CTS(uart_base)           MMIO32((uart_base) + 0x100)
#define UART0_EVENTS_CTS                     MMIO32((UART0) + 0x100)

#define UART_EVENTS_NCTS(uart_base)          MMIO32((uart_base) + 0x104)
#define UART0_EVENTS_NCTS                    MMIO32((UART0) + 0x104)

#define UART_EVENTS_RXDRDY(uart_base)        MMIO32((uart_base) + 0x108)
#define UART0_EVENTS_RXDRDY                  MMIO32((UART0) + 0x108)

#define UART_EVENTS_TXDRDY(uart_base)        MMIO32((uart_base) + 0x11C)
#define UART0_EVENTS_TXDRDY                  MMIO32((UART0) + 0x11C)

#define UART_EVENTS_ERROR(uart_base)         MMIO32((uart_base) + 0x124)
#define UART0_EVENTS_ERROR                   MMIO32((UART0) + 0x124)

#define UART_EVENTS_RXTO(uart_base)          MMIO32((uart_base) + 0x144)
#define UART0_EVENTS_RXTO                    MMIO32((UART0) + 0x144)

/* Registers */
#define UART_INTENSET(uart_base)             MMIO32((uart_base) + 0x304)
#define UART0_INTENSET                       MMIO32((UART0) + 0x304)

#define UART_INTENCLR(uart_base)             MMIO32((uart_base) + 0x308)
#define UART0_INTENCLR                       MMIO32((UART0) + 0x308)

#define UART_ERRORSRC(uart_base)             MMIO32((uart_base) + 0x480)
#define UART0_ERRORSRC                       MMIO32((UART0) + 0x480)

#define UART_ENABLE(uart_base)               MMIO32((uart_base) + 0x500)
#define UART0_ENABLE                         MMIO32((UART0) + 0x500)

#define UART_PSELRTS(uart_base)              MMIO32((uart_base) + 0x508)
#define UART0_PSELRTS                        MMIO32((UART0) + 0x508)

#define UART_PSELTXD(uart_base)              MMIO32((uart_base) + 0x50C)
#define UART0_PSELTXD                        MMIO32((UART0) + 0x50C)

#define UART_PSELCTS(uart_base)              MMIO32((uart_base) + 0x510)
#define UART0_PSELCTS                        MMIO32((UART0) + 0x510)

#define UART_PSELRXD(uart_base)              MMIO32((uart_base) + 0x514)
#define UART0_PSELRXD                        MMIO32((UART0) + 0x514)

#define UART_RXD(uart_base)                  MMIO32((uart_base) + 0x518)
#define UART0_RXD                            MMIO32((UART0) + 0x518)    

#define UART_TXD(uart_base)                  MMIO32((uart_base) + 0x51C)
#define UART0_TXD                            MMIO32((UART0) + 0x51C)    

#define UART_BAUDRATE(uart_base)             MMIO32((uart_base) + 0x524)
#define UART0_BAUDRATE                       MMIO32((UART0) + 0x524)

#define UART_CONFIG(uart_base)               MMIO32((uart_base) + 0x56C)
#define UART0_CONFIG                         MMIO32((UART0) + 0x56C)
/**@}*/

/* --- UART_INTENSET values ------------------------------------------------ */
/** @defgroup uart_intenset Enable interrupt
@ingroup uart_defines
@{*/
#define UART_INTENSET_CTS_Set             (1 << 0)
#define UART_INTENSET_NCTS_Set            (1 << 1)    
#define UART_INTENSET_RXDRDY_Set          (1 << 2)    
#define UART_INTENSET_TXDRDY_Set          (1 << 7)    
#define UART_INTENSET_ERROR_Set           (1 << 9)    
#define UART_INTENSET_RXTO_Set            (1 << 17)
/**@}*/

/* --- UART_INTENCLR values ------------------------------------------------ */
/** @defgroup uart_intenclr Disable interrupt
@ingroup uart_defines
@{*/
#define UART_INTENCLR_CTS_Clear             (1 << 0)
#define UART_INTENCLR_NCTS_Clear            (1 << 1)    
#define UART_INTENCLR_NXDRDY_Clear          (1 << 2)    
#define UART_INTENCLR_TXDRDY_Clear          (1 << 7)    
#define UART_INTENCLR_ERROR_Clear           (1 << 9)    
#define UART_INTENCLR_RXTO_Clear            (1 << 17)
/**@}*/

/* --- UART_ERRORSRC values ------------------------------------------------ */
/** @defgroup uart_errorsrc Error source
@ingroup uart_defines
@{*/
#define UART_ERRORSRC_OVERRUN_NotPresent           (0 << 0)
#define UART_ERRORSRC_OVERRUN_Present              (1 << 0)
#define UART_ERRORSRC_PARITY_NotPresent            (0 << 1)
#define UART_ERRORSRC_PARITY_Present               (1 << 1)
#define UART_ERRORSRC_FRAMING_NotPresent           (0 << 2)
#define UART_ERRORSRC_FRAMING_Present              (1 << 2)
#define UART_ERRORSRC_BREAK_NotPresent             (0 << 3)
#define UART_ERRORSRC_BREAK_Present                (1 << 3)
/**@}*/

/* --- UART_ENABLE values -------------------------------------------------- */
/** @defgroup uart_enable Enable UART
@ingroup uart_defines
@{*/
#define UART_ENABLE_ENABLE_Disabled                  (0)
#define UART_ENABLE_ENABLE_Enabled                   (4)
/**@}*/

/* --- UART_PSELRTS values ------------------------------------------------- */
/** @defgroup uart_pselrts Select pin for RTS signal
@ingroup uart_defines
@{*/
#define UART_PSELRTS_PIN(n)                  (n)
#define UART_PSELRTS_Disconnected            0xffffffff
/**@}*/

/* --- UART_PSELTXD values ------------------------------------------------- */
/** @defgroup uart_pseltxd Select pin for TXD signal
@ingroup uart_defines
@{*/
#define UART_PSELTXD_PIN(n)                  (n)
#define UART_PSELTXD_Disconnected            0xffffffff
/**@}*/

/* --- UART_PSELCTS values ------------------------------------------------- */
/** @defgroup uart_pselcts Select pin for CTS signal
@ingroup uart_defines
@{*/
#define UART_PSELCTS_PIN(n)                  (n)
#define UART_PSELCTS_Disconnected            0xffffffff
/**@}*/

/* --- UART_PSELRXD values ------------------------------------------------- */
/** @defgroup uart_pselrxd Select pin for RXD signal
@ingroup uart_defines
@{*/
#define UART_PSELRXD_PIN(n)                  (n)
#define UART_PSELRXD_Disconnected            0xffffffff
/**@}*/

/* --- UART_BAUDRATE values ------------------------------------------------ */
/** @defgroup uart_baudrate Set baud rate for UART
@ingroup uart_defines
@{*/
#define UART_BAUDRATE_BAUDRATE_Baud1200          0x0004f000    
#define UART_BAUDRATE_BAUDRATE_Baud2400          0x0009d000    
#define UART_BAUDRATE_BAUDRATE_Baud4800          0x0013b000    
#define UART_BAUDRATE_BAUDRATE_Baud9600          0x00275000    
#define UART_BAUDRATE_BAUDRATE_Baud14400         0x003b0000    
#define UART_BAUDRATE_BAUDRATE_Baud19200         0x004ea000    
#define UART_BAUDRATE_BAUDRATE_Baud28800         0x0075f000    
#define UART_BAUDRATE_BAUDRATE_Baud38400         0x009d5000    
#define UART_BAUDRATE_BAUDRATE_Baud57600         0x00ebf000    
#define UART_BAUDRATE_BAUDRATE_Baud76800         0x013a9000    
#define UART_BAUDRATE_BAUDRATE_Baud115200        0x01d7e000    
#define UART_BAUDRATE_BAUDRATE_Baud230400        0x03afb000    
#define UART_BAUDRATE_BAUDRATE_Baud250000        0x04000000    
#define UART_BAUDRATE_BAUDRATE_Baud460800        0x075f7000    
#define UART_BAUDRATE_BAUDRATE_Baud1M            0x10000000
/**@}*/

/* --- UART_CONFIG values -------------------------------------------------- */
/** @defgroup uart_config Configurate parity and hardware flow control
@ingroup uart_defines
@{*/
#define UART_CONFIG_HWFC_Enabled              1  
#define UART_CONFIG_HWFC_Disabled             0  
#define UART_CONFIG_PARITY_Excluded           (0x0 << 1)
#define UART_CONFIG_PARITY_Included           (0x7 << 1)
/**@}*/


/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS

/**@}*/

#endif
/** @cond */
#else
#warning "uart_common.h should not be included explicitly, only via uart.h"
#endif
/** @endcond */

