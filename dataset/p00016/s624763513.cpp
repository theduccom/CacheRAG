#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

double dtor(int d){
	return d / 180.0 * M_PI;
}

int main(void){
	double x = 0.0, y = 0.0;
	int d = 0,a = 0, an = 90;

	while(true){
		scanf("%d,%d", &d, &a);
		if(d == 0 && a == 0){ break; }
		x += d * cos(dtor(an));
		y += d * sin(dtor(an));
		an -= a;
	}
	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}