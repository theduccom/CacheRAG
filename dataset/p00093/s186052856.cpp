#include <cstdio>
#include <cstdlib>
#include <cstring>
#include<iostream>

int main() {
    int a,b;
    bool isF = true;
    while (true) {
        scanf("%d%d", &a, &b);
        if (a == 0&&b == 0) {
            break;
        }
        if (!isF) {
            printf("\n");
        }
        isF = false;
        bool isN = true;
        for (int i=a;i<=b;++i){
            if ((i%4==0)&&((i%100!=0)||(i%400==0))){
                printf("%d\n", i);
                isN = false;
            }
        }
        if (isN) {
            printf("NA\n");
        }
    }
    return 0;
}