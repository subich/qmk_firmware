#pragma once

#ifdef TAP_DANCE_ENABLE
#endif  // TAP_DANCE_ENABLE

#ifdef SPLIT_KEYBOARD
#    define SPLIT_MODS_ENABLE
#    define SPLIT_TRANSPORT_MIRROR
#    define SERIAL_USE_MULTI_TRANSACTION
#endif

#ifdef AUDIO_ENABLE
#    define AUDIO_CLICKY
#    define STARTUP_SONG SONG(RICK_ROLL)
//#    define STARTUP_SONG SONG(PLANCK_SOUND)
//#    define STARTUP_SONG SONG(NO_SOUND)
#    define GOODBYE_SONG SONG(SONIC_RING)
#    define DEFAULT_LAYER_SONGS { \
                SONG(QWERTY_SOUND), \
                SONG(COLEMAK_SOUND), \
                SONG(DVORAK_SOUND) \
                }
#    define AUDIO_CLICKY_FREQ_RANDOMNESS 1.5f
#endif  // !AUDIO_ENABLE

#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    define RGBLED_NUM 27
#    define RGBLIGHT_ANIMATIONS
#    define RGBLIGHT_SLEEP
#    define RGBLIGHT_SPLIT
#    define RGBLIGHT_LIMIT_VAL 120
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_KEYPRESSES // reacts to keypresses
//#    define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
//#    define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
//#    define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
//#    define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash. 
#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
#    define DISABLE_RGB_MATRIX_ALPHAS_MODS               // Static dual hue, speed is hue for secondary hue
#    define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN            // Static gradient top to bottom, speed controls how much gradient changes
#    define DISABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT         // Static gradient left to right, speed controls how much gradient changes
//#    define DISABLE_RGB_MATRIX_BREATHING                   // Single hue brightness cycling animation
//#    define DISABLE_RGB_MATRIX_BAND_SAT                  // Single hue band fading saturation scrolling left to right
#    define DISABLE_RGB_MATRIX_BAND_VAL                    // Single hue band fading brightness scrolling left to right
#    define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT           // Single hue 3 blade spinning pinwheel fades saturation
#    define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL           // Single hue 3 blade spinning pinwheel fades brightness
#    define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT             // Single hue spinning spiral fades saturation
#    define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL             // Single hue spinning spiral fades brightness
#    define DISABLE_RGB_MATRIX_CYCLE_ALL                   // Full keyboard solid hue cycling through full gradient
#    define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT            // Full gradient scrolling left to right
#    define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN               // Full gradient scrolling top to bottom
#    define DISABLE_RGB_MATRIX_CYCLE_OUT_IN                // Full gradient scrolling out to in
#    define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL           // Full dual gradients scrolling out to in
#    define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL              // Full gradient spinning pinwheel around center of keyboard
#    define DISABLE_RGB_MATRIX_CYCLE_SPIRAL                // Full gradient spinning spiral around center of keyboard
#    define DISABLE_RGB_MATRIX_DUAL_BEACON                 // Full gradient spinning around center of keyboard
#    define DISABLE_RGB_MATRIX_RAINBOW_BEACON              // Full tighter gradient spinning around center of keyboard
#    define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON      // Full gradent Chevron shapped scrolling left to right
#    define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS           // Full dual gradients spinning two halfs of keyboard
//#    define DISABLE_RGB_MATRIX_RAINDROPS                 // Randomly changes a single key's hue
#    define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS         // Randomly changes a single key's hue and saturation
#    define DISABLE_RGB_MATRIX_HUE_BREATHING               // Hue shifts up a slight ammount at the same time, then shifts back
#    define DISABLE_RGB_MATRIX_HUE_PENDULUM                // Hue shifts up a slight ammount in a wave to the right, then back to the left
#    define DISABLE_RGB_MATRIX_HUE_WAVE                    // Hue shifts up a slight ammount and then back down in a wave to the right
//#    define DISABLE_RGB_MATRIX_TYPING_HEATMAP            // How hot is your WPM!
#    define DISABLE_RGB_MATRIX_DIGITAL_RAIN              // That famous computer simulation
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE       // Pulses keys hit to hue & value then fades value out
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE              // Static single hue, pulses keys hit to shifted hue then fades to current hue
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE         // Hue & value pulse near a single key hit then fades value out
//#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS        // Hue & value pulse the same column and row of a single key hit then fades value out
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS   // Hue & value pulse the same column and row of multiple key hits then fades value out
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS        // Hue & value pulse away on the same column and row of a single key hit then fades value out
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS   // Hue & value pulse away on the same column and row of multiple key hits then fades value out
#    define DISABLE_RGB_MATRIX_SPLASH                      // Full gradient & value pulse away from a single key hit then fades value out
#    define DISABLE_RGB_MATRIX_MULTISPLASH                 // Full gradient & value pulse away from multiple key hits then fades value out
#    define DISABLE_RGB_MATRIX_SOLID_SPLASH                // Hue & value pulse away from a single key hit then fades value out
#    define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH           // Hue & value pulse away from multiple key hits then fades value out
#endif

#ifdef OLED_DRIVER_ENABLE
#    ifdef SPLIT_KEYBOARD
#        define OLED_UPDATE_INTERVAL 60
#    else
#        define OLED_UPDATE_INTERVAL 15
#    endif
//#    define OLED_TIMEOUT 10000
#    define OLED_DISABLE_TIMEOUT // potential (?) fix for oled issues
#    ifdef OLED_FONT_H
#        undef OLED_FONT_H
#    endif
#    define OLED_FONT_H "users/su-stefan/glcdfont.c"
//#    define OLED_FONT_END 255
//#    define OLED_FONT_5X5
//#    define OLED_FONT_AZTECH
//#    define OLED_FONT_BMPLAIN
//#    define OLED_FONT_SUPER_DIGG
//#    define OLED_LOGO_GMK_BAD
//#    define OLED_LOGO_HUE_MANITEE
//#    define OLED_LOGO_CORNE
//#    define OLED_LOGO_GOTHAM
//#    define OLED_LOGO_SCIFI
//#    define OLED_FONT_WIDTH 5
//#    define OLED_FONT_HEIGHT 7
#endif

//#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 150
#define RETRO_TAPPING
#define IGNORE_MOD_TAP_INTERRUPT

/* Disable unused and unneeded features to reduce on firmware size */
#ifdef LOCKING_SUPPORT_ENABLE
#    undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE
#    undef LOCKING_RESYNC_ENABLE
#endif
