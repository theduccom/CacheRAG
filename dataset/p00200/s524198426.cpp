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
typedef pair<int, pll> pip;
const ll INF = 1ll<<29;
const ll MOD = 1000000007;
const double EPS  = 1e-9;

int n, m;
int d[2][100][100]; // cost time

int main() {
	while (cin >> n >> m, n | m) {
		fill(d[0][0], d[2][0], INF);
		
		REP(i, n) {
			int a, b, c, t;
			scanf("%d %d %d %d", &a, &b, &c, &t);
			a--; b--;
			chmin(d[0][a][b], c);
			chmin(d[0][b][a], c);
			chmin(d[1][a][b], t);
			chmin(d[1][b][a], t);
		}
		
		REP(s, 2) {
			REP(k, m) REP(i, m) REP(j, m) chmin(d[s][i][j], d[s][i][k] + d[s][k][j]);
		}
		
		int k;
		scanf("%d", &k);
		while (k--) {
			int p, q, r;
			scanf("%d %d %d", &p, &q, &r);
			printf("%d\n", d[r][p - 1][q - 1]);
		}
	}
	return 0;
}