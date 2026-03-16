#include <iostream>

int leap_year(int year)
{
	if ( year % 4 == 0) {
		if ( year % 100 == 0) {
			if ( year % 400 == 0) {
				return 1;
			} else {
				return 0;
			}
		} else {
			return 1;
		}
	} else {
		return 0;
	}
}

int main()
{
	int a, b;
	int first = 0;
	while (true) {
		std::cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		if (first != 0) {
			std::cout << std::endl;
		}
		
		first = 1;
		int i = 0;
		
		for (int j = a; j <= b; j++) {
			if (leap_year(j) == 0) {
				i++;
			} else {
				std::cout << j << std::endl;
			}
		}
		if ( i == a - b + 1) {
			std::cout << "NA" << std::endl;
		}
	}
	return 0;
}