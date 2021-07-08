#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

// #define SSD1306OLED
#undef USE_I2C
#undef SSD1306OLED

#define USE_SERIAL_PD2

// potential (?) fix for oled issues
#ifdef OLED_DRIVER_ENABLE
#    define OLED_TIMEOUT 10000
#    define OLED_DISABLE_TIMEOUT // Prevent matrix_changed triggering oled_on()
#endif