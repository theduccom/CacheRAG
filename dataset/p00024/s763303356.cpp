#include<stdio.h>

int main(void){

	double v;
	double t;
	double y;

	while(scanf("%lf",&v)!=EOF){

		t = v / 9.8 ;

		y = 4.9*t*t;

		printf("%d\n",(int)((y+5.0)/5)+1);

	}

	return 0;

}