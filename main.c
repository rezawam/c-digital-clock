#include <stdio.h>
#include <time.h>
#include <locale.h>

#include "Time.h"

void delay(int sec)
{
    int ms = 1000 * sec;
    clock_t start_time = clock();
    while (clock() < start_time + ms);
}

int main() {
    setlocale(LC_CTYPE, "");

    Time t;
    while(1) {
        #ifdef _WIN32
        #include <conio.h>
        #else
        #include <stdio.h>
        #define clrscr() printf("\e[1;1H\e[2J")
        #endif

        clrscr();
        time_t now = time(NULL);
        struct tm *tm_struct = localtime(&now);
        t.hours = tm_struct->tm_hour;
        t.minutes = tm_struct->tm_min;
        t.seconds = tm_struct->tm_sec;

        update_current_time(&t);
        render_current_time(t);
        delay(1);
    }
    return 0;
}