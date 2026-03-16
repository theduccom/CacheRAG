#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <complex>
#include <fstream>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }

struct P{ P(int x, int y) : x(x), y(y) {} double x, y; };

void rec(vector<vint>& f, P p)
{
	f[p.y][p.x] = 0;

	for(int i = -3; i <= 3; i++)
	{
		if(0 <= p.y + i && p.y + i < 8 && f[p.y + i][p.x]) rec(f, P(p.x, p.y + i));
		if(0 <= p.x + i && p.x + i < 8 && f[p.y][p.x + i]) rec(f, P(p.x + i, p.y));
	}
}


int main()
{
	int n;
	cin >> n;

	rep(i, n)
	{
		vector<vint> f(8, vint(8));

		rep(i, 8)
		{
			string line;
			cin >> line;

			rep(j, 8)
				f[i][j] = line[j] - '0';
		}

		P p(0, 0);
		cin >> p.x >> p.y; p.x--, p.y--;

		rec(f, p);

		cout << "Data " << i + 1 << ":" << endl;
		rep(i, 8)
		{
			rep(j, 8)
				cout << f[i][j];
			cout << endl;
		}
	}
}