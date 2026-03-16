#include<stdio.h>
#include<math.h>
int main(void)
{
	int x,h;
	double s,y,n;

	scanf("%d %d",&x,&h);
	while(x!=0 && h!=0){
		n=(x/2.0)*(x/2.0)+h*h;
		y=sqrt(n);
		s=x*x+x*y/2*4;
		printf("%lf\n",s);
		scanf("%d %d",&x,&h);
	}
	return 0;
}