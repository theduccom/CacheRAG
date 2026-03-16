#include<iostream>
#include<vector>

int main() {
	int w;
	while (std::cin >> w) {
		std::vector<int> scales;
		while (w != 0) {
			int s = w % 2;
			scales.push_back(s);
			if (s == 1) w--;
			w = w / 2;
		}
		int weight = 0;
		bool first = false;
		for (std::vector<int>::iterator itr = scales.begin(); itr != scales.end(); ++itr) {
			if (weight == 0) weight = 1;
			else weight = weight * 2;
			if (*itr == 1) {
				if (first) std::cout << " ";
				std::cout << weight;
				first = true;
			}
		}
		std::cout << std::endl;
	}

	return 0;
}
