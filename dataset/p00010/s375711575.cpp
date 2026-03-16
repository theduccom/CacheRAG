#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    while (n--) {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        auto ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        auto bc = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
        auto ca = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
        auto r = (ab * bc * ca) / sqrt((ab + bc + ca) * (-ab + bc + ca) * (ab - bc + ca) * (ab + bc - ca));

        auto a = 2 * (x2 - x1);
        auto b = 2 * (y2 - y1);
        auto c = (x2 - x1) * (x2 + x1) + (y2 - y1) * (y2 + y1);
        auto d = 2 * (x3 - x2);
        auto e = 2 * (y3 - y2);
        auto f = (x3 - x2) * (x3 + x2) + (y3 - y2) * (y3 + y2);
        
        auto px = (e * c - b * f) / (e * a - b * d);
        auto py = (d * c - a * f) / (d * b - a * e);

        printf("%.3f %.3f %.3f\n", floor(px * 1000 + 0.5) / 1000, floor(py * 1000 + 0.5) / 1000, floor(r * 1000 + 0.5) / 1000);
    }
    
    return 0;
}