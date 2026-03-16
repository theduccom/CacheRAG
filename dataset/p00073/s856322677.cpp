#include<stdio.h>
#include<math.h>
int main(void)
{
	double x,h,s,x1,h1,s1,s2;
	scanf("%lf",&x);
	scanf("%lf",&h);
	while(!(x==0.0 && h==0.0)){
		
		s=sqrt(h*h+x/2*x/2);
		x1=x*x;
		s1=x*s/2*4+x1;
		
		printf("%lf\n",s1);
		scanf("%lf",&x);
		scanf("%lf",&h);
	}
	return 0;
}