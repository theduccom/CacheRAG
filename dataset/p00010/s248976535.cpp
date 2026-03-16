#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n;
    double x1,x2,x3,y1,y2,y3,A1,B1,C1,A2,B2,C2,X,Y;
    cin>>n;
    for(;n>0;n--){
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        A1=2*(x2-x1);
        B1=2*(y2-y1);
        C1=x1*x1-x2*x2+y1*y1-y2*y2;
        A2=2*(x3-x1);
        B2=2*(y3-y1);
        C2=x1*x1-x3*x3+y1*y1-y3*y3;
        X=(B1*C2-B2*C1)/(A1*B2-A2*B1);
        Y=(C1*A2-C2*A1)/(A1*B2-A2*B1);
        printf("%.3lf %.3lf %.3lf\n",X,Y,hypot(X-x1,Y-y1));
    }
    return 0;
}