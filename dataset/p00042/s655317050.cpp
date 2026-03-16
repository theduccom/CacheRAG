#include<stdio.h>
int dp[1001][1001];
int main(void)
{
	int i,j,k,l;
	int w,n;
	int max;
	int a[1001],b[1001];
	
	scanf("%d",&w);
	l=1;
	while(w!=0){
		max=0;
	scanf("%d",&n);
		for(i=0;i<=n;i++){
			for(j=0;j<=w;j++){
				dp[i][j]=-1;
			}
		}
		for(i=0;i<n;i++){
			scanf("%d,%d",&a[i],&b[i]);
		}
		for(i=0;i<n;i++){
			dp[i][0]=0;	
			for(j=0;j<=w;j++){
				if(dp[i][j]!=-1){
					if(j+b[i]<=w && dp[i][j]+a[i]>=dp[i+1][j+b[i]]){
						dp[i+1][j+b[i]]=dp[i][j]+a[i];
					}
					if(dp[i+1][j]<dp[i][j]){
						dp[i+1][j]=dp[i][j];
					}
				}
			}
		}
		for(j=0;j<=w;j++){
			if(dp[n][j]>max){
				max=dp[n][j];
				k=j;
			}
		}
		printf("Case %d:\n",l);
		printf("%d\n%d\n",max,k);
		scanf("%d",&w);
		l++;
	}
	return 0;
}