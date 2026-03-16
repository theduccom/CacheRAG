#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>

using namespace std;

#define all(c) ((c).begin()), ((c).end())
#define debug(c) cerr << "> " << #c << " = " << (c) << endl;
#define iter(c) __typeof((c).begin())
#define tr(i, c) for (iter(c) i = (c).begin(); i != (c).end(); i++)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)

#define mp make_pair
#define fst first
#define snd second
#define pb push_back


const double EPS = 1e-10;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef complex<double> P;


inline double inp(const P &a, const P &b) {
	return (conj(a) * b).real();
}

inline double outp(const P &a, const P &b) {
	return (conj(a) * b).imag();
}

P circumc(const P &a, const P &b, const P &c) {
	return (a + b - (inp(c - b, a - c) / outp(b - a, c - b)) * (b - a) * P(0, 1)) / 2.0;
}

int main(){
	int n; cin >> n;
	while (n--) {
		double x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		P p1(x1, y1), p2(x2, y2), p3(x3, y3);
		P c = circumc(p1, p2, p3);
		double r = abs(p1 - c);
		double x = c.real();
		double y = c.imag();
		if (fabs(x + 0.0005) < 0.001) x = 0;
		if (fabs(y + 0.0005) < 0.001) y = 0;
		printf("%.3f %.3f %.3f\n", x, y, r);
	}
	return 0;
}