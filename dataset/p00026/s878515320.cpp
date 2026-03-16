#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> P;

#define EACH(i,a) for (auto& i : a)
#define FOR(i,a,b) for (ll i=(a);i<(b);i++)
#define RFOR(i,a,b) for (ll i=(b)-1;i>=(a);i--)
#define REP(i,n) for (ll i=0;i<(n);i++)
#define RREP(i,n) for (ll i=(n)-1;i>=0;i--)
#define debug(x) cout<<#x<<": "<<x<<endl
#define pb push_back
#define ALL(a) (a).begin(),(a).end()

const ll linf = 1e18;
const int inf = 1e9;
const double eps = 1e-12;
const double pi = acos(-1);

template<typename T>
istream& operator>>(istream& is, vector<T>& vec) {
	EACH(x,vec) is >> x;
	return is;
}
template<typename T>
ostream& operator<<(ostream& os, vector<T>& vec) {
	REP(i,vec.size()) {
		if (i) os << " ";
		os << vec[i];
	}
	return os;
}
template<typename T>
ostream& operator<<(ostream& os, vector< vector<T> >& vec) {
	REP(i,vec.size()) {
		if (i) os << endl;
		os << vec[i];
	}
	return os;
}

vector< vector<int> > v[3] = {
	{
		{0,1,0},
		{1,1,1},
		{0,1,0},
	},
	{
		{1,1,1},
		{1,1,1},
		{1,1,1},
	},
	{
		{0,0,1,0,0},
		{0,1,1,1,0},
		{1,1,1,1,1},
		{0,1,1,1,0},
		{0,0,1,0,0},
	},
};

int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(0);
	int x, y, sz;
	const int W = 10, H = 10;
	vector< vector<int> > m(H, vector<int>(W, 0));
	while ( scanf("%d,%d,%d", &x, &y, &sz) != EOF ) {
		--sz;
		x -= v[sz].size()/2;
		y -= v[sz].size()/2;
		REP(dy, v[sz].size()) {
			REP(dx, v[sz][dy].size()) {
				int nx = x + dx, ny = y + dy;
				if (nx < 0 || nx >= W || ny < 0 || ny >= H) continue;
				m[ny][nx] += v[sz][dy][dx];
			}
		}
	}
//	cout << m << endl;
	int ans = 0, cnt = 0;
	REP(i, H) REP(j, W) {
		if (m[i][j] == 0) ++cnt;
		ans = max(ans, m[i][j]);
	}
	cout << cnt << endl;
	cout << ans << endl;
}