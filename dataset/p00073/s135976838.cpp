#include<cstdio>
#include<cmath>
int main(void){double x,h,s;while(1){scanf("%lf %lf",&x,&h);if(x==0&&h==0)break;printf("%.6lf\n",x*x+2*x*sqrt((x/2)*(x/2)+h*h));}return 0;}