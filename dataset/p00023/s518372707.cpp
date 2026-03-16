#include <stdio.h>
#include <math.h>

int
main(void)
{
	char line[80];
	int n;
	double xa, ya, ra, xb, yb, rb;
	
	while (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%d", &n) == 1) {
			for (int i = 0; i < n; i++) {
				if (fgets(line, sizeof line, stdin) == NULL) {
					return 1;
				}
				if (sscanf(line, "%lf %lf %lf %lf %lf %lf",
						   &xa, &ya, &ra, &xb, &yb, &rb) != 6) {
					return 1;
				}

				double d = sqrt((xb - xa)*(xb - xa) + (yb - ya)*(yb - ya));
				
				int rt;
				if (ra + rb < d) {
					rt = 0;
				} else if (fabs(ra - rb) <= d) {
					rt = 1;
				} else if (ra - rb > d) {
					rt = 2;
				} else {
					rt = -2;
				}

				printf("%d\n", rt);
			}
		}
	}

	return 0;
}