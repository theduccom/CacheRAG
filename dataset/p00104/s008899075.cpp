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

int main() {
	int W, H;

	while(cin >> H >> W, H) {
		vs tile(H);
		vvi field(H, vi(W));

		REP(i, H) {
			cin >> tile[i];
		}

		int x = 0, y = 0;
		
		while(field[x][y] != 1) {
			field[x][y] = 1;
			switch(tile[x][y]) {
			case '^':
				x--;
				break;
			case '>':
				y++;
				break;
			case 'v':
				x++;
				break;
			case '<':
				y--;
				break;
			case '.':
				cout << y << " " << x << endl;
				goto next;
			}
		}
		cout << "LOOP" << endl;

		next:;
	}

	return 0;
}