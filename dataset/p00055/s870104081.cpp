#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	double a, s[10], sum;
	
	
	while(scanf("%lf", &a) != EOF){
		sum = s[0] = a;
		for(int i = 1; i < 10; i++){
			if(i % 2 != 0){
				s[i] = s[i-1] * 2;
			}else {
				s[i] = s[i-1] / 3;
			}
			sum += s[i];
		}
	
		printf("%.8f\n", sum);
	}
	
	return 0;
}	