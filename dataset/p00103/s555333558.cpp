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
	int n; cin >> n;
	rep(i, 0, n) {
		int A[4] = {}, OUT = 0, ans = 0;
		for (string s; cin >> s;) {
			if (s == "HOMERUN") {
				ans++;
				rep(j, 0, 3) { ans += A[j]; A[j] = 0; }
			}
			else if (s == "HIT") {
				rrep(j, 1, 4)A[j] = A[j - 1];
				A[0] = 1;
				ans += A[3];
			}
			else {
				OUT++;
				if (OUT >= 3)break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}