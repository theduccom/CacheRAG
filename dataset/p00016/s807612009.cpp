#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793 

int main(){
    int a0=90;
    int di,ai1;
    double x=0,y=0;
    scanf("%d,%d",&di,&ai1);
    while(di||ai1){
        x += di*cos(a0*(PI/180));
        y += di*sin(a0*(PI/180));
        a0 -= ai1;
        scanf("%d,%d",&di,&ai1);
    }
    printf("%d\n%d\n",(int)x,(int)y);
}