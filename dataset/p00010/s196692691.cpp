#include <cmath>
#include <cstdio>

int main() {
	int sampleNum;
	scanf("%d", &sampleNum);
	for (; sampleNum > 0; --sampleNum) {
		double x1, y1, x2, y2, x3, y3;
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

		double ax = x3 - x2;
		double ay = y3 - y2;
		double a2 = ax * ax + ay * ay;
		double a = sqrt(a2);
		double bx = x1 - x3;
		double by = y1 - y3;
		double b2 = bx * bx + by * by;
		double b = sqrt(b2);
		double cx = x2 - x1;
		double cy = y2 - y1;
		double c2 = cx * cx + cy * cy;
		double c = sqrt(c2);

		double crossabz = ax * by - ay * bx;

		double px, py, r;

		if (crossabz == 0) {
			if (a < b) {
				if (b < c) {
					px = (x1 + x2) / 2.;
					py = (y1 + y2) / 2.;
					r = c / 2.;
				} else {
					px = (x3 + x1) / 2.;
					py = (y3 + y1) / 2.;
					r = b / 2.;
				}
			} else {
				px = (x2 + x3) / 2.;
				py = (y2 + y3) / 2.;
				r = a / 2.;
			}
		} else {
			double bunbo = a2 * a2 - 2. * a2 * (b2 + c2) + (b2 - c2) * (b2 - c2);
			double keisu1 = a2 * (a2 - b2 - c2);
			double keisu2 = b2 * (b2 - c2 - a2);
			double keisu3 = c2 * (c2 - a2 - b2);
			px = (keisu1 * x1 + keisu2 * x2 + keisu3 * x3) / bunbo;
			py = (keisu1 * y1 + keisu2 * y2 + keisu3 * y3) / bunbo;

			double s = fabs(crossabz) / 2.;
			r = a * b * c / (4. * s);
		}

		if ( px <= 0. && px > 5.e-4 ) { px = 0.; }
		if ( py <= 0. && py > 5.e-4 ) { py = 0.; }

		printf("%.3lf %.3lf %.3lf\n", px, py, r);
	}
	return 0;
}