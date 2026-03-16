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
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define mp make_pair
#define ERASE(v,i) (v).erase(remove(all(v),i),(v).end())
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define each(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define debug(x) cerr<<#x<<" = "<<(x)<<endl;
#define LINE cerr<<"LINE: "<<__LINE__<<endl;
inline int toInt(string s){int v;istringstream i(s);i>>v;return v;}
template<class T> inline string toString(T x){ostringstream o;o<<x;return o.str();}
template<class T> void pv(T a,T b){for(T it=a;it!=b;++it)cerr<<*it<<" ";cerr<<endl;}
const int INF = 1000000000;
const double EPS = 1e-10;

int D[21][21];

int main() {
	int N; cin >> N;
	int M; cin >> M;
	int start, goal;
	int y1, y2;
	rep(i,N) rep(j,N) {
		D[i][j] = INF / 10;
		D[j][i] = INF / 10;
	}
	cin.ignore();
	rep(i,M) {
		string line;
		getline(cin, line);
		rep(j,line.size()) if(line[j] == ',') line[j] = ' ';
		istringstream is(line);
		for(int a, b, c, d; is >> a >> b >> c >> d;) {
			a--, b--;
			D[a][b] = c;
			D[b][a] = d;
		}
	}
	

	string line;
	getline(cin, line);
	rep(j,line.size()) if(line[j] == ',') line[j] = ' ';
	istringstream is(line);
	
	is >> start >> goal >> y1 >> y2;
	start--, goal--;
	rep(k,N) rep(i,N) rep(j,N) D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
#if 0
	debug(D[start][goal]);
	debug(D[goal][start]);
#endif
	cout << y1 - (y2 + D[start][goal] + D[goal][start]) << endl;;
}