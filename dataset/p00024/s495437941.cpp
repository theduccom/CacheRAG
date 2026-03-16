#include <iostream>
#include <cmath>

auto main () -> int
{
    double v;
    while (std::cin >> v)
    {
        auto t = v / 9.8;
        auto y = 4.9 * t * t;
        auto n = (y + 5) / 5;
        auto ans = std::ceil (n);
        std::cout << ans << std::endl;
    }
}