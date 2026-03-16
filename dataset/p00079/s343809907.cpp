#include <stdio.h>
#include <math.h>


double area(double x1, double x2, double x3, double y1, double y2, double y3){
	double a, b, c, z;
	
	a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	z = (a+b+c)/2.0;
	
	return sqrt(z*(z-a)*(z-b)*(z-c));
}

int main(void){
	double x[20], y[20];
	int n;
	double s;
	
	for (n=0; scanf("%lf,%lf",&x[n], &y[n])!=EOF; n++)
	;
	s=0;
	for (int i=2; i<n; i++){
		s += area(x[0],x[i-1],x[i],y[0],y[i-1],y[i]);
//		printf("(0,%d,%d) -> %f\n",i-1,i,area(x[0],x[i-1],x[i],y[0],y[i-1],y[i]));
	}
	printf("%f", s);
	return 0;
}