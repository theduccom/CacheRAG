#include<stdio.h>
 
int main(){
    int w = 0;
    int m = 1150;
    int t;
    while(scanf("%d", &w) != -1){
        if(w == -1){
            break;
        }else if(w > 30){
            t = w - 30;
            m += 10 * 125 + 10 * 140 + t * 160;
        }else if(w > 20){
            t = w - 20;
            m += 10 * 125 + t *140;
        }else if(w > 10){
            t = w - 10;
            m += t * 125;
        }
    printf("%d\n", 4280 - m);
    m = 1150;
    }
    return 0;
}