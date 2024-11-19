#include "notes.h"

// Full "Hej tomtegubbar" melody
Note melody_hej_tomtegubbar[] = {
    // Bar 1
    {NOTE_C5, QUARTER},
    {NOTE_G4, EIGHTH + SIXTEENTH},
    {NOTE_A4, SIXTEENTH},
    {NOTE_G4, EIGHTH + SIXTEENTH},
    {NOTE_F4, SIXTEENTH},

    // Bar 2
    {NOTE_E4, EIGHTH + SIXTEENTH},
    {NOTE_F4, SIXTEENTH},
    {NOTE_G4, QUARTER},
    {NOTE_C5, EIGHTH + SIXTEENTH},
    {NOTE_C5, SIXTEENTH},

    // Bar 3
    {NOTE_B4, EIGHTH + SIXTEENTH},
    {NOTE_C5, SIXTEENTH},
    {NOTE_D5, QUARTER},
    {NOTE_C5, EIGHTH + SIXTEENTH},
    {NOTE_B4, SIXTEENTH},

    // Bar 4
    {NOTE_C5, QUARTER},
    {NOTE_C5, QUARTER},
    {NOTE_PAUSE, SIXTEENTH},
    {NOTE_B4, SIXTEENTH},

    // Bar 5
    {NOTE_C5, EIGHTH + SIXTEENTH},
    {NOTE_E5, SIXTEENTH},
    {NOTE_D5, QUARTER + EIGHTH},
    {NOTE_B4, SIXTEENTH},

    // Bar 6
    {NOTE_C5, EIGHTH + SIXTEENTH},
    {NOTE_E5, SIXTEENTH},
    {NOTE_D5, QUARTER + EIGHTH},
    {NOTE_B4, SIXTEENTH},

    // Bar 7
    {NOTE_C5, EIGHTH + SIXTEENTH},
    {NOTE_E5, SIXTEENTH},
    {NOTE_D5, QUARTER},
    {NOTE_D5, EIGHTH + SIXTEENTH},
    {NOTE_C4, SIXTEENTH},

    // Bar 8
    {NOTE_B4, EIGHTH + SIXTEENTH},
    {NOTE_A4, SIXTEENTH},
    {NOTE_G4, QUARTER},
    {NOTE_B4, QUARTER},

    // Bar 9
    {NOTE_C5, QUARTER},
    {NOTE_G4, EIGHTH + SIXTEENTH},
    {NOTE_A4, SIXTEENTH},
    {NOTE_G4, EIGHTH + SIXTEENTH},
    {NOTE_F4, SIXTEENTH},

    // Bar 10
    {NOTE_E4, EIGHTH + SIXTEENTH},
    {NOTE_F4, SIXTEENTH},
    {NOTE_G4, QUARTER},
    {NOTE_C5, EIGHTH + SIXTEENTH},
    {NOTE_C5, SIXTEENTH},

    // Bar 11
    {NOTE_B4, EIGHTH + SIXTEENTH},
    {NOTE_C5, SIXTEENTH},
    {NOTE_D5, QUARTER},
    {NOTE_C5, EIGHTH + SIXTEENTH},
    {NOTE_B4, SIXTEENTH},

    // Bar 12
    {NOTE_C4, QUARTER},
    {NOTE_C5, QUARTER},
    {NOTE_D5, QUARTER},
};

int length_hej_tomtegubbar = sizeof(melody_hej_tomtegubbar) / sizeof(melody_hej_tomtegubbar[0]);

