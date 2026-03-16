#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
	int n, i;
	double x[4], y[4], a[2], b[2], c[2], r;
	cin >> n;
	for (i = 0;i < n;i++) {
		cin >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];

		a[0] = 2.0*(x[2] - x[1]);
		b[0] = 2.0*(y[2] - y[1]);
		c[0] = x[1] * x[1] - x[2] * x[2] + y[1] * y[1] - y[2] * y[2];
		a[1] = 2.0 * (x[3] - x[1]);
		b[1] = 2.0*(y[3] - y[1]);
		c[1] = x[1] * x[1] - x[3] * x[3] + y[1] * y[1] - y[3] * y[3];

		x[0] = (b[0] * c[1] - b[1] * c[0]) / (a[0] * b[1] - a[1] * b[0]);
		y[0] = (c[0] * a[1] - c[1] * a[0]) / (a[0] * b[1] - a[1] * b[0]);

		r = sqrt((x[1] - x[0])*(x[1] - x[0]) + (y[1] - y[0])*(y[1] - y[0]));
		printf("%.3f %.3f %.3f\n", x[0], y[0], r);
	}
}