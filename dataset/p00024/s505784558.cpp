#include<stdio.h>

int main(){
	double a;
	
	while(~scanf("%lf",&a)){
		double t=a/9.8;
		double x=t*t*4.9;
		int ans=(x+5)/5+1;
		printf("%d\n",ans);
	}
}