#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <complex>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

#define all(c) (c).begin(),(c).end()
#define pb push_back
#define mp make_pair
#define ERASE(v,i) (v).erase(remove(all(v),i),(v).end())
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define each(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define debug(x) cerr<<#x<<" = "<<(x)<<endl;
#define LINE cerr<<"LINE: "<<__LINE__<<endl;

inline int toInt(string s){int v;istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}
template<class T> void preview(T a,T b){for(T it=a;it!=b;++it)cerr<<*it<<" ";cerr<<endl;}

const int INF = 100000000;
const double PI = acos(-1.0), EPS = 1e-10;

char field[12][13];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void bfs(int y, int x) {
	if(y < 0 || 12 <= y || x < 0 || 12 <= x || field[y][x] == '0') return;
	field[y][x] = '0';
	rep(i,4) {
		bfs(y+dy[i], x+dx[i]);
	}
}

int main() {
	while(~scanf(" %s", field[0])) {
		for(int i = 1; i < 12; i++) scanf(" %s", field[i]);
		int ans = 0;
#if 0
		rep(y,12) {
			rep(x,12) {
				printf("%c", field[y][x]);
			}
			puts("");
		}
#endif
		rep(y,12) rep(x,12) {
			if(field[y][x] == '1') {
				ans++;
				bfs(y,x);
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}