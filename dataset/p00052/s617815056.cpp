#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    long long int n;

    while (std::cin >> n, n) {
        long long int ans = 0;
        long long int num = 1;
        for (long long int i = 2; i <= n; ++i) {
            num *= i;
            
            int cnt = 0;
            long long int div = 10;
            for (;;) {
                if (num % div) {
                    break;
                }
                div *= 10;
                ++cnt;
            }

            if (cnt) {
                div /= 10;
                num /= div;
                ans += cnt;
            }

            num %= 1000000000;
        }

        std::cout << ans << std::endl;
    }

    return 0;
}