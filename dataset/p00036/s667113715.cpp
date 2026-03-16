#include <stdio.h>
#include <string.h>
 
int main(void){
    char b[65];
    char p[7][33] = {
        "1100000011",
        "1000000010000000100000001",
        "1111",
        "1000000110000001",
        "11000000011",
        "100000001100000001",
        "110000011",
    };
    char *bi;
 
    int t = 0;
    while(true){
        if(scanf("%s", b) == EOF){ break; }
        for(int i=1; i<8; ++i){
            scanf("%s", b+i*8);
        }
        bi = strchr(b, '1');
        for(int i=0; i<7; ++i){
            if(memcmp(bi, p[i], strlen(p[i])) == 0){
                printf("%c\n", 'A' + i);
                break;
            }
        }
    }
    return 0;
}