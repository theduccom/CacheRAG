#include <iostream>

int main()
{
	int  a, b, c;
	int  rectangle = 0, lozenges = 0;
	char comma;
	while (std::cin >> a >> comma >> b >> comma >> c) {
		if (a*a + b*b == c*c) { // もし直角三角形なら
			rectangle++;
		}
		else if (a == b) {
			lozenges++;
		}
	}
	std::cout << rectangle << '\n' << lozenges << std::endl;
}