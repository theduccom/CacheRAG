#include <stdio.h>
#include <math.h>

int main(void)
{
	double a;
	double h;
	double s;
	
	while (scanf("%lf\n%lf", &a, &h), a != 0 ||  h != 0){
		s = 4 * h * h + a * a;
		s = sqrt(s);
		s = a * s + a * a;
		
		printf("%lf\n", s);
	}
	return (0);
}