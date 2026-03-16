#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

long double sisya(long double a) {
	a *= 1000.0;
	//cout << a << endl;
	a += 0.5;
	a = (int)a;
	a /= 1000.0;
	return a; 
}

double ll(double x1, double y1, double x2, double y2) {
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double x[3], y[3];
		for (int j = 0; j < 3; j++) {
			cin >> x[j] >> y[j];
		}
		double a1, a2, b1, b2, c1, c2;
		a1 = 2.0 * (x[1]-x[0]);
		a2 = 2.0 * (x[2]-x[0]);
		b1 = 2.0 * (y[1]-y[0]);
		b2 = 2.0 * (y[2]-y[0]);
		c1 = x[0]*x[0]-x[1]*x[1]+y[0]*y[0]-y[1]*y[1];
		c2 = x[0]*x[0]-x[2]*x[2]+y[0]*y[0]-y[2]*y[2];
		double X, Y, R;
		X = (b1*c2-b2*c1)/(a1*b2-a2*b1);
		Y = (c1*a2-c2*a1)/(a1*b2-a2*b1);
		R = ll(X, Y, x[0], y[0]);
		//X = sisya(X);
		//Y = sisya(Y);
		//R = sisya(R);
		printf("%.3f %.3f %.3f\n", X, Y, R);
	}
	return 0;
}