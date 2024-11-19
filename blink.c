#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "notes.h"
#include "song_player.h"
#include "bjallerklang.h"
#include "stilla_natt.h"
#include "hej_tomtegubbar.h"
#include "blink.h"

const uint LED_PINS[NUM_LEDS] = {2, 3, 4, 5, 6, 7, 8, 9};

int main() {
    // Initialize GPIO and PWM for the piezo speaker
    gpio_set_function(PIEZO_PIN, GPIO_FUNC_PWM);
    uint slice_num = pwm_gpio_to_slice_num(PIEZO_PIN);

    // Initialize the LED GPIO pins
    for (int i = 0; i < NUM_LEDS; i++) {
        gpio_init(LED_PINS[i]);
        gpio_set_dir(LED_PINS[i], GPIO_OUT);
        gpio_put(LED_PINS[i], 0); // Ensure all LEDs are off initially
    }

    // Define your melodies and lighting patterns for each song
    // For brevity, I'll define a short example for "Bjällerklang"

    // Repeat the same for other songs
    // Define melody_hej_tomtegubbar and lighting_hej_tomtegubbar
    // Define melody_stilla_natt and lighting_stilla_natt

    while (true) {
        // Play "Bjällerklang"
        play_song(melody_bjallerklang, length_bjallerklang, lighting_bjallerklang, lighting_length_bjallerklang, slice_num);

        // Pause before next song
        sleep_ms(1000);

        // Play "Hej tomtegubbar"
        play_song(melody_hej_tomtegubbar, length_hej_tomtegubbar, lighting_hej_tomtegubbar, lighting_length_hej_tomtegubbar, slice_num);

        // Pause before next song
        sleep_ms(1000);

        // Play "Stilla natt"
        play_song(melody_stilla_natt, length_stilla_natt, lighting_stilla_natt, lighting_length_stilla_natt, slice_num);

        // Pause before repeating the songs
        sleep_ms(2000);
    }

    return 0;
}