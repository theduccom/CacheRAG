#include<stdio.h>
int n,x;
int kin;
int i,j;
int dp[1000050],flg[1000050];
int main(void){
	scanf("%d %d",&n,&x);
	for(i=1;i<=1000000;i++){
		flg[i]=1;
	}
	for(i=2;i*i<=1000000;i++){
		if(flg[i]==1){
			for(j=2;j*i<=1000000;j++){
				flg[i*j]=0;
			}
		}
	}
	while(n!=0 && x!=0){
		for(j=1;j<=x;j++){
			dp[j]=-1;
		}
		dp[0]=0;
		for(i=0;i<n;i++){
			scanf("%d",&kin);
			for(j=0;j<=x;j++){
				if(dp[j]!=-1 && j+kin<=x){
					dp[j+kin]=1;
				}
			}
		}
		int max=0;
		for(i=0;i<=x;i++){
			if(dp[i]==1 && flg[i]==1){
				max=i;
			}
		}
		if(max==0){
			printf("NA\n");
		}
		else {
			printf("%d\n",max);
		}
		scanf("%d %d",&n,&x);
	}
	return 0;
}