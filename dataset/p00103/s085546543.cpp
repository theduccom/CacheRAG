#include <iostream>
#include <string>
int main(){
	int inning;
	std::cin >> inning;
	for (int i = 0; i < inning; i++) {
		int out = 0;
		int runner = 0;
		int score = 0;
		while (out < 3) {
			std::string event;
			std::cin >> event;
			if (event == "HIT") {
				if (runner == 3) {
					score++;
				}
				else runner++;
			}
			if (event == "OUT") {
				out++;
			}
			if (event == "HOMERUN") {
				score += runner + 1;
				runner = 0;
			}
		}
		std::cout << score << std::endl;
	}

	return 0;
}