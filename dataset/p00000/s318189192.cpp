#include<stdio.h>


int main(void){
    int a,b;
    int c[9][9];

    for(a=1;a<10;a++){
        for(b=1;b<10;b++){
            c[a][b]=a*b;
            printf("%dx%d=%d\n",a,b,c[a][b]);
        }
    }

    return 0;
}
