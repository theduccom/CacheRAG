#include<stdio.h>
int prime[1000001];
int dp[1000001];
int dat[30];
int main(){
	prime[0]=-1;
	prime[1]=-1;
	for(int i=2;i<=1000000;i++){
		if(~prime[i]){
			prime[i]=1;
			for(int j=i*2;j<=1000000;j+=i)prime[j]=-1;
		}
	}
	int a,b;
	while(scanf("%d%d",&a,&b),a){
		for(int i=0;i<a;i++){
			scanf("%d",dat+i);
		}
		for(int j=0;j<=b;j++)dp[j]=0;
		dp[0]=1;
		for(int i=0;i<a;i++){
			for(int j=0;j<=b;j++){
				if(dat[i]<=j&&dp[j-dat[i]])dp[j]=1;
			}
		}
		bool dame=true;
		for(int j=b;j>=0;j--){
			if(prime[j]==1&&dp[j]==1){
				dame=false;
				printf("%d\n",j);
				break;
			}
		}
		if(dame)printf("NA\n");
	}
}