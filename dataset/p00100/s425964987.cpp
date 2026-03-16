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

#define int long long
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
	int E[4010] = {};
	bool F[4010] = {};
	for (int n; cin >> n&&n;) {
		memset(E, 0, sizeof(E));
		memset(F, 0, sizeof(F));
		bool flag = true;
		rep(i, 0, n) {
			int e, p, q; cin >> e >> p >> q;
			E[e] += p*q;
			if (E[e] >= 1000000 && !F[e]) {
				flag = false;
				F[e] = true;
				cout << e << endl;
			}
		}
		if (flag)cout << "NA" << endl;
	}
	return 0;
}