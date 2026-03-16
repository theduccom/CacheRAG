#include<stdio.h>
	int isprime(int n){
		for(int i=2;i*i<=n;i++){
			if(n%i==0)return 0;
		}
		return 1;
	}
	int main(){
		int v,k;
		while(1){
			scanf("%d",&v);
			if(v==0)break;
			for(k=v;k>=0;k--){
				if(isprime(k)==1 && isprime(k-2)==1){
					printf("%d %d\n",k-2,k);
					break;
				}
			}
		}
		return 0;
	}