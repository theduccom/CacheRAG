#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int hosuu;
	int kakudo;
	double x, y = 0;
	double degree = M_PI/2;
	char comma;
	while(1) {
		cin >> hosuu >> comma >>  kakudo;
		if(hosuu == 0 && kakudo ==0) break;
		else {
			x += cos(degree) * hosuu;
			y += sin(degree) * hosuu;
			degree -= (double)kakudo / 180 * M_PI;
		}
	}
	cout << int(x) << endl;
	cout << int(y) << endl;
	return 0;
}