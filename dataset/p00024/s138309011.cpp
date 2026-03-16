#include <stdio.h>

int main()
{
	int n;
	double v, y;

	while(scanf("%lf", &v) != EOF){
		y = v*v/19.6;

		n = (int)((y+5)/5);

		if((double)n < (y+5)/5) n++;
	
		printf("%d\n", n);
	}

	return 0;
}