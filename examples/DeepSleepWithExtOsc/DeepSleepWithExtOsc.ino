#include <Arduino.h>
#include <esp_deep_sleep.h>
#include <MM01_ExternalOscillator.h>

// Enable the external 32.768kHz oscillator.
MM01_ExternalOscillator RTCEO;

void setup() {    
  Serial.begin(115200);

  Serial.printf("Measure the RTC slow clock period: %d psec.\n", rtc_clk_cal(RTC_CAL_RTC_MUX, 1000));
  Serial.println("Bye!\n");

  // 10 seconds deep sleep
  esp_deep_sleep_enable_timer_wakeup(10 * 1000 * 1000);
  esp_deep_sleep_start();
}

void loop() {}
