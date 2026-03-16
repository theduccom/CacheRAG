#include <stdio.h>

int n,m[50];
bool prime[1000000],c[1000000];

void saiki(int total){
	int i;
	
	c[total]=1;
	
	for( i=total ; i>=0 ; i--){
		if(c[i]==1){
			for(int j=0;j<n;j++){
				if(i-m[j]>=0){
					c[i-m[j]]=1;
				}
			}
		}
	}
}




int main(void)
{
	int i,j;
	//f
	prime[0]=1;
	prime[1]=1;
	for(i=3;i<1000000;i++){
		if(i%2==0){
			prime[i]=1;
		}
	}
	for(i=3;i<1000000;i+=2){
		if(prime[i]==0){
			for(j=(i+i);j<1000000;j+=i){
				prime[j]=1;
			}
		}
	}
	//
	while(1){
		int x;
		int flg=0;
		scanf("%d%d",&n,&x);
		if(n==0)break;
		
		for(i=0;i<n;i++){
			scanf("%d",&m[i]);
		}
		saiki(x);
		//
		for(i=0;i<x;i++){
			if(c[i]==1 && prime[x-i]==0){
				flg=1;
				break;
			}
		}
		if(flg==1){
			printf("%d\n",x-i);
		}
		else puts("NA");
		for(i=0;i<1000000;i++){
			c[i]=0;
		}
		for(i=0;i<50;i++){
			m[i]=0;
		}
		//
	}
	
	return 0;
}