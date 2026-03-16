#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
using P   = pair<ll, ll>;
using mat = vector<vector<ll>>;
typedef string::const_iterator State;
class ParseError {};

void IOS() { ios::sync_with_stdio(false), cin.tie(0); }

const ll INF = 1e16;
const ll MOD = 1e9 + 7;
const ld EPS = 1e-12;

template <typename T>
void dump(T x) { cout << x << endl; }
void dumpf(ld x, int t) { cout << setprecision(t) << fixed << x << endl; }
template <typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val) {
	fill((T *)array, (T *)(array + N), val);
}
inline ll mod(ll a, ll b) {
	if (a > 0) return a % b;
	if (a % b == 0) return 0;
	ll x = -a / b + 1;
	a += x * b;
	return a % b;
}
ll powm(ll a, ll b, ll c) {
	if (b == 0)
		return 1;
	else if (b % 2 == 0) {
		ll d = powm(a, b / 2, c);
		return (d * d) % c;
	} else
		return (a * powm(a, b - 1, c)) % c;
}
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

//ll dx[4] = {1, 0, -1, 0};
//ll dy[4] = {0, 1, 0, -1};

ll number(State &);
ll factor(State &);
ll term(State &);
ll expr(State &);

ll number(State &begin) {
	ll ret = 0;
	while (isdigit(*begin)) {
		ret *= 10;
		ret += *begin - '0';
		begin++;
	}
	return ret;
}
ll factor(State &begin) {
	if (*begin == '(') {
		begin++;
		ll ret = expr(begin);
		begin++;
		return ret;
	} else {
		return number(begin);
	}
}
ll term(State &begin) {
	ll ret = factor(begin);
	while (1) {
		if (*begin == '*') {
			begin++;
			ret *= factor(begin);
		} else if (*begin == '/') {
			begin++;
			ret /= factor(begin);
		} else {
			break;
		}
	}
	return ret;
}
ll expr(State &begin) {
	ll ret = term(begin);
	while (1) {
		if (*begin == '+') {
			begin++;
			ret += term(begin);
		} else if (*begin == '-') {
			begin++;
			ret -= term(begin);
		} else {
			break;
		}
	}
	return ret;
}

int main() {
	ll n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);

		State begin = s.begin();
		dump(expr(begin));
	}
	return 0;
}
