#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main()
{
double N,P=0;
double x,y;
double p=0,P1=0;
x=0;y=0;
while(1)
{
scanf("%lf,%lf",&N,&P1);
if((int)N==0&&(int)P1==0)break;

x+=N*sin(P*M_PI/180);y+=N*cos(P*M_PI/180);

P+=P1;
}
int X,Y;
X=(int)x;Y=(int)y;
printf("%d\n",X);printf("%d\n",Y);

return 0;
}