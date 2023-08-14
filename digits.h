#pragma once
#define CELL 0x25A0

#include "stdio.h"
#include <wchar.h>

wchar_t delimeter[5][5] = {
                        {' ', ' ', ' ',  ' ', ' '},
                        {' ', ' ', CELL, ' ', ' '},
                        {' ', ' ', ' ',  ' ', ' '},
                        {' ', ' ', CELL, ' ', ' '},
                        {' ', ' ', ' ',  ' ', ' '},
                        };

wchar_t number_one[5][5] = {
                        {' ', ' ', CELL, ' ', ' '},
                        {' ', ' ', CELL, ' ', ' '},
                        {' ', ' ', CELL, ' ', ' '},
                        {' ', ' ', CELL, ' ', ' '},
                        {' ', ' ', CELL, ' ', ' '}
                        };

wchar_t number_two[5][5] = {
                        {CELL, ' ', CELL, ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL},
                        {CELL, ' ', ' ',  ' ', ' ' },
                        {CELL, ' ', CELL, ' ', CELL}
                        };


wchar_t number_three[5][5] = {
                        {CELL, ' ', CELL, ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL}
                        };

wchar_t number_four[5][5] = {
                        {CELL, ' ', ' ',  ' ', CELL},
                        {CELL, ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL}
                        };


wchar_t number_five[5][5] = {
                        {CELL, ' ', CELL, ' ', CELL},
                        {CELL, ' ', ' ',  ' ', ' ' },
                        {CELL, ' ', CELL, ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL}
                        };

wchar_t number_six[5][5] = {
                        {CELL, ' ', CELL, ' ', CELL},
                        {CELL, ' ', ' ',  ' ', ' ' },
                        {CELL, ' ', CELL, ' ', CELL},
                        {CELL, ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL}
                        };

wchar_t number_seven[5][5] = {
                        {CELL, ' ', CELL, ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL}
                        };

wchar_t number_eight[5][5] = {
                        {CELL, ' ', CELL, ' ', CELL},
                        {CELL, ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL},
                        {CELL, ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL}
                        };


wchar_t number_nine[5][5] = {
                        {CELL, ' ', CELL, ' ', CELL},
                        {CELL, ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL},
                        {' ',  ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL}
                        };

wchar_t number_zero[5][5] = {
                        {CELL, ' ', CELL, ' ', CELL},
                        {CELL, ' ', ' ',  ' ', CELL},
                        {CELL, ' ', ' ',  ' ', CELL},
                        {CELL, ' ', ' ',  ' ', CELL},
                        {CELL, ' ', CELL, ' ', CELL}
                        };


wchar_t* Numbers[] = {
    (wchar_t*)number_zero,
    (wchar_t*)number_one,
    (wchar_t*)number_two,
    (wchar_t*)number_three,
    (wchar_t*)number_four,
    (wchar_t*)number_five,
    (wchar_t*)number_six,
    (wchar_t*)number_seven,
    (wchar_t*)number_eight,
    (wchar_t*)number_nine, 
    (wchar_t*) delimeter
};

wchar_t* get_digit(int number) {
    return Numbers[number];
}

void print_digit(int number) {
    wchar_t* digit = Numbers[number];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            wprintf(L"%lc", digit[i * 5 + j]);
        }
        wprintf(L"\n");
    }
}