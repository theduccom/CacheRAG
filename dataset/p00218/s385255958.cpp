#include <iostream>

int Classification(int pm, int pe, int pj)
{
	if(pm == 100 || pe == 100 || pj == 100) {
		return 1;
	} else if ( ( pm + pe) / 2 >= 90) {
		return 1;
	} else if ( ( pm + pe + pj) / 3 >= 80) {
		return 1;
	} else if ( ( pm + pe + pj) / 3 >= 70) {
		return 2;
	} else if ( ( pm + pe + pj) /3 > 50 && ( pm >= 80 || pe >= 80)) {
		return 2;
	} else {
		return 3;
	}
}

char Class(int x)
{
	if ( x == 1) {
		return 'A';
	} else if ( x == 2) {
		return 'B';
	} else {
		return 'C';
	}
}

int main()
{
	int n, pm, pe, pj;
	
	while (true) {
		std::cin >> n;
		if ( n == 0){
			break;
		} else {
			for (int i = 0; i < n; i++) {
				std::cin >> pm >> pe >>pj;
				std::cout << Class(Classification(pm, pe, pj)) << std::endl;
			}
		}
	}
	
	return 0;
}