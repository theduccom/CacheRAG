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

//#define int long long
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
	for (int n; cin >> n&&n;) {
		rep(i, 0, n) {
			int pm, pe, pj; cin >> pm >> pe >> pj;
			if (pm == 100 || pe == 100 || pj == 100)cout << "A" << endl;
			else if (pm + pe >= 180)cout << "A" << endl;
			else if (pm + pe + pj >= 240)cout << "A" << endl;
			else if (pm + pe + pj >= 210)cout << "B" << endl;
			else if (pm + pe + pj >= 150 && (pm >= 80 || pe >= 80))cout << "B" << endl;
			else cout << "C" << endl;
		}
	}
	return 0;
}