#include <stdio.h>
#include <math.h>
#include <string>
const int MAX_V = 10000;
int prime[MAX_V+1];

int isprime(){
	int i, k, v;
	for(i = 2; i <= MAX_V; i++) {
		prime[i] = 1;
	}
	for(i = 2; i*i <= MAX_V; i++) {
		if(prime[i]) {
			for(k = 2 * i; k <= MAX_V; k += i) {
				prime[k] = 0;
			}
		}
	}
}
int main(){
	int n,i;
	isprime();
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		for(i = n;i>=2;i--){
			if(prime[i]==1&&prime[i-2]==1){
				printf("%d %d\n",i-2,i);
				break;
			}
		}
	}
	return 0;
}