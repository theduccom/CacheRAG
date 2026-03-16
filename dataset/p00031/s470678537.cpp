#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int w;

    while (std::cin >> w) {
        for (int i = 0; i < 10; ++i) {
            int num = 1 << i;
            if (w & num) {
                w -= num;
                std::cout << num;

                if (w) {
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}