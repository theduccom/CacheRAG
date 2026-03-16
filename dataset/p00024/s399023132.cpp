#include <iostream>
#define	GA	9.8

int main() {
	double v;
	double y;
	int n;
	while (std::cin >> v) {
		y = v * v / (2. * GA);
		n = (int)((y + 5.) / 5.) + 1;
		std::cout << n << '\n';
	}
	return 0;
}