#include <iostream>
#include <iomanip>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    double a;

    while (std::cin >> a) {
        double ans = a;
        a *= 2.;

        for (int i = 2; i <= 10; ++i) {
            ans += a;
            a = (i & 1) ? a * 2. : a / 3.;
        }
        std::cout << std::fixed << std::setprecision(6)
                  <<  ans << std::endl;
    }

    return 0;
}