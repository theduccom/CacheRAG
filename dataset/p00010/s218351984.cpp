#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        double a1 = 2 * (x2 - x1), a2 = 2 * (x3 - x1),
               b1 = 2 * (y2 - y1), b2 = 2 * (y3 - y1),
               c1 = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2,
               c2 = x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3,
               px = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1),
               py = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1),
               r = sqrt(pow(x1 - px, 2) + pow(y1 - py, 2));
        printf("%.3f %.3f %.3f\n", px, py, r);
    }
    return 0;
}