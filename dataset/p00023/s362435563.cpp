#include <stdio.h>
#include <math.h>

int main(void){
	int n = 0;
	double xa, ya, ra, xb, yb, rb;
	double d = 0.0;
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		scanf("%lf %lf %lf %lf %lf %lf",
			&xa, &ya, &ra, &xb, &yb, &rb);
		d = sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));

		if(d > ra+rb){
			puts("0");
		}else if(ra > d+rb){
			puts("2");
		}else if(rb > d+ra){
			puts("-2");
		}else{
			puts("1");
		}
	}
	return 0;
}