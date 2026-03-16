#include <math.h>
#include <stdio.h>

int main() {
    double x1, x2, x3, y1, y2, y3;
    int n;
    scanf("%d", &n);
    while (n--) {
        scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
        double a,b,c,d,e,f,x,y,r;
        a=2*(x2-x1);
        b=2*(y2-y1);
        c=x2*x2+y2*y2-x1*x1-y1*y1;
        d=2*(x3-x2);
        e=2*(y3-y2);
        f=x3*x3+y3*y3-x2*x2-y2*y2;
        x=(b*f-e*c)/(b*d-e*a);
        y=(d*c-a*f)/(b*d-e*a);
        r=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
        printf("%.3lf %.3lf %.3lf\n", x, y, r);
    }
    return 0;
}