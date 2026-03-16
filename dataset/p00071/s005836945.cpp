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
const double PI = acos(-1.0), EPS = 1e-10;

string field[8];

void go(int X, int Y) {
	// cerr << "call " << X << ":" << Y << endl;
	if((0 <= X && X < 8 && 0 <= Y && Y < 8) == false) return;
	if(field[Y][X] != '1') return;
	field[Y][X] = '0';
	for(int x = X - 3; x <= X + 3; x++) {
		go(x, Y);
	}
	for(int y = Y - 3; y <= Y + 3; y++) {
		go(X, y);
	}
}

int main() {
	string line;
	getline(cin, line);
	int N = toInt(line);
	for(int n  = 1; n <= N; n++) {
		getline(cin, line);

		for(int i = 0; i < 8; i++) getline(cin, field[i]);
		getline(cin, line);
		int X = toInt(line);
		getline(cin, line);
		int Y = toInt(line);

		X--, Y--;
		go(X, Y);
		
		cout << "Data " << n << ":" << endl;
		for(int i = 0; i < 8; ++i)
			cout << field[i] << endl;
	}
	return 0;
}