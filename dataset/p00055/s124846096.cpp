#include <stdio.h>

int main(){
	double a;
	while(scanf("%lf",&a) != EOF){
		printf("%.8f\n",a * 211 / 27);
	}
	return 0;
}