// Lighting effects for "Hej tomtegubbar"
LightEvent lighting_hej_tomtegubbar[] = {
    // Bar 1
    {0b10000001, QUARTER},            // LEDs 0 and 7 on
    {0b01000010, EIGHTH + SIXTEENTH}, // LEDs 1 and 6 on
    {0b00100100, SIXTEENTH},          // LEDs 2 and 5 on
    {0b00011000, EIGHTH + SIXTEENTH}, // LEDs 3 and 4 on
    {0b00011000, SIXTEENTH},          // LEDs 3 and 4 on

    // Bar 2
    {0b00001100, EIGHTH + SIXTEENTH}, // LEDs 2 and 3 on
    {0b00001100, SIXTEENTH},          // LEDs 2 and 3 on
    {0b00000110, QUARTER},            // LEDs 1 and 2 on
    {0b00000011, EIGHTH + SIXTEENTH}, // LEDs 0 and 1 on
    {0b00000011, SIXTEENTH},          // LEDs 0 and 1 on

    // Bar 3
    {0b00000101, EIGHTH + SIXTEENTH}, // LEDs 0 and 2 on
    {0b00001010, SIXTEENTH},          // LEDs 1 and 3 on
    {0b00010100, QUARTER},            // LEDs 2 and 4 on
    {0b00101000, EIGHTH + SIXTEENTH}, // LEDs 3 and 5 on
    {0b01010000, SIXTEENTH},          // LEDs 4 and 6 on

    // Bar 4
    {0b10000000, QUARTER},            // LED 7 on
    {0b01000000, QUARTER},            // LED 6 on
    {0b00100000, SIXTEENTH},          // LED 5 on
    {0b00010000, SIXTEENTH},          // LED 4 on

    // Bar 5
    {0b00001000, EIGHTH + SIXTEENTH}, // LED 3 on
    {0b00000100, SIXTEENTH},          // LED 2 on
    {0b00000010, QUARTER + EIGHTH},   // LED 1 on
    {0b00000001, SIXTEENTH},          // LED 0 on

    // Bar 6
    {0b10000001, EIGHTH + SIXTEENTH}, // LEDs 0 and 7 on
    {0b01000010, SIXTEENTH},          // LEDs 1 and 6 on
    {0b00100100, QUARTER + EIGHTH},   // LEDs 2 and 5 on
    {0b00011000, SIXTEENTH},          // LEDs 3 and 4 on

    // Bar 7
    {0b11111111, EIGHTH + SIXTEENTH}, // All LEDs on
    {0b00000000, SIXTEENTH},          // All LEDs off
    {0b11111111, QUARTER},            // All LEDs on
    {0b00000000, EIGHTH + SIXTEENTH}, // All LEDs off
    {0b11111111, SIXTEENTH},          // All LEDs on

    // Bar 8
    {0b00011000, EIGHTH + SIXTEENTH}, // LEDs 3 and 4 on
    {0b00100100, SIXTEENTH},          // LEDs 2 and 5 on
    {0b01000010, QUARTER},            // LEDs 1 and 6 on
    {0b10000001, QUARTER},            // LEDs 0 and 7 on

    // Bar 9
    {0b11110000, QUARTER},            // LEDs 4-7 on
    {0b00001111, EIGHTH + SIXTEENTH}, // LEDs 0-3 on
    {0b11110000, SIXTEENTH},          // LEDs 4-7 on
    {0b00001111, EIGHTH + SIXTEENTH}, // LEDs 0-3 on
    {0b11110000, SIXTEENTH},          // LEDs 4-7 on

    // Bar 10
    {0b00001111, EIGHTH + SIXTEENTH}, // LEDs 0-3 on
    {0b00001111, SIXTEENTH},          // LEDs 0-3 on
    {0b11110000, QUARTER},            // LEDs 4-7 on
    {0b11111111, EIGHTH + SIXTEENTH}, // All LEDs on
    {0b00000000, SIXTEENTH},          // All LEDs off

    // Bar 11
    {0b00111100, EIGHTH + SIXTEENTH}, // LEDs 2-5 on
    {0b00111100, SIXTEENTH},          // LEDs 2-5 on
    {0b00111100, QUARTER},            // LEDs 2-5 on
    {0b00111100, EIGHTH + SIXTEENTH}, // LEDs 2-5 on
    {0b00111100, SIXTEENTH},          // LEDs 2-5 on

    // Bar 12
    {0b10000001, QUARTER},            // LEDs 0 and 7 on
    {0b01000010, QUARTER},            // LEDs 1 and 6 on
    {0b00100100, QUARTER},            // LEDs 2 and 5 on
};

int lighting_length_hej_tomtegubbar = sizeof(lighting_hej_tomtegubbar) / sizeof(lighting_hej_tomtegubbar[0]);