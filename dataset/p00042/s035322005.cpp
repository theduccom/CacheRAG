#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)
#define MAX_N 1000
#define MAX_W 1000

// dp[i][j]???i????????\?????????????????????????????????j??\?????????????????????????????¨??????????????????????????§????????¨??????
int dp[MAX_N + 1][MAX_W + 1];

int main() {
	int W;
	int count = 1;
	while(cin >> W && W) {
		int n;
		cin >> n;
		int v[MAX_N], w[MAX_N];
		rep(i,n) {
			string s;
			cin >> s;
			string t;
			auto it = s.begin();
			for(; *it != ','; ++it) {
				t += *it;
			}
			v[i] = atoi(t.c_str());
			t = "";
			++it;
			for(; it != s.end(); ++it) {
				t += *it;
			}
			w[i] = atoi(t.c_str());
		}
		rep(i, MAX_N + 1) {
			rep(j, MAX_N + 1) {
				dp[i][j] = 0;
			}
		}
		rep2(i,1,n+1) {
			rep(j,W+1) {
				if(j < w[i - 1]) dp[i][j] = dp[i - 1][j];
				else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
			}
		}
		int ret = W;
		while(1) {
			if(dp[n][ret] != dp[n][ret - 1]) break;
			ret--;
		}
		cout << "Case " << count << ":" << endl;
		cout << dp[n][W] << endl;
		cout << ret << endl;
		count++;
	}
	return 0;
}