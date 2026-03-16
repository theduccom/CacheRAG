#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = (1LL << 31) - 1;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1
#define MAX_N 100100 * 3

//<expr>   :: = <term>[('+' | '-') <term>] *
//<term>   :: = <factor>[('*' | '/') <factor>] *
//<factor> :: = <number> | '(' <expr> ')'
//<number> : == 1?????\????????°???


ll number(string& s, ll& i);
ll term(string& s, ll& i);
ll factor(string& s, ll& i);
ll expr(string& s, ll& i);

ll number(string& s, ll& i) {
	ll n = s[i++] - '0';
	while (isdigit(s[i])) n = n * 10 + s[i++] - '0';
	return n;
}

ll factor(string& s, ll& i) {
	if (isdigit(s[i])) return number(s, i);

	// ????????§?§?????????£???????????° s[i] == '(' ??¨??????
	i++; // '('??????????£???°???
	ll ret = expr(s, i);
	i++; // ')'??????????£???°???
	return ret;
}

ll term(string& s, ll& i) {
	ll val = factor(s, i);
	while (s[i] == '*' || s[i] == '/') {
		char op = s[i];
		i++;
		int val2 = factor(s, i);
		if (op == '*') val *= val2;
		else val /= val2;
	}
	return val;
}

ll expr(string& s, ll& i) {
	ll val = term(s, i);
	while (s[i] == '+' || s[i] == '-') {
		char op = s[i];
		i++;
		int val2 = term(s, i);
		if (op == '+') val += val2;
		else val -= val2;
	}
	return val;
}

int n;
ll pos = 0;
string s;

int main() {
	cin >> n;
	REP(i,n){
		cin >> s;
		pos = 0;
		cout << expr(s, pos) << endl;
	}
}