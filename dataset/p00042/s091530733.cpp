#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1234567;
const ll INF=1000000010;
const ll LINF=1000000000000000010LL;
const int MAX=10000010;
const double EPS=1e-3;
int dx[4]={0,1,0,1};
int dy[4]={0,0,1,1};
int dp[1010][1010];
int main(){
	int W;
	int c=1;
	while(cin>>W,W){
		int n;cin>>n;
		int v[1010],w[1010];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++)scanf("%d,%d",&v[i],&w[i]);
		for(int i=0;i<=n;i++)for(int j=0;j<=W;j++)dp[i][j]=-INF;
		for(int i=0;i<=n;i++)dp[i][0]=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<=W;j++){
				dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
				if(j+w[i]<=W){
					dp[i+1][j+w[i]]=max(dp[i+1][j+w[i]],dp[i][j]+v[i]);
				}
			}
		}
		int ans=0;
		int m=0;
		for(int i=0;i<=W;i++){
			if(ans<dp[n][i]){
				ans=dp[n][i];
				m=i;
			}
		}
		cout<<"Case "<<c<<":"<<endl;
		cout<<ans<<endl;
		cout<<m<<endl;
		c++;
	}
}

