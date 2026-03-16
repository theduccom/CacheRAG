#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    while(a--){
        double x1,y1,x2,y2,x3,y3;
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        double a1=2*(x2-x1);
        double b1=2*(y2-y1);
        double c1=x1*x1-x2*x2+y1*y1-y2*y2;
        double a2=2*(x3-x1);
        double b2=2*(y3-y1);
        double c2=x1*x1-x3*x3+y1*y1-y3*y3;
        double x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
        double y=(c1*a2-c2*a1)/(a1*b2-a2*b1);
        double r=hypot(x-x1,y-y1);
        printf("%.3lf %.3lf %.3lf\n",x,y,r);
    }
}
