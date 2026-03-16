#include <stdio.h>

#define SIZE 10
int main(void){
    int w;
    int tmp;
    int first;

    while (scanf("%d", &w)!= EOF){
        tmp = 1;
        first = 1;
        while (w){
            if (w & 1){
                printf(first?"%d":" %d", tmp);
                first = 0;
            }
            tmp <<= 1;
            w >>= 1;
        }
        printf("\n");
    }

    return 0;
}