#include "notes.h"

// Full "Bjällerklang" ("Jingle Bells") melody
Note melody_bjallerklang[] = {
    // Intro
    // Bar 1
    {NOTE_E4, QUARTER},
    {NOTE_E4, QUARTER},
    {NOTE_E4, HALF},

    // Bar 2
    {NOTE_E4, QUARTER},
    {NOTE_E4, QUARTER},
    {NOTE_E4, HALF},

    // Bar 3
    {NOTE_E4, QUARTER},
    {NOTE_G4, QUARTER},
    {NOTE_C4, QUARTER},
    {NOTE_D4, QUARTER},

    // Bar 4
    {NOTE_E4, WHOLE},

    // Bar 5
    {NOTE_F4, QUARTER},
    {NOTE_F4, QUARTER},
    {NOTE_F4, QUARTER},
    {NOTE_F4, EIGHTH},
    {NOTE_F4, EIGHTH},

    // Bar 6
    {NOTE_F4, QUARTER},
    {NOTE_E4, QUARTER},
    {NOTE_E4, QUARTER},
    {NOTE_E4, EIGHTH},
    {NOTE_E4, EIGHTH},

    // Bar 7
    {NOTE_E4, QUARTER},
    {NOTE_D4, QUARTER},
    {NOTE_D4, QUARTER},
    {NOTE_E4, QUARTER},

    // Bar 8
    {NOTE_D4, HALF},
    {NOTE_G4, HALF},

    // Chorus
    // Bar 9
    {NOTE_E4, QUARTER},
    {NOTE_E4, QUARTER},
    {NOTE_E4, HALF},

    // Bar 10
    {NOTE_E4, QUARTER},
    {NOTE_E4, QUARTER},
    {NOTE_E4, HALF},

    // Bar 11
    {NOTE_E4, QUARTER},
    {NOTE_G4, QUARTER},
    {NOTE_C4, QUARTER},
    {NOTE_D4, QUARTER},

    // Bar 12
    {NOTE_E4, WHOLE},

    // Bar 13
    {NOTE_F4, QUARTER},
    {NOTE_F4, QUARTER},
    {NOTE_F4, QUARTER},
    {NOTE_F4, EIGHTH},
    {NOTE_F4, EIGHTH},

    // Bar 14
    {NOTE_F4, QUARTER},
    {NOTE_E4, QUARTER},
    {NOTE_E4, QUARTER},
    {NOTE_E4, EIGHTH},
    {NOTE_E4, EIGHTH},

    // Bar 15
    {NOTE_G4, QUARTER},
    {NOTE_G4, QUARTER},
    {NOTE_F4, QUARTER},
    {NOTE_D4, QUARTER},

    // Bar 16
    {NOTE_C4, WHOLE},
};

int length_bjallerklang = sizeof(melody_bjallerklang) / sizeof(melody_bjallerklang[0]);

// Full lighting effects for "Bjällerklang"
LightEvent lighting_bjallerklang[] = {
    // Intro
    // Bar 1
    {0b10000001, QUARTER}, // LED 0
    {0b01000010, QUARTER}, // LED 1
    {0b10000001, QUARTER}, // LED 2
    {0b01000010, QUARTER}, // LED 2

    // Bar 2
    {0b10011001, QUARTER}, // LED 0
    {0b01100110, QUARTER}, // LED 1
    {0b10011001, QUARTER}, // LED 0
    {0b01100110, QUARTER}, // LED 1

    // Bar 3
    {0b10000001, QUARTER}, // LED 0
    {0b01000010, QUARTER}, // LED 1
    {0b10000001, QUARTER}, // LED 2
    {0b01000010, QUARTER}, // LED 2

    // Bar 4
    {0b10000001, QUARTER}, // LED 0
    {0b01000010, QUARTER}, // LED 1
    {0b00100100, QUARTER}, // LED 2
    {0b00011000, QUARTER}, // LED 2

    // Bar 5
    {0b00000001, QUARTER}, // LED 0
    {0b00000010, QUARTER}, // LED 1
    {0b00000100, QUARTER}, // LED 2
    {0b00001000, QUARTER}, // LED 2

    // Bar 6
    {0b10000001, QUARTER}, // LED 0
    {0b01000010, QUARTER}, // LED 1
    {0b00100100, QUARTER}, // LED 2
    {0b00011000, QUARTER}, // LED 2

    // Bar 7
    {0b10000000, QUARTER}, // LED 5
    {0b01000000, QUARTER}, // LED 5
    {0b00100000, QUARTER}, // LED 4
    {0b00001000, QUARTER}, // LED 3

    // Bar 8
    {0b00011000, QUARTER}, // LED 2
    {0b00100100, QUARTER}, // LED 2
    {0b01000010, QUARTER}, // LED 1
    {0b10000001, QUARTER}, // LED 0

    // Chorus
    // Bar 9
    {0b11111111, QUARTER}, // All LEDs on
    {0b11111111, QUARTER}, // All LEDs on
    {0b11111111, HALF},    // All LEDs on

    // Bar 10
    {0b11110000, QUARTER}, // LEDs 4-7 on
    {0b00001111, QUARTER}, // LEDs 0-3 on
    {0b11111111, HALF},    // All LEDs on

    // Bar 11
    {0b10101010, QUARTER}, // Alternate LEDs
    {0b01010101, QUARTER}, // Alternate LEDs
    {0b11111111, QUARTER}, // All LEDs on
    {0b00000000, QUARTER}, // All LEDs off

    // Bar 12
    {0b11111111, WHOLE},   // All LEDs on

    // Bar 13
    {0b10000001, QUARTER}, // LEDs 0 and 7
    {0b01000010, QUARTER}, // LEDs 1 and 6
    {0b00100100, QUARTER}, // LEDs 2 and 5
    {0b00011000, EIGHTH},  // LEDs 3 and 4
    {0b00011000, EIGHTH},  // LEDs 3 and 4

    // Bar 14
    {0b00001100, QUARTER}, // LEDs 2 and 3
    {0b00000110, QUARTER}, // LEDs 1 and 2
    {0b00000110, QUARTER}, // LEDs 1 and 2
    {0b00000110, EIGHTH},  // LEDs 1 and 2
    {0b00000110, EIGHTH},  // LEDs 1 and 2

    // Bar 15
    {0b00110000, QUARTER}, // LEDs 4 and 5
    {0b00110000, QUARTER}, // LEDs 4 and 5
    {0b00011000, QUARTER}, // LEDs 3 and 4
    {0b00001100, QUARTER}, // LEDs 2 and 3

    // Bar 16
    {0b00000110, WHOLE},   // LEDs 1 and 2 on
};

int lighting_length_bjallerklang = sizeof(lighting_bjallerklang) / sizeof(lighting_bjallerklang[0]);