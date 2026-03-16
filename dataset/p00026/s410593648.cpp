#include <iostream>
#include <array>
#include <algorithm>
#include <cstdint>

int main()
{
	std::uint16_t const bias = 2;
	typedef std::array<std::uint16_t, 10 + 2 * bias> Row;
	typedef std::array<Row, 10 + 2 * bias> Paper;
	Paper paper;

	for (Row& row : paper) {
		row.fill(0);
	}

	std::uint16_t x, y, size;
	char comma;
	while (std::cin >> x >> comma >> y >> comma >> size) {
		enum { Small = 1, Medium, Large };
		x += bias;
		y += bias;

		++paper[x][y];
		++paper[x + 1][y];
		++paper[x - 1][y];
		++paper[x][y + 1];
		++paper[x][y - 1];

		if (size != Small) {
			++paper[x + 1][y + 1];
			++paper[x + 1][y - 1];
			++paper[x - 1][y + 1];
			++paper[x - 1][y - 1];

			if (size == Large) {
				++paper[x + 2][y];
				++paper[x - 2][y];
				++paper[x][y + 2];
				++paper[x][y - 2];
			}
		}
	}

	std::uint16_t num_empty = 0;
	std::uint16_t max_density = 0;
	for (std::uint16_t i = bias; i < 10 + bias; ++i) {
		Row const& row = paper[i];
		num_empty += std::count(row.begin() + 2, row.end() - 2, 0);
		max_density = std::max(
				max_density,
				*std::max_element(row.begin() + 2, row.end() - 2));
	}

	std::cout << num_empty << '\n' << max_density << std::endl;

	return 0;
}