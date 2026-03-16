#include <stdio.h>

int isprime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n,i,prime[10000];
	for(i=3;i<10000;i++){
		prime[i]=isprime(i);
	}
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		for(i=n;i>=3;i--){
			if(prime[i]==1&&prime[i-2]==1){
				printf("%d %d\n",i-2,i);
				break;
			}
		}
	}
	return 0;
}