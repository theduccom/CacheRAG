#include<stdio.h>
#include<math.h>
int main(){double x,h;while(scanf("%lf%lf",&x,&h),x)printf("%f\n",x*x+x*sqrt(x*x/4+h*h)*2);return 0;}