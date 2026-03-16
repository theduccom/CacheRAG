#include <iostream>
#include <cmath>

constexpr double PI = 3.1415926535;

double convert(int deg);
double adjust(double rad);

int main()
{
    double x = 0, y = 0;
    double rad = PI / 2;

    while (true) {
        int r, deg;
        char c;
        std::cin >> r >> c >> deg;

        if (r == 0 && deg == 0) {
            break;
        }

        x += r * cos(rad);
        y += r * sin(rad);

        rad = adjust(rad + convert(deg));
    }

    int ix = static_cast<int>((x > 0)? floor(x): -floor(-x));
    int iy = static_cast<int>((y > 0)? floor(y): -floor(-y));
    std::cout << ix << std::endl << iy << std::endl;

    return 0;
}

double convert(int deg)
{
    return (-deg * PI / 180);
}

double adjust(double rad)
{
    while (rad > PI) {
        rad -= 2 * PI;
    }
    while (rad < -PI) {
        rad += 2 * PI;
    }

    return rad;
}