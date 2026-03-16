#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cin >> num;
    double x1, x2, x3, y1, y2, y3;
    double px, py, r;
    double a, b, c, d, e, f;

    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
    {
        a = 2 * (x1 - x2);
        b = 2 * (y1 - y2);
        c = 2 * (x2 - x3);
        d = 2 * (y2 - y3);
        e = x1*x1 - x2*x2 + y1*y1 - y2*y2;
        f = x2*x2 - x3*x3 + y2*y2 - y3*y3;
        px = (d*e - b*f) / (a*d - b*c);
        py = (a*f - c*e) / (a*d - b*c);
        r = sqrt((px - x1)*(px - x1) + (py - y1)*(py - y1));

        cout << fixed << setprecision(3) << px << " " << py << " " << r << endl;
    }
}