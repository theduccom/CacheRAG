#include<stdio.h>
	   const int MAX_V = 1000000;
	   int prime[MAX_V+1];
	   int main(){
	   	int i,k,v,m=2;
	   	for(i=m;i<=MAX_V;i++){
	   		prime[i]=1;
	   	}
	   	for(i=m;i*i<=MAX_V;i++){
	   		if(prime[i]){
	   			for(k=2*i;k<=MAX_V;k+=i){
	   				prime[k]=0;
	   			}
	   		}
	   	}
	   	while(scanf("%d",&v)!=EOF){
	   		if(v==0)break;
	   		for(i=v;i>=m;i--){
	   			if(prime[i]==1 && prime[i-2]==1){
	   				printf("%d %d\n",i-2,i);
	   				break;
	   			}
	  	   	}
	  	}
	   	return 0;
	  }