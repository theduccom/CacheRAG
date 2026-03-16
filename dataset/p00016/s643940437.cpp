#include <iostream>
#include <cmath>

using namespace std;

static const double PI = 3.141592;

int main()
{
    int m,r,dr;
    double x = 0.0, y = 0.0;
    r = 0;
    while(scanf("%d,%d", &m, &dr) == 2 && (m != 0 || dr != 0)) {
        double dx = (m * cos(r * PI / 180.0)), dy = (m * sin(r * PI / 180.0));
        x += dx; y += dy;
        r = (r + dr + 360) % 360;
    }
    cout << (int)y << endl;
    cout << (int)x << endl;
}