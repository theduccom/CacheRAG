#include <stdio.h>
const int MAX_V = 1000000; // 100????????§??´???°??¨?????????
int number[MAX_V+1];
int isprime(int n) {
 for(int i = 2; i * i <= n; i++) {
	 if(n % i == 0) return 0;
 }
 return 1;
}

int main(){
	int n,i,min,max;
	for(i = 0;i < MAX_V;i++){
		number[i] = isprime(i);
	}
	while(scanf("%d",&n)){
		if(n == 0)break;
		max = 0; min = 0;
		for(i = n;i > 0;i--){
			//printf("%d  ",i);
			if(number[i] && number[i-2]){
				min = i-2;
				max = i;
				//printf("%d %d\n",i,i-2);
				break;
			}
		}
		printf("%d %d\n",min,max);
	}
	return 0;
}