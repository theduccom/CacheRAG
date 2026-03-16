#include <stdio.h>
#include <math.h>

int
main(void)
{
	char line[80];
	int n;

	if (fgets(line, sizeof line, stdin) == NULL) {
		return 1;
	}
	if (sscanf(line, "%d", &n) != 1) {
		return 1;
	}

	double x1;
	double x2;
	double x3;
	double y1;
	double y2;
	double y3;

	for (int i = 0; i < n; i++) {
		if (fgets(line, sizeof line, stdin) == NULL) {
			return 1;
		}
		if (sscanf(line, "%lf %lf %lf %lf %lf %lf",
				   &x1, &y1, &x2, &y2, &x3, &y3) != 6) {
			return 1;
		}

		double a1 = 2 * (x2 - x1);
		double b1 = 2 * (y2 - y1);
		double c1 = x1*x1 - x2*x2 + y1*y1 - y2*y2;
		double a2 = 2 * (x3 - x1);
		double b2 = 2 * (y3 - y1);
		double c2 = x1*x1 - x3*x3 + y1*y1 - y3*y3;

		double a = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));
		double b = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
		double c = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));

		double px = (b1*c2 - b2*c1)/(a1*b2 - a2*b1);
		double py = (c1*a2 - c2*a1)/(a1*b2 - a2*b1);
		double r = (a*b*c) / sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));

		printf("%.3f %.3f %.3f\n", px, py, r);
	}

	return 0;
}