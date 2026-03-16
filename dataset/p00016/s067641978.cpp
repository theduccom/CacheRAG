#include <cassert>
#include <cmath>
#include <iostream>

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
    std::cout << int(x) << std::endl;
    std::cout << int(y) << std::endl;
    return 0;
}