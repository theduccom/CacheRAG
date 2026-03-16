#include <bits/stdc++.h>

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
const double EPS  = 1e-10;

int main() {
	int n;
	while (cin >> n, n) {
		int msum = -1, mp = -1;
		REP(i, n) {
			int p, d1, d2;
			scanf("%d %d %d", &p, &d1, &d2);
			int sum = d1 + d2;
			if (chmax(msum, sum)) mp = p;
		}
		printf("%d %d\n", mp, msum);
	}
	return 0;
}