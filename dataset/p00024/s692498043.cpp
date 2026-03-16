#include <stdio.h>

int main(void){
	double N;
	double v;
	while(scanf("%lf",&v)!=EOF){
		N=v*v/(10.0*9.8)+1.0;
		printf("%d\n",(int)(N) + 1);
	}
	return 0;
}