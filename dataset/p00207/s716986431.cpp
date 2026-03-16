#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
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
template<class T> inline string toStr(T x) { ostringstream sout; sout << x; return sout.str();}
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,(n)-1)
const double EPS = 1e-12;
const double PI = acos(-1.0);
const int INF = INT_MAX/10;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
	int w, h;
	while(cin >> w >> h, w) {
		vvi field(h, vi(w));

		int xs, ys, xg, yg, n;
		cin >> xs >> ys >> xg >> yg >> n;
		
		int c, d, x, y;
		REP(i, n) {
			cin >> c >> d >> x >> y;
			
			REP(j, 4) {
				REP(k, 2) {
					if(!d) {
						field[y-1+k][x-1+j] = c;
					} else {
						field[y-1+j][x-1+k] = c;
					}
				}
			}
		}

		bool goal = false;
		int color = field[ys-1][xs-1];
		stack<pii> S;
		S.push(make_pair(xs-1, ys-1));
		vvi visit(h, vi(w));
	
		if(color == 0) {
			goto show;
		}

		while(!S.empty()) {
			pii p = S.top();
			S.pop();

			visit[p.second][p.first] = 1;
			if(p.first == xg-1 && p.second == yg-1) {
				goal = true;
				goto show;
			}
			
			REP(d, 4) {
				int nx = p.first + dx[d];
				int ny = p.second + dy[d];

				if(0<=nx && nx<w && 0<=ny && ny<h && field[ny][nx] == color && !visit[ny][nx]) {
					S.push(make_pair(nx, ny));
				}
			}
		}

show:
		cout << (goal ? "OK" : "NG") << endl;
	}

	return 0;
}