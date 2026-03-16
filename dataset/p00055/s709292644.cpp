#include<iostream>
#include<cstdio>
signed main(){
	double a;
	while( scanf("%lf", &a) != EOF ){
		double sum = a;
		for(int i=1;i<10;i++){
			if(i%2 == 0) a /= 3;
			else a *= 2;
			sum += a;
		}
		printf("%f\n",sum);
	}
	return 0;
}