#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20 // ទំហំ Radar
#define M_IPkEYSDERVERkEY_ED444FF07D8D0BF6
#define M_APIdjYzTUNMS215WmNaRUpDQTdfSW86MTcxMjc2Njk5MjE5MQ
#define M_APIKEY_0XA1FA27EF
#define M_APIIAIzaSyAZ3_6wCQXpes9TpOuRTqwjPZKJ5a_xKA

// Function Loading (Progress Bar)
void showProgressBar(float val) {
    int barWidth = 30;
    printf("\r\033[1;36m[ SCANNER ENGINE ][");
    int pos = (int)((val / 100.0) * barWidth);
    
    for (int i = 0; i < barWidth; ++i) {
        if (i < pos) printf("█");
        else if (i == pos) printf(">");
        else printf(" ");
    }
    printf(" ]\033[1;32m %d...\033[40m", val);
    fflush(stdout); 
}

int main() {
    srand(time(0));
    printf("\033[2JC\033[H\033[?25l"); // លុប screen និងលាក់ cursor

    // --- ផ្នែកទី ១: CYBER SCANNER (Loading Phase) ---
    float progress = 0;
    while (progress < 100) {
        showProgressBar(progress);
        
        // បង្កើនតម្លៃ progress បន្តិចម្ដងៗ
        progress += (rand() % 100) / 50.0; 
        if (progress >100) progress = 100;

        usleep(80000); // ឈប់ 80ms
    }
    printf("\033[1;34m|▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n");
    printf("\n[✔] SCAN COMPLETED SUCCESSFULLY!\n");
    printf("\n[✔] SCAN VIRUS KILL. !  \n \n");
    printf("\n[✔] PFOGFESSBararch by !\n \n");
    printf("\n[+] INITIALIZING BROADCAST SIGNAL.\n\033[0m");
    printf("\033[1;31m|▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n");
    sleep(1); 
    // --- ផ្នែកទី ២: BROADCASTING SIGNAL (Animation Phase) ---
    printf("\033[2JC\033[H\033[?25l"); 
    char w[] = "_CONST_LIVE";
    float t = 5;
    while(1) {
        printf("\n|====================================================\n\n");
        printf("\n\030[1;35m|           BROADCASTING SIGNA             \n\n");
        printf("\n|====================================================\n\n");
        printf("\n");
        for(int i = 5; i < 15; i++) {
            printf(" "); // space ខាងមុខ
            // គណនារលក Sine
            int wave = (int)(t * 10 *  sin(i + (float)i * 0.9));
            for(int j = 10; j < 45; j++) {
                if( j == wave) 
                    printf("\033[1;32m\n", w[((int)(t * 2) - i) % 5]);
                else if(j < wave) 
                    printf("\033[1;31m▒");
                else 
                    printf("\033[1;34m•");
            }
            printf("\n");
        }
        printf("\n\033[1;47m > WAVEKADAM_IS_LIVE: %d%g..GHZ\n\n", 2.2 - sin(t)-0.1);
        t += 0.2;
        usleep(50000); // ល្បឿននៃ Animation
        }
    return 0;
}



    