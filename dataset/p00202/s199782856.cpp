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

vector<int> sieve(int n) {
	vector<int> res;
	vector<bool> is_prime(n + 1, true);
	
	is_prime[0] = is_prime[1] = false;
	
	for (int i = 2; i * i <= n; i++) if (is_prime[i]) {
		res.push_back(i);
		is_prime[i] = false;
		for (int j = 2; i * j <= n; j++) if (is_prime[i * j]) {
			is_prime[i * j] = false;
		}
	}
	
	REP(i, n + 1) if (is_prime[i]) res.push_back(i);
	sort(res.begin(), res.end());
	return res;
}

int n, x;
int v[30];

int main() {
	vector<int> prime = sieve(1000000);
	
	while (cin >> n >> x, n || x) {
		REP(i, n) scanf("%d", v + i);
		
		bitset<1000001> bs(1);
		REP(i, x + 1) if (bs[i]) {
			REP(j, n) if (i + v[j] <= x) bs[i + v[j]] = 1;
		}
		
		int ans = -1;
		int p = upper_bound(ALL(prime), x) - prime.begin() - 1;
		
		while (p >= 0) {
			if (bs[prime[p]]) {
				ans = prime[p];
				break;
			}
			p--;
		}
		
		if (ans == -1) puts("NA");
		else cout << ans << endl;
	}
	return 0;
}