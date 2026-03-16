#include <iostream>

bool is_lozenge(int side_a, int side_b)
{
	return (side_a == side_b);
}

bool is_rectangle(int side_a, int side_b, int diagonal)
{
	return (side_a * side_a + side_b * side_b == diagonal * diagonal);
}

int main()
{
	char dummy;
	int side_a, side_b, diagonal;
	int no_rectangles = 0, no_lozenges = 0;
	while (std::cin >> side_a >> dummy >> side_b >> dummy >> diagonal) {
//		std::cout << side_a << " " << side_b << " " << diagonal << std::endl;
		if (is_rectangle(side_a, side_b, diagonal) && is_lozenge(side_a, side_b)) {
//			std::cout << "square" << std::endl;
			// ·û`©ÂH`Í³û`Å é
			// DO NOTHING
		} else if (is_rectangle(side_a, side_b, diagonal)) {
//			std::cout << "rectangle" << std::endl;
			no_rectangles++;
		} else if (is_lozenge(side_a, side_b)) {
//			std::cout << "lozenge" << std::endl;
			no_lozenges++;
		} else {
			// DO NOTHING
		}
	}
	std::cout << no_rectangles << std::endl;
	std::cout << no_lozenges   << std::endl;
	return 0;
}