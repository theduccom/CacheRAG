#include <stdio.h>
int main(void){
    for(int i=1,j=1;i<=9;i+=j/9,j=j%9+1)printf("%dx%d=%d\n",i,j,i*j);
    return 0;
}