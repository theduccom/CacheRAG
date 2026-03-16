#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
    int n;
    double x1, x2, x3, y1, y2, y3;
    cin >> n;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
        double a = 2 * (x1 - x2);
        double b = 2 * (y1 - y2);
        double c = x1*x1 - x2*x2 + y1*y1 - y2*y2;
        double d = 2 * (x1 - x3);
        double e = 2 * (y1 - y3);
        double f = x1*x1 - x3*x3 + y1*y1 - y3*y3;
        double p1 = (e * c - b * f) / (e * a - b * d);
        double p2 = (d * c - a * f) / (d * b - a * e);
        double r = sqrt(pow(x1 - p1, 2) + pow(y1 - p2, 2));
        cout << fixed << std::setprecision(3);
        cout << p1 << " " << p2 << " " << r << endl;;
    }
    return 0;
}



