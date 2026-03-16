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
#include <iomanip>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }

string comp(int x, int y)
{
	stringstream ss;

	ss << x << " " << y;

	return ss.str();
}

string rec(vector<string>& field, pint pos)
{
	int buf = field[pos.first][pos.second];
	field[pos.first][pos.second] = 0;
	
	switch(buf)
	{
	case '.' :
		return comp(pos.second, pos.first);
		
	case '>' :
		return rec(field, mp(pos.first, pos.second + 1));

	case '<' :
		return rec(field, mp(pos.first, pos.second - 1));

	case '^' :
		return rec(field, mp(pos.first - 1, pos.second));

	case 'v' :
		return rec(field, mp(pos.first + 1, pos.second));

	default :
		return "LOOP";
	}
}

int main()
{
	int w, h;
	while(cin >> h >> w && w)
	{
		vector<string> field(h);

		rep(i, h)
			cin >> field[i];

		cout << rec(field, mp(0, 0)) << endl;
	}
}