#include <iostream>
#include <cmath>
#include <cstdio>

constexpr auto PI = 3.14159265358979323846264338;

auto main () -> int
{
    int d , t;
    double x = 0 , y = 0;
    int angle = 0;
    while (std::scanf ("%d,%d" , & d , & t) == 2 && (d || t))
    {
        x += d * std::sin (angle * PI / 180.0);
        y += d * std::cos (angle * PI / 180.0);
        angle += t;
    }
    std::cout << static_cast <int> (x) << std::endl;
    std::cout << static_cast <int> (y) << std::endl;
}