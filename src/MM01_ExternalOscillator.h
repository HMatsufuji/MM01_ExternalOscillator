/*
 *  ESP32 RTC External Oscillator
 */

#ifndef __MM01_ExternalOscillator_H__
#define __MM01_ExternalOscillator_H__

#include "soc/soc.h"
#include "soc/rtc.h"
#include "rom/rtc.h"
#include "soc/rtc_cntl_reg.h"

/////////////////////////////
// RTC External Oscillator //
/////////////////////////////

// The slowclk period is 16,000,000 [psec] when 32.768kHz oscillator is enabled. 
#define SLOW_CLK_CAL_VALUE 16000000

class MM01_ExternalOscillator {
  public:
    MM01_ExternalOscillator();
};

#endif
