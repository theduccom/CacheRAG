#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n;
    double a, b, c, d, e, f;
    double x1, x2, x3, y1, y2, y3, px, py, r;
    cin >> n;
    while (n--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        a = 2 * (x1 - x2);
        b = 2 * (y1 - y2);
        c = x1*x1 + y1*y1 - x2*x2 - y2*y2;
        d = 2 * (x1 - x3);
        e = 2 * (y1 - y3);
        f = x1*x1 + y1*y1 - x3*x3 - y3*y3;
        px = (c*e - b*f) / (a*e - b*d);
        py = (c*d - a*f) / (b*d - a*e);
        r = sqrt((px - x1)*(px - x1) + (py - y1)*(py - y1));
        printf("%.3f %.3f %.3f\n", px, py, r);
    }
    
    return 0;
}