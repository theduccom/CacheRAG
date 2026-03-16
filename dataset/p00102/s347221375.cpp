#include <iomanip>
#include <iostream>
#include <iterator>
#include <sstream>
#include <vector>

int main() {
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    int n;
    while (std::cin >> n && n > 0) {
        std::cin.ignore();

        std::vector<int> vec;
        std::string s;
        for (int i = 0; i < n; i++) {
            std::getline(std::cin, s);

            std::stringstream ss(s);
            std::copy(std::istream_iterator<int>(ss), {},
                      std::back_inserter(vec));
        }

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                std::cout << std::right << std::setw(5) << vec[n * i + j];
                sum += vec[n * i + j];
            }
            std::cout << std::right << std::setw(5) << sum << std::endl;
        }
        int total = 0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) { sum += vec[n * j + i]; }
            std::cout << std::right << std::setw(5) << sum;
            total += sum;
        }
        std::cout << std::right << std::setw(5) << total << std::endl;
    }
}