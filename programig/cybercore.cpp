#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    int p = 0;
    
    // សម្អាតអេក្រង់ទាំងស្រុងមុនពេលចាប់ផ្តើម
    printf("\033[2J"); 
    
    while(p <= 100) {
        // \033[H ផ្លាស់ទីទស្សន៍ទ្រនិចទៅខាងលើឆ្វេងបង្អស់
             printf("\033[H\033[1;36m\n >>>| CYBER CORE ACCESS |<<<\n\n");
        
        printf(" SCANNING:|");
        for(int i = 0; i < 20; i++) {
            if(i < p / 5) printf("██");
            else printf("⣿⣿");
        }
        printf("| %d%%\n", p);  // ✅ %= ដែលស្តាប់របស់អ្នក → %% ឯកលក្ខណ៍
        
        printf(" MEMORY_SEGMENT: 0x%x\n", p * 1234);
        printf(" ENCRYPT_KEY: AES_256_LOCKED\n");
        
        if(p == 100) {
            printf("\n\033[1;32m [ ACCESS GRANTED ] \033[0m\n");
        } else {
            printf("\n                      \n"); 
        }
        
        fflush(stdout);
        usleep(100000); // ឈប់ផ្អាក 0.1 វិនាទី
        p += 2;
    }
    return 127;
}
    
