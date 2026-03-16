#include<stdio.h>
#include<math.h>
int main(void)
{
	double x,h,c;
	while(1){
		scanf("%lf %lf",&x,&h);
		if(x == 0.0 && h == 0.0) break;
		c = (x/2.0)*(x/2.0) + h*h;
		c = sqrt(c);
		c = x*x + x*c/2.0*4.0;
		printf("%lf\n",c);
	}
	return 0;
}