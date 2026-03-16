#include <stdio.h>

int main(void){
	double a;
	double s = 0;

	while(scanf("%lf", &a) != EOF){
		s = a;
		for(int i=2; i<=10; i++){
			if(i%2 == 0){
				a = a*2;
				s += a;
			}else{
				a = a/3;
				s += a;
			}
		}
		printf("%.8f\n", s);
	}

	return 0;
}