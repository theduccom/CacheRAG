#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;

    scanf("%d", &n);

    double x1, y1, x2, y2, x3, y3;

    while (n--) {
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
 
        if (y1 == y3) {
            swap(x3, x2);
            swap(y3, y2);
        }

        if (y2 == y3) {
            swap(x3, x1);
            swap(y3, y1);
        }

        double a = x2 - x3;
        double b = y2 - y3;
        double c = x2 + x3;
        double d = y2 + y3;
        double e = x3 - x1;
        double f = y3 - y1;
        double g = x3 + x1;
        double h = y3 + y1;

        double px = ((a / b) * (c / 2) + d / 2 - (e / f) * (g / 2) - h / 2) / (a / b - e / f);
        double py = -(a / b) * px + (a / b) * c / 2 + d / 2;
        double x = x1 - px;
        double y = y1 - py;
        double r = sqrt(x * x + y * y);

        printf("%.3lf %.3lf %.3lf\n", px, py, r);
    }

    return 0;
}