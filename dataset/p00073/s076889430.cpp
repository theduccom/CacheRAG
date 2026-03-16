#include <stdio.h>
#include <math.h>

int main(void) {
	int x, h;
	double S;
	
	while(1) {
		S = 0;
		scanf("%d %d", &x, &h);
		if(!x && !h)
			break;

		S += x * x;
		S += x * sqrt(x * x + 4 * h * h);

		printf("%lf\n", S);
	}

	return 0;
}