#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x,h;
	double s;
	double k;

	while(1) {
		cin >> x;
		cin >> h;
		if (x == 0 && h == 0) {
			break;
		}
		k = sqrt(pow((double)x/2.0,2) + pow((double)h,2));
		s = pow((double)x,2) + (double)x * k * 2;
		printf("%f\n",s);
	}

	return 0;
}