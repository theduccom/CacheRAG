#include <stdio.h>

int isprime(int n) {
 for(int i = 2; i * i <= n; i++) {
	 if(n % i == 0) return 0;
 }
 return 1;
}

int main(){
	int n,i,min,max;
	int number[10000+1] = {0};
	for(i = 2;i < 10000;i++){
		number[i] = isprime(i);
	}
	while(scanf("%d",&n)){
		if(n == 0)break;
		max = 0; min = 0;
		for(i = 2;i <= n;i++){
			if(number[i] && number[i-2]){
				min = i-2;
				max = i;
				//printf("%d %d\n",i-2,i);
			}
		}
		printf("%d %d\n",min,max);
	}
	return 0;
}