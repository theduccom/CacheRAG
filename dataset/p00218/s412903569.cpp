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
		REP(i, n) {
			int m, e, j;
			scanf("%d %d %d", &m, &e, &j);
			
			int sum = m + e + j;
			int sum2 = m + e;
			
			int grade = 2;
			if (sum >= 150 && (m >= 80 || e >= 80)) grade = 1;
			if (sum >= 210) grade = 1;
			if (sum >= 240) grade = 0;
			if (sum2 >= 180) grade = 0;
			if (m == 100 || e == 100 || j == 100) grade = 0;
			
			printf("%c\n", grade + 'A');
		}
	}
	return 0;
}