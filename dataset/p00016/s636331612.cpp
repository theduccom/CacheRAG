#include <cassert>
#include <cmath>
#include <iostream>
#include <iomanip>

int main()
{
    double x = 0;
    double y = 0;
    double a = M_PI_2;
    while(true){
        int d, t;
        char c;
        std::cin >> d >> c >> t;
        if(d == 0 && t == 0) break;
        x += d * std::cos(a);
        y += d * std::sin(a);
        a += (-t * M_PI / 180);
    }
    double IntX, IntY;
    std::modf(x, &IntX);
    std::modf(y, &IntY);
    std::cout << std::fixed << std::setprecision(0);
    std::cout << IntX << std::endl;
    std::cout << IntY << std::endl;
    return 0;
}