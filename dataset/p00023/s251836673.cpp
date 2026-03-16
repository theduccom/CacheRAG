#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str();}
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EACH(t,i,c) for(t::iretator i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n-1)
const double EPS = 1e-10;
const double PI = acos(-1.0);

#include <complex>
typedef complex<double> P;

struct L {
	P a, b;
	L(const P &a, const P &b) : a(a), b(b) { }
};

struct C {
	P p; double r;
	C(const P p, double r) : p(p), r(r) { }
};

double dot(P a, P b) {
	return real(conj(a)*b);
}

double cross(P a, P b) {
	return imag(conj(a)*b);
}

bool LLcross(L l1, L l2) {
	return abs(cross(l1.b-l1.a, l2.b-l2.a)) > EPS || abs(cross(l1.b-l1.a, l2.b-l1.a)) < EPS;
}

double dist(P p1, P p2) {
	return sqrt((p2.real()-p1.real())*(p2.real()-p1.real()) + (p2.imag()-p1.imag())*(p2.imag()-p1.imag()));
}

int main() {
	int n;
	cin >> n;

	REP(i, n) {
		double x, y, r;
		cin >> x >> y >> r;
		C c1(P(x, y), r);

		cin >> x >> y >> r;
		C c2(P(x, y), r);

		double d = dist(c1.p, c2.p);
		int ans;
		
		if(c2.r-d-c1.r > EPS) {
			ans = -2;
		} else if (c1.r-d-c2.r > EPS){
			ans = 2;
		} else if (d-c2.r-c1.r < EPS) {
			ans = 1;
		} else {
			ans = 0;
		}

		cout << ans << endl;
	}

	return 0;
}