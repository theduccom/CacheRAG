#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

bool is_prime(int n){
	if(n<=1) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true; 
}

bool dp[1000100];

signed main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(n+m==0) break;
		vi a(n);
		rep(i,0,n) cin>>a[i];
		//memset(dp,false,sizeof(dp));
		rep(j,0,m+1) dp[j]=false;
		dp[0]=true;
		rep(i,0,n){
			rep(j,0,m+1){
				if(dp[j] && j+a[i]<=m){
					dp[j+a[i]]=true;
				}
			}
		}
		int ans=-1;
		for(int i=m;i>=0;i--){
			//if(dp[i]) o(i);
			if(dp[i] && is_prime(i)){
				ans=i;
				break;
			}
		}
		if(ans==-1) o("NA");
		else o(ans);
	}
}