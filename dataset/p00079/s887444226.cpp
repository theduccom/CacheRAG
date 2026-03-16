#include <bits/stdc++.h>
using namespace std;

using ll = long long; using ld = long double; using ull = unsigned long long; using uint = unsigned int;
using vi  = vector<int>; using vb  = vector<bool>; using vd  = vector<double>; using vl  = vector<ll>;
using vvi = vector<vi>;  using vvb = vector<vb>;   using vvd = vector<vd>;     using vvl = vector<vl>;

#define REP(i,n) for(ll i=0; i<(n); ++i)
#define FOR(i,b,n) for(ll i=(b); i<(n); ++i)
#define ALL(v) (v).begin(), (v).end()
#define TEN(x) ((ll)1e##x)

template<typename T> inline string join(const vector<T>& vec, string sep = " ") { stringstream ss; REP(i, vec.size()) ss << vec[i] << ( i+1 == vec.size() ? "" : sep ); return ss.str(); }


///////////////

#define EPS (1e-10)
#define NEXT(x, i) (x[(i + 1) % x.size()])

template<class T> using CR = const T &;
using P = complex<ld>;
using G = vector<P>;

ld dot(P a, P b) { return real(conj(a)*b); }
ld cross(P a, P b) { return imag(conj(a)*b); }

ld area2(CR<G> g) {
	ld s = 0;
	REP(i, g.size()) s += cross(g[i], NEXT(g, i));
	return s;
}

//////////////

int main() {
#ifdef INPUT_FROM_FILE
	ifstream cin("sample.in");
	ofstream cout("sample.out");
#endif
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(30);


	G g;
	ld x, y;
	char c;
	while (cin >> x >> c >> y) g.push_back({ x, y });
	
	cout << abs(area2(g)) / 2 << endl;

	return 0;
}