#include<cstdio>
#include<cmath>
using namespace std;
double x1,Y1,x2,y2,x3,y3;
double px, py,r;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&Y1,&x2,&y2,&x3,&y3);
        double A1 =(x2*x2+y2*y2-x1*x1-Y1*Y1)*(y3-Y1);
        double B1 =(x3*x3+y3*y3-x1*x1-Y1*Y1)*(y2-Y1);
        double A2 =(x3*x3+y3*y3-x1*x1-Y1*Y1)*(x2-x1);
        double B2 =(x2*x2+y2*y2-x1*x1-Y1*Y1)*(x3-x1);
        double D = (x2-x1)*(y3-Y1)-(y2-Y1)*(x3-x1);
         px=(A1-B1)/D/2;
         py=(A2-B2)/D/2;
         r = sqrt((px-x1)*(px-x1)+(py-Y1)*(py-Y1));
        printf("%.3f %.3f %.3f\n",px,py,r);
    }
    return 0;
}