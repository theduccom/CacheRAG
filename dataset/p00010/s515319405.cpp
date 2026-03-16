#include <utility>
#include <iostream>
#include <cmath>
#include <cstdio>

// ax + by = e1
// cx + dy = e2
auto solve (double a , double b , double c , double d , double e1 , double e2) -> std::pair <double , double>
{
    auto delta = a * d - b * c;
    auto x = (d * e1 - b * e2) / delta;
    auto y = (a * e2 - c * e1) / delta;
    return std::make_pair (std::move (x) , std::move (y));
}

auto distance (const std::pair <double , double> & a , const std::pair <double , double> & b) -> double
{
    auto dx = a.first  - b.first;
    auto dy = a.second - b.second;
    return std::sqrt (dx * dx + dy * dy);
}

auto show (double v) -> std::string
{
    if (-0.0005 < v && v < 0.0005)
    {
        return "0.000";
    }
    char s [100];
    std::sprintf (s , "%.3f" , v);
    return s;
}

auto main () -> int
{
    int n;
    std::cin >> n;
    for (auto i = 0; i < n; ++ i)
    {
        double x1 , y1 , x2 , y2 , x3 , y3;
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        auto b1 = (y2 - y1) * (y1 + y2) / 2 + (x2 - x1) * (x1 + x2) / 2;
        auto b2 = (y3 - y1) * (y1 + y3) / 2 + (x3 - x1) * (x1 + x3) / 2;
        auto p = solve ((x2 - x1) , (y2 - y1) , (x3 - x1) , (y3 - y1) , b1 , b2);
        auto r = distance (p , std::make_pair (x1 , y1));
        std::cout << show (p.first) << ' ' << show (p.second) << ' ' << show (r) << std::endl;
    }
}