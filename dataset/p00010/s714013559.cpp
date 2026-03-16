#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    double x1,y1,x2,y2,x3,y3;
    int n;
 
    scanf("%d",&n);
 
    double a,b,c;
    double ans = 0;
    double xp,yp;
    for(int i = 0;i < n; i++){
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
 
        a = hypot(x2 - x1,y2 - y1);
        b = hypot(x3 - x1,y3 - y1);
        c = hypot(x3 - x2,y3 - y2);
 
        ans = (a*b*c) / (sqrt((a+b+c)*(b+c-a)*(a-b+c)*(a+b-c)));
        xp = (((x1*x1)+(y1*y1))*(y2-y3)+((x2*x2)+(y2*y2))*(y3-y1)+((x3*x3)+(y3*y3))*(y1-y2))/(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
        yp = (((x1*x1)+(y1*y1))*(x2-x3)+((x2*x2)+(y2*y2))*(x3-x1)+((x3*x3)+(y3*y3))*(x1-x2))/(y1*(x2-x3)+y2*(x3-x1)+y3*(x1-x2))/2;
        printf("%.3lf %.3lf %.3lf\n",xp,yp,ans);
        ans = 0;
    }
    return 0;
}