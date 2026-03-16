#include <cstdio>
#include <cmath>

int main(){
    double px,py,r,x1,y1,x2,y2,x3,y3,n;
    double a1,b1,c1,a2,b2,c2;

    scanf("%lf", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

        // (x-a)^2+(y-b)^2=r^2$KFM$C9~$`$+?

        a1 = 2 * ( x2 - x1 );
        b1 = 2 * ( y2 - y1 );
        c1 = pow(x1,2) - pow(x2,2) + pow(y1,2) - pow(y2,2);

        a2 = 2 * ( x3 - x1 );
        b2 = 2 * ( y3 - y1 );
        c2 = pow(x1,2) - pow(x3,2) + pow(y1,2) - pow(y3,2);

        px = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
        py = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
        r = sqrt( pow((px - x1),2) + pow((py - y1),2) );
        printf("%.3f %.3f %.3f\n", px, py, r);
    }

    return 0;
}