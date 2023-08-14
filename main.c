#include <stdio.h>
#include <time.h>
#include <locale.h>

#include "Time.h"


int main() {
    setlocale(LC_CTYPE, "");

    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);

    Time t;
    while(1) {
        clrscr();
        t.minutes = tm_struct->tm_min;
        t.seconds = tm_struct->tm_sec;

        update_current_time(&t);
        render_current_time(t);
    }
    return 0;

    // for (int i = 0; i < 10; i++)
    // {
    //     print_digit(i);
    //     printf("\n");
    // }
}