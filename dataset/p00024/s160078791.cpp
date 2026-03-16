#include <stdio.h>
#include <math.h>

int rheight(double h){
	return (int)ceil(h / 5) + 1;
}

int main(void){
	double v = 0.0;
	double t, y;
	while(scanf("%lf", &v) != EOF){
		y = v * v / 9.8 / 2;
		printf("%d\n", rheight(y));
	}
	return 0;
}