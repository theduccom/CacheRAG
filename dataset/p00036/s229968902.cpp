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

struct P{ double x, y; };

bool Range(int x, int y)
{ return 0 <= x && x < 8 && 0 <= y && y < 8; }


const int target[7][3][2] = 
{
	{{1, 0}, {0, 1}, {1, 1}},
	{{0, 1}, {0, 2}, {0, 3}}, 
	{{1, 0}, {2, 0}, {3, 0}},
	{{0, 1}, {-1,1}, {-1,2}},
	{{1, 0}, {1, 1}, {2, 1}},
	{{0, 1}, {1, 1}, {1, 2}},
	{{1, 0}, {0, 1}, {-1,1}}
};



char solve(vector<string>& field)
{
	rep(x, 8) rep(y, 8) rep(t, 7)
	{
		if(Range(x, y) && field[y][x] == '1')
		{
			rep(p, 3)
			{
				int nx = x + target[t][p][0], ny = y + target[t][p][1];
				if(!Range(nx, ny) || field[ny][nx] != '1')
					break;
				else if(p == 2)
				{
					return 'A' + t;
				}
			}
		}
	}

	return 'Z';
}



int main()
{
	vector<string> f(8);
	while(cin >> f[0] >> f[1] >> f[2] >> f[3] >> f[4] >> f[5] >> f[6] >> f[7])
		cout << solve(f) << endl;	
}