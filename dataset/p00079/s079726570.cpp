#include<iostream>
#include<complex>
#include<cstdio>
using namespace std;

double cross_product(complex<double>, complex<double>);
int main(void) {
	complex<double> p[30];
	int n;
	double x, y, s = 0;

	n = 0;
	while (scanf("%lf,%lf", &x, &y) == 2) {
		p[n++] = complex<double>(x, y);
	}
	for (int i = n - 1; i >= 0; i--) {
		p[i] -= p[0];
	}
	for (int i = 2; i < n; i++) {
		s += cross_product(p[i - 1], p[i]);
	}
	if (s < 0) s = -s;
	cout << s/2 << endl;
	return 0;
}

double cross_product(complex<double> a, complex<double> b) {
	return (conj(a)*b).imag();
}