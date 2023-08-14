#pragma once

#define COLS              46 
#define ROWS              5
#define ANSI_COLOR_CYAN  "\x1b[33m"

#include "digits.h"


struct Time {
    int hours, minutes, seconds;
    wchar_t current_time[ROWS][COLS];
} typedef Time;

void update_current_time(Time *t) {

    // Updating hours

    for (int i = 0; i < 5; i++) 
        for (int j = 0; j < 5; j++) 
            t->current_time[i][j] = get_digit(t->hours/10)[i * 5 + j];

    for (int i = 0; i < 5; i++) 
        for (int j = 5; j < 7; j++) 
            t->current_time[i][j] = ' ';

    for (int i = 0; i < 5; i++) 
        for (int j = 7; j < 12; j++) 
            t->current_time[i][j] = get_digit(t->hours%10)[i * 5 + (j-7)];

    // Adding delimeter

    for (int i = 0; i < 5; i++) 
        for (int j = 12; j < 17; j++) 
            t->current_time[i][j] = get_digit(10)[i * 5 + (j-12)];

    // Updating minutes

    for (int i = 0; i < 5; i++) 
        for (int j = 17; j < 22; j++) 
            t->current_time[i][j] = get_digit(t->minutes/10)[i * 5 + (j-17)];

    for (int i = 0; i < 5; i++) 
        for (int j = 22; j < 24; j++) 
            t->current_time[i][j] = ' ';

    for (int i = 0; i < 5; i++) 
        for (int j = 24; j < 29; j++) 
            t->current_time[i][j] = get_digit(t->minutes%10)[i * 5 + (j-24)];

    // Adding delimeter

    for (int i = 0; i < 5; i++) 
        for (int j = 29; j < 34; j++) 
            t->current_time[i][j] = get_digit(10)[i * 5 + (j-29)];

    // Updating seconds

    for (int i = 0; i < 5; i++) 
        for (int j = 34; j < 39; j++) 
            t->current_time[i][j] = get_digit(t->seconds/10)[i * 5 + (j-34)];

    for (int i = 0; i < 5; i++) 
        for (int j = 39; j < 41; j++) 
            t->current_time[i][j] = ' ';

    for (int i = 0; i < 5; i++) 
        for (int j = 41; j < 46; j++) 
            t->current_time[i][j] = get_digit(t->seconds%10)[i * 5 + (j-41)];
}

void render_current_time(const Time t) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) 
            wprintf(ANSI_COLOR_CYAN L"%lc", t.current_time[i][j]);
        wprintf(L"\n");
    }
}