#include <iostream>


char classdiv(int pm, int pe, int pj)
{
	double ave = (pm + pe + pj) / 3;
	if (pm == 100 || pe == 100 || pj == 100) {
		return 'A';
	} else if ((pm + pe) / 2 >= 90 || ave >= 80) {
		return 'A';
    } else if ( ave >= 70) {
		return 'B';
	} else if (ave >= 50 && (pm >= 80 || pe >= 80)) {
		return 'B';
	} else {
		return 'C';
	}
}
int main()
{
	int n;
	while (true) {
		std::cin >> n;
		if (n == 0) {
			break;
		} else {
	        for (int i = 0; i < n; i++) {
		        int pm;
		        int pe;
		        int pj;
		        std::cin >> pm >> pe >> pj;
				std::cout << classdiv(pm, pe, pj) << std::endl;
			}
		}
	}
	return 0;
}