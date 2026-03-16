#include <stdio.h>

int main(void){
	double max, min;
	double h;
	max = 0;
	min = 100000000;

	while(scanf("%lf", &h) != EOF){
		if(max < h) max = h;
		if(min > h) min = h;
	}

	printf("%f\n", max - min);

	return 0;
}