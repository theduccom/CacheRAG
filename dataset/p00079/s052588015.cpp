#include <cstdio>
#include <complex>
#include <cmath>
#include <vector>

using namespace std;

typedef complex<double> xy_t;

double cross_product(xy_t a, xy_t b) {
	return (conj(a) * b).imag();
}

int main() {
	double x, y;
	double s = 0;
	vector<xy_t> vertex;
	while (scanf("%lf,%lf", &x, &y) != EOF) {
		vertex.push_back(xy_t(x, y));
	}
	for (int i = 1; i < vertex.size() - 1; i++) {
		s += cross_product(vertex[i] - vertex[0], vertex[i + 1] - vertex[0]) / 2;
	}
	printf("%.6f", abs(s));
}