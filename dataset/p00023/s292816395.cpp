#include <stdio.h>
#include <math.h>

int main()
{
	int n, t;
	double x1, y1, r1, x2, y2, r2;
	double d;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

		d = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);

		if (d > (r1 + r2)*(r1 + r2)) t = 0;
		else if (d < (r2-r1)*(r2-r1)){
			if (r2 < r1) t = 2;
			else if (r2 > r1) t = -2;
		}else t = 1;

		printf("%d\n", t);
	}

	return 0;
}