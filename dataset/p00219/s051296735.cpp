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
		int cnt[10] = {};
		REP(i, n) {
			int c; scanf("%d", &c);
			cnt[c]++;
		}
		
		REP(i, 10) {
			if (cnt[i] == 0) putchar('-');
			else REP(j, cnt[i]) putchar('*');
			puts(""); 
		}
	}
	return 0;
}