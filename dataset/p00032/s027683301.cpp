#include <iostream>
#include <cstdint>

int main()
{
	std::uint32_t num_rectangles = 0;
	std::uint32_t num_lozenges = 0;
	std::uint32_t side1, side2, diagonal;
	char comma;
	while (std::cin >> side1 >> comma >> side2 >> comma >> diagonal) {
		if (side1 * side1 + side2 * side2 == diagonal * diagonal) {
			++num_rectangles;
		}
		else if (side1 == side2) {
			++num_lozenges;
		}
	}
	std::cout << num_rectangles << '\n' << num_lozenges << std::endl;
	return 0;
}