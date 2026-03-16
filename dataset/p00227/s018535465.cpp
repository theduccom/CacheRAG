#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <functional>
#include <cmath>
#include <complex>
#include <cctype>
#include <cassert>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <deque>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define fi first
#define se second

template<typename A, typename B> inline bool chmax(A &a, B b) { if (a<b) { a=b; return 1; } return 0; }
template<typename A, typename B> inline bool chmin(A &a, B b) { if (a>b) { a=b; return 1; } return 0; }

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<int, pii> pip;

const ll INF = 1ll<<29;
const ll MOD = 1000000007;
const double EPS = 1e-10;

int n, m;
int p[1000];

int main() {
	while (cin >> n >> m, n || m) {
		REP(i, n) scanf("%d", p + i);
		sort(p, p + n, greater<int>());
		
		int ans = 0;
		REP(i, n) ans += p[i];
		
		for (int i = m - 1; i < n; i += m)
			ans -= p[i];
		
		cout << ans << endl;
	}
	return 0;
}