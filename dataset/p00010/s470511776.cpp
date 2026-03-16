#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
	double x[3], y[3];
	double a, b, c;
	double A[2], B[2], C[2];
	double px, py;
	double r;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
		A[0] = 2 * (x[1] - x[0]);
		B[0] = 2 * (y[1] - y[0]);
		C[0] = pow(x[0], 2) - pow(x[1], 2) + pow(y[0], 2) - pow(y[1], 2);
		A[1] = 2 * (x[2] - x[0]);
		B[1] = 2 * (y[2] - y[0]);
		C[1] = pow(x[0], 2) - pow(x[2], 2) + pow(y[0], 2) - pow(y[2], 2);
		px = ((B[0] * C[1]) - (B[1] * C[0])) / ((A[0] * B[1]) - (A[1] * B[0]));
		py = ((C[0] * A[1]) - (C[1] * A[0])) / ((A[0] * B[1]) - (A[1] * B[0]));
		a = sqrt(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2));
		b = sqrt(pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2));
		c = sqrt(pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2));
		r = (a * b * c) / sqrt((a+b+c) * (-a+b+c) * (a-b+c) * (a+b-c));
		printf("%.3lf %.3lf %.3lf\n", px, py, r);
	}
	return 0;
}