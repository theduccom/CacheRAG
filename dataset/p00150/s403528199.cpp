#include <iostream>
#include <cstdio>
int prime[10001];

int main(){
	prime[0] = prime[1] = 0;
	for(int i=2;i<=10000;++i){
		if(prime[i]==0){
			prime[i]=1;
			for(int j=i*2;j<=10000;j+=i){
				prime[j]=2;
			}
		}else{
			continue;
		}
	}
	int n;
	while(scanf("%d", &n), n){
		for(int i = n; i >= 2; --i){
			if(prime[i]==1 && prime[i-2]==1){
				printf("%d %d\n",i-2, i);
				break;
			}
		}
	}
}