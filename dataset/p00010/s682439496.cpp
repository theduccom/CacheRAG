#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n; double a, b, c, d, e, f;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c >> d >> e >> f; double C = sqrt((a - c)*(a - c) + (b - d)*(b - d));
		double B = sqrt((a - e)*(a - e) + (b - f)*(b - f)), A = sqrt((c - e)*(c - e) + (d - f)*(d - f));
		double A1 = 2 * (c - a), B1 = 2 * (d - b), A2 = 2 * (e - a), B2 = 2 * (f - b), C1 = a*a - c*c + b*b - d*d, C2 = a*a - e*e + b*b - f*f;
		double X = (B1*C2 - B2*C1) / (A1*B2 - A2*B1), Y = (C1*A2 - C2*A1) / (A1*B2 - A2*B1);
		double R = (A*B*C) / sqrt((A + B + C)*(-A + B + C)*(A - B + C)*(A + B - C));
		printf("%.3lf %.3lf %.3lf\n", X, Y, R);
	}
	return 0;
}