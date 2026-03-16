#include <cmath>
#include <iostream>

#define rep(i, n) for (int i = 0; i < n; i++)

bool is_prime(int n) {
    if (n % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(n); i += 2)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n, x;
    while (std::cin >> n >> x && n > 0 && x > 0) {
        auto course = new bool[x + 1]();
        rep(i, x + 1) course[i] = false;

        int prices[n];
        rep(i, n) { std::cin >> prices[i]; }
        course[0] = true;

        int max = -1;
        rep(i, x + 1) rep(j, n) {
            if (i - prices[j] >= 0 && course[i - prices[j]]) {
                if (is_prime(i)) max = i;
                course[i] = true;
                break;
            }
        }
        if (max < 0)
            std::cout << "NA" << std::endl;
        else
            std::cout << max << std::endl;
        delete[] course;
    }
}