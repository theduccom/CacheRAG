
#include "bits/stdc++.h"

using namespace std;
using ll = long long;
const double pi = acos(-1);
#define FOR(i,a,b) for (ll i=(a),__last_##i=(b);i<__last_##i;i++)
#define RFOR(i,a,b) for (ll i=(b)-1,__last_##i=(a);i>=__last_##i;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define __GET_MACRO3(_1, _2, _3, NAME, ...) NAME
#define rep(...) __GET_MACRO3(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define rrep(...) __GET_MACRO3(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)
template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) {
	REP(i, v.size()) { if (i)os << " "; os << v[i]; }return os;
}
template<typename T> ostream& operator<<(ostream& os, const vector<vector<T>>& v) {
	REP(i, v.size()) { if (i)os << endl; os << v[i]; }return os;
}

vector<ll> sieve(ll n);

int main() {
	ll n;
	ll x;
	ll count;
	vector<ll> prime;
	vector<bool> is_prime(50000 + 1, true);

	is_prime[0] = is_prime[1] = false;

	REP(i, 50000 + 1) {
		if (is_prime[i]) {
			prime.push_back(i);

			for (ll j = 2 * i; j <= 50000; j += i) {
				is_prime[j] = false;
			}
		}
	}

	while (true) {
		count = 0;

		cin >> n;

		if (n == 0) {
			break;
		}

		if (n % 2 == 0) {
			x = n / 2;
		}
		else {
			x = (n - 1) / 2;
		}

		REP(i, x + 1) {
			if (is_prime[i] == true && is_prime[n - i] == true) {
				count++;
			}
		}

		cout << count << endl;
	}
}