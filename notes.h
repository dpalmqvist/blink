#ifndef NOTES_H
#define NOTES_H

#include <stdint.h>
// Define note frequencies in Hertz
#define NOTE_PAUSE    0
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047

// Define note durations in milliseconds
#define WHOLE     1600
#define HALF      (WHOLE / 2)
#define QUARTER   (WHOLE / 4)
#define EIGHTH    (WHOLE / 8)
#define SIXTEENTH (WHOLE / 16)

// Structure to hold a musical note
typedef struct {
    uint16_t frequency; // Frequency of the note
    uint16_t duration;  // Duration of the note
} Note;

// Structure to hold a lighting event
typedef struct {
    uint8_t led_pattern; // 8-bit pattern for LEDs
    uint16_t duration;   // Duration of the lighting pattern
} LightEvent;

#endif