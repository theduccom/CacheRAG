#include <iostream>

int main()
{
	int a, b;
	bool ff = false;
	
	while ((std::cin >> a >> b) && (a || b)) {
		if (ff) {
			std::cout << std::endl;
		} else {
			ff = true;
		}
		bool f = true;
		for (int y = a; y <= b; ++y) {
			if ((!(y % 4) && (y % 100)) || !(y % 400)) {
				std::cout << y << std::endl;
				f = false;
			}
		}
		if (f) std::cout << "NA" << std::endl;
	}
	
	return 0;
}