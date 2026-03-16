#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        double x1,x2,x3;
        double y1,y2,y3;
        cin 
            >> x1 >> y1
            >> x2 >> y2
            >> x3 >> y3;
        double l12 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double l23 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        double l31 = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
        double cos123 = (l12*l12 + l23*l23 - l31*l31)/(2.0*l12*l23);
        double sin123 = sqrt(1.0-cos123*cos123);
        double r = l31 / (2.0*sin123);
        double coeff[4];
        double a = l23 * l23; // 1
        double b = l31 * l31; // 2
        double c = l12 * l12; // 3
        coeff[0] = a * ( b + c - a );
        coeff[1] = b * ( c + a - b );
        coeff[2] = c * ( a + b - c );
        coeff[3] = coeff[0] + coeff[1] + coeff[2];
        double xc = (coeff[0]*x1+coeff[1]*x2+coeff[2]*x3)/coeff[3];
        double yc = (coeff[0]*y1+coeff[1]*y2+coeff[2]*y3)/coeff[3];
#define sishagonyu(x) round(x*1000.0)/1000.0
        xc = sishagonyu(xc);
        yc = sishagonyu(yc);
        r  = sishagonyu(r);
        printf("%1.3f %1.3f %1.3f\n",
                xc,yc,r);
    }

    return 0;
}