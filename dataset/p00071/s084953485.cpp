#include<iostream>
#include<iomanip>
#include<algorithm>
#include<array>
#include<bitset>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()
#define dump(o) {cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) {cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
const int MOD = 1e9 + 7;

signed main() {
	int n; cin >> n;
	rep(d, 1, n + 1) {
		char g[8][8];
		rep(y, 0, 8)rep(x, 0, 8)cin >> g[x][y];
		int X, Y; cin >> X >> Y; X--; Y--;
		queue<pii> q;
		q.push(pii(X, Y));
		rep(i, -3, 4) q.push(pii(X + i, Y));
		rep(i, -3, 4) q.push(pii(X, Y + i));
		while (!q.empty()) {
			pii c = q.front(); q.pop();
			if (g[c.first][c.second] == '0')continue;
			if (c.first < 0 || c.second < 0 || c.first >= 8 || c.second >= 8)continue;
			g[c.first][c.second] = '0';
			rep(i, -3, 4) q.push(pii(c.first + i, c.second));
			rep(i, -3, 4) q.push(pii(c.first, c.second + i));
		}
		cout << "Data " << d << ":" << endl;
		rep(y, 0, 8) { rep(x, 0, 8)cout << g[x][y]; cout << endl; }
	}
	return 0;
}