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

//??¨????????????????????????
//n??\????????£??´??°????´???°???????????°???????????????is_prime[]???????´?
void eratos(int n, bool is_prime[]) {
	fill(is_prime, is_prime + n + 1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i*i <= n; i++)
		if (is_prime[i]) {
			int j = i + i;
			while (j <= n) {
				is_prime[j] = false;
				j = j + i;
			}
		}
}

signed main() {
	bool is_prime[200000];
	eratos(200000, is_prime);
	int prime[10001] = {};
	int cnt = 1;
	FOR(i, 2, 200000) {
		if (is_prime[i]) {
			prime[cnt] = i;
			cnt++;
		}
	}
	for (int n; cin >> n&&n;) {
		ll ans = 0;
		FOR(i, 1, n + 1)ans += prime[i];
		cout << ans << endl;
	}
	return 0;
}