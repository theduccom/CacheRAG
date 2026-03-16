#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

int main() {
    std::vector<double> v;
    double elevation;

    while (std::cin >> elevation) {
        v.push_back(elevation);
    }

    std::cout << std::fixed << std::setprecision(2)
              << *std::max_element(v.begin(), v.end())
                - *std::min_element(v.begin(), v.end())
              << std::endl;

    return 0;
}