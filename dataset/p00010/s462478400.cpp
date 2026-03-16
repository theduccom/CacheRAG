#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.precision(3);
    cout << fixed;
    int n;
    cin >> n;
    double x1, y1, x2, y2, x3, y3;
    while (n--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (y1 == y2) swap(x1, x3), swap(y1, y3);
        if (y1 == y3) swap(x1, x2), swap(y1, y2);

        // y = a * x + b
        double mx1, my1, a, b;
        mx1 = (x1 + x2) / 2.0;
        my1 = (y1 + y2) / 2.0;
        a = -(x2 - x1) / (y2 - y1);
        b = my1 - a * mx1;

        // y = c * x + d
        double mx2, my2, c, d;
        mx2 = (x1 + x3) / 2.0;
        my2 = (y1 + y3) / 2.0;
        c = -(x3 - x1) / (y3 - y1);
        d = my2 - c * mx2;

        // intersection
        double cx, cy;
        cx = (d - b) / (a - c);
        cy = (a * d - b * c) / (a - c);

        cout << cx << " " << cy << " " << hypot(cx - x1, cy - y1) << endl;
    }
    return 0;
}