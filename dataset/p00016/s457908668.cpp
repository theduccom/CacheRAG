#include <stdio.h>
#include <math.h>

double setX(double r, double d)
{
	return r*cos(M_PI/2-d);
}

double setY(double r, double d)
{
	return r*sin(d+M_PI/2);
}

int main (void)
{
	double x=0.0, y=0.0, r=0.0, d=0.0, old_d=0;
	
	do
	{
		scanf("%lf,%lf", &r, &d);
		x+=setX(r, old_d);
		y+=setY(r, old_d);
		old_d+=d*M_PI/180;
	}while(r && d);
	
	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}