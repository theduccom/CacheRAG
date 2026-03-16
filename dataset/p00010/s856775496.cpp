#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


int main(){
	int n;
	double x[3];
	double y[3];
	double p, q, r;

	cin >> n;
	while (n--){
		for (int i = 0; i < 3; i++) cin >> x[i] >> y[i];

		double a = y[0] - y[2];
		double b = y[0] - y[1];
		double c = x[0] - x[2];
		double d = x[0] - x[1];
		double e = pow(y[0], 2) - pow(y[1], 2) + pow(x[0], 2) - pow(x[1], 2);
		double f = pow(y[0], 2) - pow(y[2], 2) + pow(x[0], 2) - pow(x[2], 2);

		p = ((a*e) - (b*f)) / (2 * a*d - 2 * b*c);
		q = ((c*e) - (d*f)) / (2 * c*b - 2 * d*a);
		r = sqrt(pow(p - x[0], 2) + pow(q - y[0], 2));

		printf("%.3lf %.3lf %.3lf\n", p, q, r);
	}

	return 0;
}