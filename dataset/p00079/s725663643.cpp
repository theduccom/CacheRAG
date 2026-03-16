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
#include <fstream>
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

#include <complex>
typedef complex<double> P;

int main() {
	double x, y;
	char c;
	vector<P> points;
	while(cin >> x >> c >> y) {
		points.push_back(P(x, y));
	}
	double S = 0.0;
	REP(i, points.size()-2) {
		double a, b, c;
		a = abs(points[0]-points[i+1]);
		b = abs(points[0]-points[i+2]);
		c = abs(points[i+1]-points[i+2]);

		double z = (a+b+c)/2;
		S += sqrt(z*(z-a)*(z-b)*(z-c));
	}
	printf("%.6f\n", S);
	return 0;
}