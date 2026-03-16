#include <stdio.h>
#include <math.h>

int main(){
    int x,h;
    double sBtm, sSide;
    
    while (scanf("%d\n%d",&x,&h)){
        if (x==0 && h==0) break;
        sBtm = x*x;
        sSide = x * sqrt(x*x/4.0 + h*h)/2.0;
        printf("%f\n",sSide*4+sBtm);
    }
    
    return 0;
}