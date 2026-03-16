#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

vi v,w;
int n;
int dp[1010][1010];

int solve(int i,int j){
	if(dp[i][j]>=0) return dp[i][j];
	int res;
	if(i==n) res=0;
	else if(j<w[i]) res=solve(i+1,j);
	else res=max(solve(i+1,j),solve(i+1,j-w[i])+v[i]);
	return dp[i][j]=res;
}

int main(){
	for(int l=1;;l++){
		int W,x,y;
		v.clear(); w.clear();
		cin>>W;
		if(W==0) break;
		cin>>n;
		rep(i,0,n){
			scanf("%d,%d",&x,&y); v.pb(x); w.pb(y);
		}
		memset(dp,-1,sizeof(dp));
		int MAX=0,ans=0;
		rer(i,1,W){
			if(MAX<solve(0,i)){
				MAX=solve(0,i); ans=i;
			}
		}
		cout<<"Case "<<l<<":"<<endl; o(MAX); o(ans);
	}
}