#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int dp[2000][2000];



int main(){
	int W;
	int n;
	int c=0;
	while(cin>>W){
		c++;
		if(W==0)break;
		char ch;
		int w[2000],v[2000];
		rep(i,2000)rep(j,2000)dp[i][j]=-999999999;
		cin>>n;
		rep(i,n){
			cin>>v[i]>>ch>>w[i];
		}

		int maxval=-1;
		int maxwait=-1;

		dp[0][0]=0;
		for(int i=1;i<=n;i++){
			rep(j,W+1){
				dp[i][j] = max(dp[i][j],dp[i-1][j]);
				if(j-w[i-1]>=0)
					dp[i][j] = max(dp[i][j],dp[i-1][j-w[i-1]]+v[i-1] );

				if(maxval<dp[i][j]){
					maxval=dp[i][j];
					maxwait=j;
				}
				if(maxval==dp[i][j] && maxwait>j){
					maxval=dp[i][j];
					maxwait=j;
				}
//				cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
			}
		}
		cout<<"Case "<<c<<":"<<endl;
		cout<<maxval<<endl;
		cout<<maxwait<<endl;
	}
}