#include <cstdio>
#include <math.h>

int N;
double X1,Y1,X2,Y2,X3,Y3;

int main()
{
    scanf("%d",&N);
    while (N--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&X1,&Y1,&X2,&Y2,&X3,&Y3);
        double a = X1-X2;
        double b = Y1-Y2;
        double c = -(X1*X1+Y1*Y1-X2*X2-Y2*Y2);
        double d = X2-X3;
        double e = Y2-Y3;
        double f = -(X2*X2+Y2*Y2-X3*X3-Y3*Y3);
        double l = (c*e-b*f)/(a*e-b*d);
        double m = (d*c-a*f)/(d*b-e*a);
        double n = -(X1*X1+Y1*Y1+l*X1+m*Y1);
        printf("%.3f %.3f %.3f\n",l*-0.5,m*-0.5,sqrt(l*l+m*m-n*4.0)/2.0);
    }
}