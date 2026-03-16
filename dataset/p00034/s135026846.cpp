#include <iostream>
#include <stack>

int main()
{
    while (true) {
        int l[10], v[2];
        char comma;
        for (int i = 0; i < 10; ++i) std::cin >> l[i] >> comma;
        std::cin >> v[0] >> comma >> v[1];
        if (std::cin.eof()) break;

        int ls = 0;
        for (int i = 0; i < 10; ++i) ls += l[i];
        double t = (double)ls / (v[0] + v[1]);
        double d = t * v[0];
        for (int i = 1; i <= 10; ++i) {
            d -= l[i - 1];
            if (d <= 0) {
                std::cout << i << std::endl;
                break;
            }
        }
    }
}