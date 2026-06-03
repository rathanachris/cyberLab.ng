#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <math.h>

int main() {
    int temp = 1000;

    srand(time(NULL));

    // clear screen + hide cursor
    printf("\033[2J\033[?25l");

    for (int scan = 0; scan < 15; scan++) {
        printf("\n====================================]\n");
        printf("\033[H");
        printf("\033[1;31m.SYSTEM MEMORY SCANNER ]\n\n");
        printf("\n=====================================]\n");
        for (int y = 0; y < 13; y++) {
            printf("\n%d");
            for (int x = 0; x < 2; x++) {
                if (y == scan && x == 0) {
                    printf("\033[1;32m[FF 00 FF] ");
                } 
                else if (y == scan) {
                    printf("\033[1;37m[%02X %02X %02X] ",
                           rand() % 255,
                           rand() % 255,
                           rand() % 255);
                } 
                else {
                    printf("\033[1;30m[%02X %02X %02X] ",
                           rand() % 255,
                           rand() % 255,
                           rand() % 255);
                }
            }

            printf("\n");
        }
        printf("\n\033[1;36m> ANALYZING HEX SECTOR: %d%%\n",
               (scan * 100) / 14);
        // temp change
        temp += rand() % 150;
        if (temp > 40000) temp = 10000;
        usleep(1000000); // 0.1 sec
    }
    printf("\n ========================================\n");
    printf("\n\033[1;32m[ MAWARE LOCK NEUTRALIZED ]\n");
    printf("\n ========================================\n");
    // show cursor again
    printf("\033[?25h");

    return 0;
}