#include <stdio.h>
#include <math.h>
 
#define DEG2RAD(X) ((X)/180.0*3.1415926535898) 
int main(void){
    double curX,curY;
    int curDir;
    double dx,dy;
    int dAngle,dDist;
    
    curX = curY = 0;
    curDir = 0; // north
    scanf("%d,%d",&dDist, &dAngle);
    while (dDist!=0 || dAngle!=0){
        curX += dDist * sin(DEG2RAD(curDir));
        curY += dDist * cos(DEG2RAD(curDir));
        curDir += dAngle;
        scanf("%d,%d",&dDist, &dAngle);
    } 
    printf("%d\n%d\n", (int)curX, (int)curY);
    return 0;
}