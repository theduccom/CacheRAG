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
#include<queue>
#include<vector>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)
#define ALL(a) (a).begin(),(a).end()
#define DUMP(o) {cerr<<#o<<" "<<o<<endl;}
#define DUMPC(o) {cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
const int MOD = 1e9 + 7;

signed main() {
	while (true) {
		char f[11][11];
		int x = -1, y = -1;
		REP(i, 8)REP(j, 8) {
			if (!(cin >> f[j][i]))return 0;
			if (f[j][i] == '1'&&x == -1) {
				x = j; y = i;
			}
		}
		string ans;
		if (f[x + 3][y] == '1') {
			ans = "C";
		}
		else if (f[x][y + 3] == '1') {
			ans = "B";
		}
		else if (f[x + 1][y] == '1') {
			//AEG
			if (f[x][y + 1] == '0') ans = "E";
			else if (f[x + 1][y + 1] == '1') ans = "A";
			else ans = "G";
		}
		else {
			//DF
			if (f[x + 1][y + 1] == '1') ans = "F";
			else ans = "D";
		}
		cout << ans << endl;
	}
	return 0;
}