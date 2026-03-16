#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	double v, y, N, t;
	while (cin >> v) {
		t = v / 9.8;
		y = 4.9 * t * t;
		N = (y + 5) / 5;
		printf("%.0lf\n", ceil(N));
	}
	return 0;
}