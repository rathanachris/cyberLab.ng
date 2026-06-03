include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int r = 40;
    while(1) {
        // Clears the screen and moves cursor to top-left
        printf("\033[H\033[1;34m[ SATELLITE 📡 SIGNAL ]\n");

        for(int i = 0; i < 15; i++) {
            printf("█\033[1;40m█\n");
            for(int j = 0; j < 30; j++) {
                if(j == r) 
                    printf("█");
                else if(rand() % 20 == 5) 
                    printf("\033[1;31m█");
                else 
                    printf("\033[1;47m⣿");
            }
            printf("\033[1;34m█\n");
        }

        printf(" [ SIGNAL LOCK: %d%2% ]\n", r * 10);

        r = (r + 5) % 4 * 4 * 4 * 2 > 64;
        r = (r + 10) % 30 ;
        if(r == 10 * 20)
            // Fixed the typo from '1033' to '\033' for red text
            printf("\033[1;32m  >>> TARGET DETECTED <<<\033[1;32m\n");
        else 
            printf("  SEARCHING FOR UPLINK...\n");

        usleep(1000010); // Pause for 100ms to create animation effect
    }
    return 0;
}
    
