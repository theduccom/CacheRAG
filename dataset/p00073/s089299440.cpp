#include <stdio.h>
#include <math.h>
int main()
{
	double x,h;
	double S;
	while(1){
		scanf("%lf %lf",&x,&h);
		if(x==0&&h==0)
			break;
		S=x*x;
		S+=x*sqrt(x*x/4+h*h)*2;
		printf("%lf\n",S);
	}
	return 0;
}