#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,W;
	int v[1000],w[1000];
	for(int cnt = 0;;cnt++){
		cin >> W >> n;
		if(!W) break;
		int dp[1001][1001] = {},ma = 0,mi = 1e+9;
		for(int i = 0;i < n;i++){
			scanf("%d,%d",&v[i],&w[i]);
		}
		dp[0][0] = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 0;j <= W;j++){
				if(j - w[i - 1] >= 0) dp[i][j] = max(dp[i - 1][j],dp[i - 1][j - w[i - 1]] + v[i - 1]);
				else dp[i][j] = dp[i - 1][j];
				if(ma < dp[i][j]){
					ma = dp[i][j];
					mi = j;
				}else if(ma == dp[i][j]) mi = min(mi,j);
			}
		}
		printf("Case %d:\n%d\n%d\n",cnt + 1,ma,mi);
	}
	
	return 0;
}