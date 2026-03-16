#include <iostream>
#include <cstdint>
#include <cmath>

int main()
{
	std::uint32_t n;
	std::cin >> n;
	for (std::uint32_t i = 0; i < n; ++i) {
		double x1, y1, x2, y2, x3, y3;
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		double const a = x1 - x2, b = y1 - y2;
		double const c = x1 - x3, d = y1 - y3;
		double const e = a * (x1 + x2) / 2 + b * (y1 + y2) / 2;
		double const f = c * (x1 + x3) / 2 + d * (y1 + y3) / 2;
		double const denominator = a * d - b * c;
		double const px = (e * d - b * f) / denominator;
		double const py = (a * f - e * c) / denominator;
		std::cout.setf(std::ios::fixed | std::ios::showpoint);
		std::cout.precision(3);
		std::cout << px << ' ' << py << ' '
			      << std::hypot(px - x1, py - y1) << std::endl;
	}
	return 0;
}