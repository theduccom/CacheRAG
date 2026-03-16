#include <iostream>
#include <cstdint>
#include <cmath>

int main()
{
	double x = 0, y = 0;
	std::int16_t theta = 90;
	double const pi = std::acos(-1.0);
	std::int16_t d, t;
	char comma;

	for (std::cin >> d >> comma >> t; d != 0 || t != 0; std::cin >> d >> comma >> t) {
		x += d * std::cos(pi * theta / 180);
		y += d * std::sin(pi * theta / 180);
		theta -= t;
		if (theta < 0) {
			theta += 360;
		}
		else {
			theta %= 360;
		}
	}
	std::cout << static_cast<std::int32_t>(x) << '\n'
			  << static_cast<std::int32_t>(y) << std::endl;

	return 0;
}