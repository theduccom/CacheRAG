#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

vector<char> ch(1000001, 2);

char check(int m){
	FOR(i, 2, sqrt(m)){
		if(m%i==0) return 1;
	}
	
	return 2;
}

int main(){
	ch[0]=ch[1]=1;
	FOR(i, 2, 1000001){
		if(ch[i]==1) continue; 
		
		for(int j=2*i; j<=1000000; j+=i){
			ch[j]=1;
		}
	}
	
	while(1){
		int n, x;
		scanf("%d%d", &n, &x);
		if(n==0) return 0;
		
		vector<int> v(n);
		REP(i, n) scanf("%d", &v[i]);
		
		vector<vector<char> > dp(n+1, vector<char>(x+1, 0));
		dp[0][0]=1;
		REP(i, n){
			REP(j, x+1){
				if(dp[i][j]!=0){
					dp[i+1][j]=dp[i][j];
				}
				else {
					if(j>=v[i] && dp[i+1][j-v[i]]!=0){
						dp[i+1][j]=ch[j];
					}
				}
			}
		}
		
		int ans=-1;
		REP(i, x+1) if(dp[n][i]==2) ans=i;
		
		if(ans!=-1) cout << ans << endl;
		else cout << "NA" << endl;
	}
}