#include <stdio.h>
#include <math.h>
int main(void){
	double x,h,S;
	while(scanf("%lf %lf",&x,&h)){
		if(x==0 && h==0) break;
		S=x*x+2*x*sqrt(h*h+x*x/4);
		printf("%f\n",S);
	}
	return 0;
}