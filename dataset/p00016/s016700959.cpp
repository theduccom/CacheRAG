#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int d, t;
    char c;
    double x = 0.0, y = 0.0, r = 0.0;
    while(cin >> d >> c >> t) {
        if (d == 0 && t == 0)
            break;
        y += d * cos(r / 180 * M_PI);
        x += d * sin(r / 180 * M_PI);
        r += t;
    }

    cout << (int)x << endl;
    cout << (int)y << endl;
    return 0;
}




