#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void){
	int n , i , buf;
	float x1,x2,x3,y1,y2,y3,a1,a2,b1,b2,c1,c2,xp,yp,r;
	scanf("%d" , &n);
	for(i=1;i<=n;i++){
		scanf("%f %f %f %f %f %f" , &x1 , &y1 , &x2 , &y2 , &x3 , &y3);
		a1 = 2 * (x2 - x1);
		b1 = 2 * (y2 - y1);
		c1 = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2;
		a2 = 2 * (x3 - x1);
		b2 = 2 * (y3 - y1);
		c2 = x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3;
		xp = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
		yp = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
		r = sqrt((xp - x1) * (xp - x1) + (yp - y1) * (yp - y1));
		printf("%.3f %.3f %.3f\n" , xp , yp , r);
	}
	return 0;
}