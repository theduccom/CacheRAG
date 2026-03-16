#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define PI 3.14159265359

int main()
{
    int d, a;
    char c;
    int r = 90;
    double x, y;

    while (cin >> d >> c >> a) {
        if (d == 0 && a == 0) {
            break;
        }
        else {
            double ans = r * (PI / 180.0);
            x += d * cos(ans);
            y += d * sin(ans);
            r += a;
        }
    }
    cout << -1 * (int)x << endl;
    cout << (int)y << endl;

    return (0);
}