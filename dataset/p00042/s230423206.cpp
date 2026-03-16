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

#define MP make_pair
#define PB push_back
#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef long long LL;
typedef vector<int> VI;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int dp[1001][1001];

int main(){
	int W,N,lp=1;
	while(true){
		cin >> W;
		if(W == 0) break;

		cin >> N;
		vector<pair<int,int> > data;
		REP(i,N){
			int a,b;
			char c;
			cin >> a >> c >> b;
			data.PB(MP(a,b));
		}

		

		REP(i,N+1){
			REP(j,W+1){
				dp[i][j] = -1;
			}
		}
		dp[0][0] = 0;

		REP(i, N){
			REP(j, W+1){
				dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
				if(dp[i][j] != -1 && data[i].second+j <= W){
					dp[i+1][data[i].second+j] = max(dp[i+1][data[i].second+j], dp[i][j]+data[i].first);
				}
			}
		}

		int ans1=0, ans2=0;
		REP(i,W+1){
			if(ans1 < dp[N][i]){
				ans1 = dp[N][i];
				ans2 = i;
			}
		}
		cout << "Case " << lp << ":" << endl;
		cout << ans1 << endl;
		cout << ans2 << endl;
		lp++;
	}
}