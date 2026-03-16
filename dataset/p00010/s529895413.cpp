#include <stdio.h>
#include <math.h>
 
int main()
{
    int i, n;
    double x1, x2, x3, y1, y2, y3;
    double a, b, c, d, e, f;
    double X1, Y1, r;
     
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%lf %lf %lf %lf %lf %lf",&x1, &y1, &x2, &y2, &x3, &y3);
        a = 2 * (x2 - x1);
        b = 2 * (y2 - y1);
        c = x1*x1 - x2*x2 + y1*y1 - y2*y2;
        d = 2 * (x3 - x1);
        e = 2 * (y3 - y1);
        f = x1*x1 - x3*x3 + y1*y1 - y3*y3;
         
        X1 = (b*f - e*c) / (a*e - d*b);
        Y1 = (c*d - f*a) / (a*e - d*b);
        r  = sqrt((X1-x1)*(X1-x1) + (Y1-y1)*(Y1-y1));
         
        X1 *= 1000;
        Y1 *= 1000;
        r  *= 1000;
         
        X1 = (int)(X1 > 0.0 ? X1+0.5 : X1-0.5);
        Y1 = (int)(Y1 > 0.0 ? Y1+0.5 : Y1-0.5);
        r  = (int)(r  > 0.0 ? r +0.5 : r -0.5);
         
        X1 = (double)X1/1000;
        Y1 = (double)Y1/1000;
        r  = (double)r /1000;
         
        printf("%.3f %.3f %.3f\n", X1, Y1, r);
         
         
    }
     
    return 0;
}