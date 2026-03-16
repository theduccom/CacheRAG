#include <stdio.h>
#include <math.h>

int main(void){
	int n;
	double x1, y1, x2, y2, x3, y3;
	double r, xp, yp;

	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

		xp = (1/2.0) * ((x1*x1 + y1*y1)*(y3 - y2) + (x2*x2 + y2*y2)*(y1 - y3) + (x3*x3 + y3*y3)*(y2 - y1)) / (x1*(y3 - y1) + x2*(y1 - y3) + x3*(y2 - y1));
		yp = -(x3 - x2)/(y3 - y2) * xp + (1/2.0) * (x3*x3 - x2*x2 + y3*y3 - y2*y2) / (y3 - y2);
		r = sqrt((x1 - xp)*(x1 - xp) + (y1 - yp)*(y1 - yp));

		printf("%.3f %.3f %.3f\n", xp, yp, r);
	}

	return 0;
}