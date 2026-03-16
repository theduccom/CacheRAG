#include <stdio.h>
#include <math.h>

int
main(void)
{
	char line[80];
	double v0;

	while (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%lf", &v0) != 1) {
			return 1;
		}

		int n = 1;
		while (n > 0) {
			double y = 5.0 * n - 5.0;
			double t = sqrt(y/4.9);
			double v = 9.8 * t;
			if (v >= v0) {
				printf("%d\n", n);
				break;
			}
			n++;
		}
	}

	return 0;
}