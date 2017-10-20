#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#undef PRODUCT
#define PRODUCT         QMK BLE Adapter
#undef DESCRIPTION
#define DESCRIPTION  

// Turn off the mode leds on the BLE module
#define ADAFRUIT_BLE_ENABLE_MODE_LEDS 0
#define ADAFRUIT_BLE_ENABLE_POWER_LED 0

#endif
