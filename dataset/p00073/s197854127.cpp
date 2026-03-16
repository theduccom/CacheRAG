#include <cstdio>
#include <cmath>

int main(void)
{
	int x, h;
	
	while (scanf("%d %d", &x, &h)){
		if (x == 0 && h == 0) break;
		
		double res = 0;
		
		res = (x * sqrt((4 * h * h) + (x * x))) + (x * x);
		
		printf("%.6lf\n", res);
	}
	
	return (0);
}