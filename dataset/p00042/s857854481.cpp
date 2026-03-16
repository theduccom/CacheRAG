#include<stdio.h>
#include<algorithm>
using namespace std;
int c[1000],d[1000];
int dp[1001][1001];
int main(){
	int a,b;
	int now=0;
	while(scanf("%d",&a),a){
		scanf("%d",&b);
		for(int i=0;i<b;i++){
			scanf("%d,%d",c+i,d+i);
		}
		for(int i=0;i<=b;i++)
			for(int j=0;j<=a;j++)
				dp[i][j]=-99999999;
		for(int i=0;i<=a;i++)dp[0][i]=0;
		for(int i=1;i<=b;i++){
			for(int j=0;j<=a;j++){
				if(j>=d[i-1])dp[i][j]=max(dp[i-1][j],dp[i-1][j-d[i-1]]+c[i-1]);
				else dp[i][j]=dp[i-1][j];
			}
		}
		int weight=0;
		int ans=0;
		for(int i=0;i<=a;i++){
			if(weight<dp[b][i]){
				weight=dp[b][i];
				ans=i;
			}
		}
		printf("Case %d:\n%d\n%d\n",++now,weight,ans);
	}
}