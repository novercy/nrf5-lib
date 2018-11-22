/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 *
 * This part needs to get included in the compilation unit where
 * blocking_handler gets defined due to the way #pragma works.
 */


/** @defgroup CM3_nvic_isrdecls_NRF52 User interrupt service routines (ISR) defaults for NRF5 2 series
    @ingroup CM3_nvic_isrdecls

    @{*/

void power_clock_isr(void) __attribute__((weak, alias("blocking_handler")));
void radio_isr(void) __attribute__((weak, alias("blocking_handler")));
void uarte0_uart0_isr(void) __attribute__((weak, alias("blocking_handler")));
void spim0_spis0_twim0_twis0_spi0_twi0_isr(void) __attribute__((weak, alias("blocking_handler")));
void spim1_spis1_twim1_twis1_spi1_twi1_isr(void) __attribute__((weak, alias("blocking_handler")));
void nfct_isr(void) __attribute__((weak, alias("blocking_handler")));
void gpiote_isr(void) __attribute__((weak, alias("blocking_handler")));
void saadc_isr(void) __attribute__((weak, alias("blocking_handler")));
void timer0_isr(void) __attribute__((weak, alias("blocking_handler")));
void timer1_isr(void) __attribute__((weak, alias("blocking_handler")));
void timer2_isr(void) __attribute__((weak, alias("blocking_handler")));
void rtc0_isr(void) __attribute__((weak, alias("blocking_handler")));
void temp_isr(void) __attribute__((weak, alias("blocking_handler")));
void rng_isr(void) __attribute__((weak, alias("blocking_handler")));
void ecb_isr(void) __attribute__((weak, alias("blocking_handler")));
void ccm_aar_isr(void) __attribute__((weak, alias("blocking_handler")));
void wdt_isr(void) __attribute__((weak, alias("blocking_handler")));
void rtc1_isr(void) __attribute__((weak, alias("blocking_handler")));
void qdec_isr(void) __attribute__((weak, alias("blocking_handler")));
void comp_lpcomp_isr(void) __attribute__((weak, alias("blocking_handler")));
void swi0_egu0_isr(void) __attribute__((weak, alias("blocking_handler")));
void swi1_egu1_isr(void) __attribute__((weak, alias("blocking_handler")));
void swi2_egu2_isr(void) __attribute__((weak, alias("blocking_handler")));
void swi3_egu3_isr(void) __attribute__((weak, alias("blocking_handler")));
void swi4_egu4_isr(void) __attribute__((weak, alias("blocking_handler")));
void swi5_egu5_isr(void) __attribute__((weak, alias("blocking_handler")));
void timer3_isr(void) __attribute__((weak, alias("blocking_handler")));
void timer4_isr(void) __attribute__((weak, alias("blocking_handler")));
void pwm0_isr(void) __attribute__((weak, alias("blocking_handler")));
void pdm_isr(void) __attribute__((weak, alias("blocking_handler")));
void mwu_isr(void) __attribute__((weak, alias("blocking_handler")));
void pwm1_isr(void) __attribute__((weak, alias("blocking_handler")));
void pwm2_isr(void) __attribute__((weak, alias("blocking_handler")));
void spim2_spis2_spi2_isr(void) __attribute__((weak, alias("blocking_handler")));
void rtc2_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2s_isr(void) __attribute__((weak, alias("blocking_handler")));
void fpu_isr(void) __attribute__((weak, alias("blocking_handler")));

/**@}*/

/* Initialization template for the interrupt vector table. This definition is
 * used by the startup code generator (vector.c) to set the initial values for
 * the interrupt handling routines to the chip family specific _isr weak
 * symbols. */

#define IRQ_HANDLERS \
    [NVIC_POWER_CLOCK_IRQ] = power_clock_isr, \
    [NVIC_RADIO_IRQ] = radio_isr, \
    [NVIC_UARTE0_UART0_IRQ] = uarte0_uart0_isr, \
    [NVIC_SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQ] = spim0_spis0_twim0_twis0_spi0_twi0_isr, \
    [NVIC_SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQ] = spim1_spis1_twim1_twis1_spi1_twi1_isr, \
    [NVIC_NFCT_IRQ] = nfct_isr, \
    [NVIC_GPIOTE_IRQ] = gpiote_isr, \
    [NVIC_SAADC_IRQ] = saadc_isr, \
    [NVIC_TIMER0_IRQ] = timer0_isr, \
    [NVIC_TIMER1_IRQ] = timer1_isr, \
    [NVIC_TIMER2_IRQ] = timer2_isr, \
    [NVIC_RTC0_IRQ] = rtc0_isr, \
    [NVIC_TEMP_IRQ] = temp_isr, \
    [NVIC_RNG_IRQ] = rng_isr, \
    [NVIC_ECB_IRQ] = ecb_isr, \
    [NVIC_CCM_AAR_IRQ] = ccm_aar_isr, \
    [NVIC_WDT_IRQ] = wdt_isr, \
    [NVIC_RTC1_IRQ] = rtc1_isr, \
    [NVIC_QDEC_IRQ] = qdec_isr, \
    [NVIC_COMP_LPCOMP_IRQ] = comp_lpcomp_isr, \
    [NVIC_SWI0_EGU0_IRQ] = swi0_egu0_isr, \
    [NVIC_SWI1_EGU1_IRQ] = swi1_egu1_isr, \
    [NVIC_SWI2_EGU2_IRQ] = swi2_egu2_isr, \
    [NVIC_SWI3_EGU3_IRQ] = swi3_egu3_isr, \
    [NVIC_SWI4_EGU4_IRQ] = swi4_egu4_isr, \
    [NVIC_SWI5_EGU5_IRQ] = swi5_egu5_isr, \
    [NVIC_TIMER3_IRQ] = timer3_isr, \
    [NVIC_TIMER4_IRQ] = timer4_isr, \
    [NVIC_PWM0_IRQ] = pwm0_isr, \
    [NVIC_PDM_IRQ] = pdm_isr, \
    [NVIC_MWU_IRQ] = mwu_isr, \
    [NVIC_PWM1_IRQ] = pwm1_isr, \
    [NVIC_PWM2_IRQ] = pwm2_isr, \
    [NVIC_SPIM2_SPIS2_SPI2_IRQ] = spim2_spis2_spi2_isr, \
    [NVIC_RTC2_IRQ] = rtc2_isr, \
    [NVIC_I2S_IRQ] = i2s_isr, \
    [NVIC_FPU_IRQ] = fpu_isr
