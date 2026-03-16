#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cmath>
#include <cstring>

using namespace std;

#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,j,k) for(int i=j;i<(k);i++)
#define foreach(T,c,i) for(T::iterator i=c.begin();i!=c.end();i++)
typedef vector<int> Array;
typedef vector<Array> Mat;
const int INF = 99999999;
int N,W,a,b,ans_num=0;
const int MAX_N = 1000;
const int MAX_W = 1000;
int dp[MAX_N+1][MAX_W+1];
Array v,w;

void solve()
{
	rep(i,N) rep(j,W+1){
		if(j<w[i]){
			dp[i+1][j] = dp[i][j];
		}else{
			dp[i+1][j] = max(dp[i][j],dp[i][j-w[i]]+v[i]);
		}
	}
	cout << dp[N][W] << endl;
	int MIN = INF;
	rep(i,N+1)rep(j,W+1){
		if(dp[i][j]==dp[N][W]) MIN = min(MIN,j);
	}
	cout << MIN << endl;
	
}
		
int main(){
	while(1){
		cin >> W >> N;
		if(W==0) return 0;
		ans_num++;
		memset(dp,0,sizeof(dp));
		v.clear();
		w.clear();
		rep(i,N){
			scanf("%d,%d",&a,&b);
			v.pb(a);
			w.pb(b);
		}
		cout << "Case " << ans_num << ":" << endl;
		solve();
	}	
	return 0;	
}