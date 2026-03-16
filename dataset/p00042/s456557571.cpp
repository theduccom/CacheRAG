#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))
#define xyrange(x, minX, maxX, y, minY, maxY) (range(x, minX, maxX) && range(y, minY, maxY))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};
const int INF = INT_MAX / 2;

int W, N;
VI ps, wes;
int cc = 1;

int main(){
	while (cin >> W, W) {
		ps.clear();
		wes.clear();
		cin >> N;
		ps.resize(N);
		wes.resize(N);
		VVI dp(N + 1, VI (W + 1, -1));
		rep(i, N) rep(j, W) dp[i][j] = 0;
		rep(i, N) {
			char c;
			cin >> ps[i] >> c >> wes[i];
		}
		dp[0][0] = 0;
		rep (i, N) {
			rep (j, W + 1) {
				if (dp[i][j] == -1) continue;
				dp[i + 1][j] = max(dp[i + 1][j] ,dp[i][j]);
				if (j + wes[i] <= W) {
					dp[i + 1][j + wes[i]] = max(dp[i + 1][j + wes[i]], dp[i][j] + ps[i]);
				}
			}
		}
		int ans_p = *max_element(all(dp[N]));
		int ans_w = 0;
		rep (i, W + 1) {
			if (dp[N][i] == ans_p) {
				ans_w = i;
				break;
			}
		}
		cout << "Case " << cc++ << ":" << endl;
		cout << ans_p << endl;
		cout << ans_w << endl;
	}
	return 0;
}