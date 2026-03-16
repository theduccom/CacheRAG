#include <iostream>
#include <cstdio>
#include <cmath>
#define M_PI 3.14159265358979323846

using namespace std;

typedef struct location {
        double x, y;
        int deg;

        location():
                x(0.0), y(0.0), deg(0)
                {
                }
} location;

int main()
{
        location loc;
        int d, a;

        while (true) {
                scanf("%d,%d", &d, &a);
                if (d == 0 && a == 0)
                        break;
                loc.x += d * sin(loc.deg * M_PI / 180);
                loc.y += d * cos(loc.deg * M_PI / 180);
                loc.deg += a;
        }
        cout << static_cast<int>(loc.x) << endl;
        cout << static_cast<int>(loc.y) << endl;

        return 0;
}