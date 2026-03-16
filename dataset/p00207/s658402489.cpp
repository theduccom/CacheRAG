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
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }

int dx[] = {0, 1, 0, 1}, dy[] = {0, 0, 1, 1};
struct P{ int x, y; };
int main()
{
	int w, h;
	while(cin >> w >> h && (w || h))
	{
		vector<vint> field(w, vint(h, 0));
		P s, g;
		cin >> s.x >> s.y >> g.x >> g.y;
		s.x--, s.y--, g.x--, g.y--;

		int n;
		cin >> n;
		rep(i, n)
		{
			int c, d, x, y;
			cin >> c >> d >> x >> y; x--, y--;

			rep(i, 4)
				field[x + dx[i]][y + dy[i]] = c;
			rep(i, 4)
				field[x + dx[i] + 2 * !d][y + dy[i] + 2 * d] = c;
		}

		
		int c = field[s.x][s.y];
		if(!c || !field[g.x][g.y] || field[s.x][s.y] != field[g.x][g.y])
		{
			cout << "NG" << endl;
			continue;
		}

		queue<P> que;
		for(que.push(s); !que.empty(); que.pop())
		{
			P p = que.front();

			int ddx[] = {1, -1, 0, 0}, ddy[] = {0, 0, -1, 1};
			rep(i, 4)
			{
				int nx = p.x + ddx[i], ny = p.y + ddy[i];
				
				if(0 <= nx && nx < w && 0 <= ny && ny < h && field[nx][ny] == c)
				{
					field[nx][ny] = -1;
					P next; next.x = nx, next.y = ny;
					que.push(next);
				}
			}
		}

		cout << (field[g.x][g.y] == -1? "OK" : "NG") << endl;
	}
}