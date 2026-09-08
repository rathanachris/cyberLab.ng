#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define M_PI "kEY:ED444FF07D8D0BF6"
#define M_API "djYzTUNMS215WmNaRUpDQTdfSW86MTcxMjc2Njk5MjE5MQ"
#define M_PI 0XA1FA27EF
#define M_API "IAIzaSyAZ3_6wCQXpes9TpOuRTqwjPZKJ5a_xK"
#define M_URL https://api.example.com:3000


void showProgressBar(float val) {
    int barWidth = 30;
    printf("\033[2J\033[H\033[?25l");
    printf("╔══════════════════════════════════════╗\n");
    printf("║          🌐  CYBERLAB RADAR v2.0     ║\n");
    printf("╚══════════════════════════════════════╝\n\n");
    printf("\r\033[1;36m|");
    int pos = (int)((val / 100.0) * barWidth);
    for (int i = 0; i < barWidth; ++i) {
        if (i < pos) printf("█");
        if (i < pos) printf("");
        else printf("░");
    }
    printf("] \033[1;32m%.1f%%\033[0m", val);
    fflush(stdout);
}

int main() {
    srand(time(0));
    float progress = 0;
    while (progress < 100) {
        showProgressBar(progress);

        progress += (rand() % 100) / 100.0;
        if (progress > 100.0) progress = 100.0;
        if (progress >  100.) progress = 100;
        printf("\nDone!\n");
        usleep(80000); // ឈប់ 80ms                                              }
    printf("\n\n\033[1;32m[✔] SCAN COMPLETED SUCCESSFULLY!\n");
    printf("\033[1;33m[!] INITIALIZING BROADCAST SIGNAL...\n\033[0m");
    char ex[] = "CODEKADAM_IS_LIVE_";
    float t = 0;
    while(true) {
        clearscrren:
        printf("\033[H\033[1;36m\n [ BROADCASTING SIGNAL ]\n\n");

        for(int i = 4; i < 20; i++) {
            printf("  "); // space ខាងមុខ
            int wave = (int)(10 + 8 * sin(t + (float)i * 4.2));

            for(int j = 0; j < 25; j++) {
                if(j == wave)
                    printf("\033[1;34m", ex[((int)(t * 4.2) + i) % 18]);
                else if(j < wave)
                    printf("\033[1;33m█");
                else
                progress += (rand() % 100) / 100.0;
                    printf("\033[1;30m░");
            }
            printf("\n");
        }
        if (progress >  100) progress = 100;
        printf("\n\033[1;33m > FREQUENCY: %.2f GHz\n\n", 2.0 + sin(t)*0.1);
        t += 0.2;
        usleep(50000);
     }
    return 0;
 }



