#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m;

    while (std::cin >> n, n) {
        int cnt_two = 0, cnt_five = 0;

        while (n) {
            m = n;
            for (; (m % 2) == 0;) {
                ++cnt_two;
                m /= 2;
            }
            for (; (m % 5) == 0;) {
                ++cnt_five;
                m /= 5;
            }

            --n;
        }

        std::cout << (cnt_two < cnt_five ? cnt_two : cnt_five)
                  << std::endl;
    }

    return 0;
}