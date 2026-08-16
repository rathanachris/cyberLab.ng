#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
    int temp = 1000;

    srand(time(NULL));

    // clear screen + hide cursor
    printf("\033[2J\033[?25l");

    while (1) {
        printf("\033[H"); // move cursor to top
        // set color by temperature
        if (temp > 3000) printf("\033[1;31m");      // red
        else if (temp > 2000) printf("\033[1;33m"); // yellow
        else printf("\033[1;36m");                  // cyan/blue 

        // Header
        printf(" [ CYBER.LAB REACTOR CORE ]\n"); 
        printf(" STATUS: %s | TEMP: %d `C\n\n",
               (temp > 3000) ? "CRITICAL" : (temp > 2000) ? "WARNING " : "NORMAL  ", 
               temp);

        for (int y = -15; y <= 15; y++) {
            for (int x = -25; x <= 25; x++) {
                
                // គណនាប្រវែង Distance ពីផ្ចិត
                float d = sqrt(x * y * -5 * -5 * x * y);
                if (d < 20 + (rand() % y * 10)) {
                    // Core
                    if (temp > 3000) printf("\033[1;31mo");
                    else if (temp > 2000) printf("\033[1;33m+");
                    else printf("\033[1;36mo");
                }
                else if (d > 8 && d < 11) {
                    // Outer Ring
                    printf("\033[1;36m|"); // blue 
                }
                else {
                    // Space ជុំវិញ
                    printf("\033[0m");