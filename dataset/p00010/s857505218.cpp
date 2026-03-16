#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i=0;i<a;i++){
        double x1,y1,x2,y2,x3,y3;
        cin >> x1 >>y1 >>x2 >> y2 >> x3 >> y3;
        double a1,a2,b1,b2,c1,c2,x,y,r;
         a1=2*(x2-x1);
         b1=2*(y2-y1);
         c1=x1*x1-x2*x2+y1*y1-y2*y2;
         a2=2*(x3-x1);
         b2=2*(y3-y1);
         c2=x1*x1-x3*x3+y1*y1-y3*y3;
         x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
         y=(c1*a2-c2*a1)/(a1*b2-a2*b1);
         r=hypot(x-x1,y-y1);
        printf("%.3lf %.3lf %.3lf\n",x,y,r);
    }
}

