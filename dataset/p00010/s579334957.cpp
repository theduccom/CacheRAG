#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double pow2(double x);

int main()
{
    int n;
    cin >> n;
    while (n--) {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        double xx1 = pow2(x1);
        double yy1 = pow2(y1);
        double xx2 = pow2(x2);
        double yy2 = pow2(y2);
        double xx3 = pow2(x3);
        double yy3 = pow2(y3);

        double a1 = 2 * (x2 - x1);
        double b1 = 2 * (y2 - y1);
        double c1 = xx1 - xx2 + yy1 - yy2;
        double a2 = 2 * (x3 - x1);
        double b2 = 2 * (y3 - y1);
        double c2 = xx1 - xx3 + yy1 - yy3;

        double xp = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
        double yp = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
        double r = sqrt(pow2(xp - x1) + pow2(yp - y1));

        cout << fixed << setprecision(3)
             << xp << " " << yp << " " << r << endl;
    }

    return 0;
}

double pow2(double x)
{
    return (x * x);
}