// song_player.c

#include "song_player.h"
#include "hardware/pwm.h"
#include "blink.h"
#include "pico/stdlib.h"
#include <stdint.h>

void play_song(Note* melody, int melody_length, LightEvent* lighting, int lighting_length, uint slice_num) {
    int melody_index = 0;
    int lighting_index = 0;

    uint32_t melody_end_time = to_ms_since_boot(get_absolute_time());
    uint32_t lighting_end_time = melody_end_time;

    // Initialize PWM
    pwm_set_enabled(slice_num, false);

    while (melody_index < melody_length || lighting_index < lighting_length) {
        uint32_t current_time = to_ms_since_boot(get_absolute_time());

        // Handle music playback
        if (melody_index < melody_length && current_time >= melody_end_time) {
            uint16_t freq = melody[melody_index].frequency;
            uint16_t duration = melody[melody_index].duration;

            if (freq == 0) {
                // Rest: Disable PWM output
                pwm_set_enabled(slice_num, false);
            } else {
                // Calculate the PWM settings for the desired frequency
                uint32_t clock = 125000000; // System clock frequency in Hz
                float divider = (float)clock / (freq * 4096);
                if (divider < 1.0f) divider = 1.0f;
                pwm_set_clkdiv(slice_num, divider);

                uint16_t wrap = (uint16_t)(clock / (freq * divider)) - 1;
                pwm_set_wrap(slice_num, wrap);

                // Set duty cycle to 50%
                pwm_set_chan_level(slice_num, PWM_CHAN_A, wrap / 2);

                // Enable PWM output
                pwm_set_enabled(slice_num, true);
            }

            // Calculate note end time
            melody_end_time = current_time + duration;

            // Play the note for the specified duration minus the pause
            uint16_t note_play_duration = duration * 0.9; // Play 90% of the note duration
            uint16_t note_pause_duration = duration - note_play_duration; // Pause for the remaining 10%

            // Update melody_end_time to end after the note play duration
            melody_end_time = current_time + note_play_duration;

            // Wait until the note play duration has passed
            while (to_ms_since_boot(get_absolute_time()) < melody_end_time) {
                // Optionally, you can add sleep here
                sleep_ms(1);
            }

            // Turn off PWM to create a brief pause
            pwm_set_enabled(slice_num, false);

            // Wait for the pause duration
            sleep_ms(note_pause_duration);

            // Update melody_end_time to account for the pause
            melody_end_time = current_time + duration;

            melody_index++;
        }

        // Handle lighting effects
        if (lighting_index < lighting_length && current_time >= lighting_end_time) {
            uint8_t pattern = lighting[lighting_index].led_pattern;
            uint16_t duration = lighting[lighting_index].duration;

            // Set the LEDs according to the led_pattern
            for (int j = 0; j < NUM_LEDS; j++) {
                bool led_on = (pattern >> j) & 1;
                gpio_put(LED_PINS[j], led_on);
            }

            lighting_end_time = current_time + duration;
            lighting_index++;
        }

        // Turn off LEDs when the lighting event duration has passed
        if (current_time >= lighting_end_time) {
            for (int j = 0; j < NUM_LEDS; j++) {
                gpio_put(LED_PINS[j], 0);
            }
        }

        // Small delay to prevent excessive CPU usage
        sleep_ms(1);
    }

    // Ensure PWM and LEDs are turned off at the end
    pwm_set_enabled(slice_num, false);
    for (int j = 0; j < NUM_LEDS; j++) {
        gpio_put(LED_PINS[j], 0);
    }
}