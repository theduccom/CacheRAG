#include <iostream>
#include <array>
#include <numeric>
#include <cstdint>

int main()
{
	std::array<std::uint32_t, 10> length;
	while (std::cin >> length[0]) {
		char comma;
		for (std::uint32_t i = 1; i < length.size(); ++i) {
			std::cin >> comma >> length[i];
		}
		double v1, v2;
		std::cin >> comma >> v1 >> comma >> v2;

		std::uint32_t const total_len = std::accumulate(length.begin(), length.end(), 0u);
		double const pos = v1 * total_len / (v1 + v2);

		std::uint32_t len = 0u;
		for (std::uint32_t i = 0; i < length.size(); ++i) {
			len += length[i];
			if (pos <= len) {
				std::cout << i + 1 << std::endl;
				break;
			}
		}
	}

	return 0;
}