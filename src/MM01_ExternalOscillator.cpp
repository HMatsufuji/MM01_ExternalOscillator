#include "MM01_ExternalOscillator.h"

MM01_ExternalOscillator::MM01_ExternalOscillator() {

  // Enable the external 32.768kHz oscillator
  rtc_clk_32k_enable_external();

  // Set RTC slow clock source to external 32.768kHz xtal oscillator.
  rtc_clk_slow_freq_set(RTC_SLOW_FREQ_32K_XTAL);

  // Set slow clock period to 16000000 psec.
  REG_WRITE(RTC_SLOW_CLK_CAL_REG, SLOW_CLK_CAL_VALUE);      
}
