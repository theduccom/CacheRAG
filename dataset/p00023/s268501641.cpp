#include <iostream>
#include <cstdint>
#include <cmath>

int main()
{
	std::uint32_t n;
	std::cin >> n;
	for (std::uint32_t i = 0; i < n; ++i) {
		double x_a, y_a, r_a, x_b, y_b, r_b;
		std::cin >> x_a >> y_a >> r_a >> x_b >> y_b >> r_b;
		double const dist = std::hypot(x_a - x_b, y_a - y_b);
		if (dist + r_b < r_a) {
			std::cout << 2 << std::endl;
		}
		else if (dist + r_a < r_b) {
			std::cout << -2 << std::endl;
		}
		else if (dist <= r_a + r_b) {
			std::cout << 1 << std::endl;
		}
		else {
			std::cout << 0 << std::endl;
		}
	}
	return 0;
}