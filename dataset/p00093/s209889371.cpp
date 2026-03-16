#include <iostream>

int main() {
    int a, b, n = 0, m = 0;
    std::cin >> a >> b;
    while (a != 0 && b != 0) {
        if(m >= 1){
        std::cout << std::endl;
        }
        for (int i = a; i <= b; ++i) {
            if (i % 400 == 0) {
                std::cout << i << std::endl;
                n = 1;
            } else if (i % 100 != 0 && i % 4 == 0) {
                std::cout << i << std::endl;
                n = 1;
            } else  {
                continue;
            }
        }
        if (n == 0) {
            std::cout << "NA" << std::endl;
        }
        std::cin >> a >> b;
        n = 0;
        m++;
    }
    return 0;
}