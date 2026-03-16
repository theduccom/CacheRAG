#include <iostream>
#define min(a, b) (a > b ? b : a)

int main() {
    int a, b, c;
    while (std::cin >> a >> b >> c && a && b && c) {
        int n;
        std::cin >> n;

        int min = min(min(a * a + b * b, b * b + c * c), a * a + c * c);
        for (int i = 0; i < n; i++) {
            int r;
            std::cin >> r;
            std::cout << (min < 4 * r * r ? "OK" : "NA") << std::endl;
        }
    }
}