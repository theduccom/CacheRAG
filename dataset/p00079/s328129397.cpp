#include<cstdio>
#include<complex>
#include<cmath>
using namespace std;
typedef complex<double> xy;


int main() {
	xy p[30];
	int n = 0;
	double x, y;
	while (~scanf("%lf,%lf", &x, &y)) {
		p[n++] = xy(x, y);
	}

	double sum = 0.0;
	for (int i = 1; i <= n - 2; i++) {
		xy a = p[0], b = p[i], c = p[i + 1];
		sum += (conj(b - a)*(c - a)).imag() / 2.0;
	}
	printf("%.6f\n", abs(sum));

	return 0;
}