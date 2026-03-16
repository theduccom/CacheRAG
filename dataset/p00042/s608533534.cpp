#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
	int ww,n,c=1,p;
	while(cin>>ww,ww){
		cin>>n;
		int w[n+1],v[n+1],dp[n+1][ww+1];
		r(i,0,n+1)r(j,0,ww+1)dp[i][j]=0;
		r(i,1,n+1)scanf("%d,%d",&v[i],&w[i]);
		r(i,1,n+1){int p=1;
			r(j,1,ww+1){
				if(j<w[i])dp[i][j]=dp[i-1][j];
				else dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
		r(i,0,ww+1)if(dp[n][i]<dp[n][ww])p=i;
		printf("Case %d:\n%d\n%d\n",c++,dp[n][ww],p+1);
	}
}