#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	int w,n,index = 1;
	
	while(1){
		int ans_v = 0,ans_w = 0;
		VI value,weight;

		cin >> w;
		if(w == 0) break;
		cin >> n;

		VII dp(n + 1,VI (w + 1,-1));
		dp[0][0] = 0;

		rep(i,n){
			int a,b;
			char ch;
			cin >> a >> ch >> b;
			value.pb(a);
			weight.pb(b);
		}

		rep(i,n){
			rep(j,w + 1){
				if(dp[i][j] == -1) continue;
				dp[i + 1][j] = max(dp[i + 1][j],dp[i][j]); //valle[i]テ」ツつ津ィツカツウテ」ツ?陛」ツ?ェテ」ツ??・ツ?エテ・ツ青?
				if(j + weight[i] <= w){ //value[i]テ」ツつ津ィツカツウテ」ツ?凖・ツ?エテ・ツ青?
					dp[i + 1][j + weight[i]] = max(dp[i + 1][j + weight[i]],value[i] + dp[i][j]);
					
				}
			}
		}

		rep(i,dp[n].size()){
			if(dp[n][i] > ans_v){
				ans_v = dp[n][i];
				ans_w = i;
			}
		}		

		cout << "Case " << index++ << ':' << endl;
		cout << ans_v << endl << ans_w << endl;
	}

	return 0;
}