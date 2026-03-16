#include <iostream>
#include <cmath>
using namespace std;

#define SQ(x) ((x) * (x))

int main(void)
{
    int n;
    double x1, x2, x3, y1, y2, y3;
    double a, b, c, d, e, f;
    double l, m, g;
    
    cin >> n;
    for (int i = 0; i < n; i++){
        scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
        
        a = (x1 - x2);
        b = (y1 - y2);
        c = -1 * (SQ(x1) - SQ(x2) + SQ(y1) - SQ(y2));
        d = (x1 - x3);
        e = (y1 - y3);
        f = -1 * (SQ(x1) - SQ(x3) + SQ(y1) - SQ(y3));
        
        l = (c * e - b * f) / (e * a - b * d);
        m = (d * c - a * f) / (d * b - e * a);
        
        g = -1 * (SQ(x1) + SQ(y1) + l * x1 + m * y1);
        
        printf("%.3f %.3f %.3f\n", l / -2.0, m / -2.0, sqrt(SQ(l) + SQ(m) - 4 * g) / 2.0);
    }
    
    return (0);
}