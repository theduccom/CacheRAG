#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main (void) {
	for (;;) {
		double x, h;
		
		cin >> x;
		cin >> h;
		
		if (x == 0 && h == 0) {
			break;
		}
		
		double S = 0.0;
		S += pow(x, 2);
		S += 4 * (x * sqrt(pow(x / 2, 2) + pow(h, 2)) / 2);
		
		printf("%lf\n", S);
	}
	
	return 0;
}