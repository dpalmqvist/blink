#include "notes.h"

// Full "Stilla natt" ("Silent Night") melody
Note melody_stilla_natt[] = {
    // Bar 1
    {NOTE_G4, QUARTER + EIGHTH},
    {NOTE_A4, EIGHTH},
    {NOTE_G4, QUARTER},

    // Bar 2
    {NOTE_E4, HALF + QUARTER},

    // Bar 3
    {NOTE_G4, QUARTER + EIGHTH},
    {NOTE_A4, EIGHTH},
    {NOTE_G4, QUARTER},

    // Bar 4
    {NOTE_E4, HALF + QUARTER},

    // Bar 5
    {NOTE_D5, HALF},
    {NOTE_D5, QUARTER},

    // Bar 6
    {NOTE_B4, HALF + QUARTER},

    // Bar 7
    {NOTE_C5, HALF},
    {NOTE_C5, QUARTER},

    // Bar 8
    {NOTE_G4, HALF + QUARTER},

    // Bar 9
    {NOTE_A4, HALF},
    {NOTE_A4, QUARTER},

    // Bar 10
    {NOTE_C5, QUARTER + EIGHTH},
    {NOTE_B4, EIGHTH},
    {NOTE_A4, QUARTER},

    // Bar 11
    {NOTE_G4, QUARTER + EIGHTH},
    {NOTE_A4, EIGHTH},
    {NOTE_G4, QUARTER},

    // Bar 12
    {NOTE_E4, HALF + QUARTER},

    // Bar 13
    {NOTE_A4, HALF},
    {NOTE_A4, QUARTER},

    // Bar 14
    {NOTE_C5, QUARTER + EIGHTH},
    {NOTE_B4, EIGHTH},
    {NOTE_A4, QUARTER},

    // Bar 15
    {NOTE_G4, QUARTER + EIGHTH},
    {NOTE_A4, EIGHTH},
    {NOTE_G4, QUARTER},

    // Bar 16
    {NOTE_E4, HALF + QUARTER},

    // Bar 17
    {NOTE_D5, HALF},
    {NOTE_D5, QUARTER},

    // Bar 18
    {NOTE_F5, QUARTER + EIGHTH},
    {NOTE_D4, EIGHTH},
    {NOTE_B4, QUARTER},

    // Bar 19
    {NOTE_C5, HALF + QUARTER},

    // Bar 20
    {NOTE_E5, HALF + QUARTER},

    // Bar 21
    {NOTE_C5, QUARTER},
    {NOTE_G4, QUARTER},
    {NOTE_E4, QUARTER},

    // Bar 22
    {NOTE_G4, QUARTER + EIGHTH},
    {NOTE_F4, EIGHTH},
    {NOTE_D4, QUARTER},

    // Bar 23
    {NOTE_C4, HALF + QUARTER},
};

int length_stilla_natt = sizeof(melody_stilla_natt) / sizeof(melody_stilla_natt[0]);

// Lighting effects for "Stilla natt" (subtle and quiet)
LightEvent lighting_stilla_natt[] = {
    // Bar 1
    {0b00010000, QUARTER + EIGHTH}, // LED 4 on
    {0b00010000, EIGHTH},           // LED 4 remains on
    {0b00010000, QUARTER},          // LED 4 remains on

    // Bar 2
    {0b00001000, HALF + QUARTER},   // LED 3 on

    // Bar 3
    {0b00010000, QUARTER + EIGHTH}, // LED 4 on
    {0b00010000, EIGHTH},           // LED 4 remains on
    {0b00010000, QUARTER},          // LED 4 remains on

    // Bar 4
    {0b00001000, HALF + QUARTER},   // LED 3 on

    // Bar 5
    {0b00010000, HALF},             // LED 4 on
    {0b00010000, QUARTER},          // LED 4 remains on

    // Bar 6
    {0b00001000, HALF + QUARTER},   // LED 3 on

    // Bar 7
    {0b00010000, HALF},             // LED 4 on
    {0b00010000, QUARTER},          // LED 4 remains on

    // Bar 8
    {0b00001000, HALF + QUARTER},   // LED 3 on

    // Bar 9
    {0b00010000, HALF},             // LED 4 on
    {0b00010000, QUARTER},          // LED 4 remains on

    // Bar 10
    {0b00001000, QUARTER + EIGHTH}, // LED 3 on
    {0b00001000, EIGHTH},           // LED 3 remains on
    {0b00001000, QUARTER},          // LED 3 remains on

    // Bar 11
    {0b00010000, QUARTER + EIGHTH}, // LED 4 on
    {0b00010000, EIGHTH},           // LED 4 remains on
    {0b00010000, QUARTER},          // LED 4 remains on

    // Bar 12
    {0b00001000, HALF + QUARTER},   // LED 3 on

    // Bar 13
    {0b00010000, HALF},             // LED 4 on
    {0b00010000, QUARTER},          // LED 4 remains on

    // Bar 14
    {0b00001000, QUARTER + EIGHTH}, // LED 3 on
    {0b00001000, EIGHTH},           // LED 3 remains on
    {0b00001000, QUARTER},          // LED 3 remains on

    // Bar 15
    {0b00010000, QUARTER + EIGHTH}, // LED 4 on
    {0b00010000, EIGHTH},           // LED 4 remains on
    {0b00010000, QUARTER},          // LED 4 remains on

    // Bar 16
    {0b00001000, HALF + QUARTER},   // LED 3 on

    // Bar 17
    {0b00010000, HALF},             // LED 4 on
    {0b00010000, QUARTER},          // LED 4 remains on

    // Bar 18
    {0b00001000, QUARTER + EIGHTH}, // LED 3 on
    {0b00001000, EIGHTH},           // LED 3 remains on
    {0b00001000, QUARTER},          // LED 3 remains on

    // Bar 19
    {0b00010000, HALF + QUARTER},   // LED 4 on

    // Bar 20
    {0b00001000, HALF + QUARTER},   // LED 3 on

    // Bar 21
    {0b00010000, QUARTER},          // LED 4 on
    {0b00010000, QUARTER},          // LED 4 remains on
    {0b00010000, QUARTER},          // LED 4 remains on

    // Bar 22
    {0b00001000, QUARTER + EIGHTH}, // LED 3 on
    {0b00001000, EIGHTH},           // LED 3 remains on
    {0b00001000, QUARTER},          // LED 3 remains on

    // Bar 23
    {0b00010000, HALF + QUARTER},   // LED 4 on
};

int lighting_length_stilla_natt = sizeof(lighting_stilla_natt) / sizeof(lighting_stilla_natt[0]);