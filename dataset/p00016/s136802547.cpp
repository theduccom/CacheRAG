#include <stdio.h>
#include <math.h>

#define PI (3.14159265358979)
#define deg2rad(_a) ((_a) / 180.0 * PI)

int
main(void)
{
	char line[80];
	int h;
	int r;
	double s = 0.0;
	double x = 0.0;
	double y = 0.0;

	while (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%d,%d", &h, &r) == 2) {
			if (h == 0 && r == 0) {
				break;;
			}

			x += sin(deg2rad(s)) * (double)h;
			y += cos(deg2rad(s)) * (double)h;

			s += r;
			if (s > 180.) {
				s -= 360.0;
			} else if (s < -180.) {
				s += 360.0;
			}
		}
	}

	printf("%d\n%d\n", (int)x, (int)y);

	return 0;
}