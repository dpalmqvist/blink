#ifndef SONG_PLAYER_H
#define SONG_PLAYER_H
#include "notes.h"
#include "pico/stdlib.h"

void play_song(Note* melody, int melody_length, LightEvent* lighting, int lighting_length, uint slice_num);
#endif