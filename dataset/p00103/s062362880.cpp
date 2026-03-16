#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		int point = 0;
		int baseCount = 0;
		int outCount = 0;
		
		std::string str;
		while (outCount <= 2) {
			std::cin >> str;

			if (str == "HIT") {
				if (baseCount >= 3)
					++point;
				else
					++baseCount;
			}
			else if (str == "HOMERUN") {
				point += baseCount + 1;
				baseCount = 0;
			}
			else if (str == "OUT")
				++outCount;
		}

		std::cout << point << std::endl;
	}
}