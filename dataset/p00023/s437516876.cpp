#include <iostream>
#include <cmath>

struct Circle
{
    double x , y , r;
};

auto distance (double x , double y) -> double
{
    return std::sqrt (x * x + y * y);
}

auto solve (const Circle & A , const Circle & B) -> int
{
    auto d = distance (A.x - B.x , A.y - B.y);
    if (d > A.r + B.r)
    {
        return 0;
    }
    else if (std::abs (A.r - B.r) > d)
    {
        return A.r > B.r ? 2 : - 2;
    }
    else
    {
        return 1;
    }
}

auto main () -> int
{
    Circle A , B;
    int n;
    std::cin >> n;
    for (auto i = 0; i < n; ++ i)
    {
        std::cin >> A.x >> A.y >> A.r >> B.x >> B.y >> B.r;
        std::cout << solve (A , B) << std::endl;
    }
}