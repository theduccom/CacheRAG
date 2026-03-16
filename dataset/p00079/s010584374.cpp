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

inline double SQR(double x) {
	return x * x;
}

inline double dist(double ax, double ay, double bx, double by) {
	return sqrt(SQR(ax - bx) + SQR(ay - by));
}

int main() {
	vector<double> X;
	vector<double> Y;

	for(string line; getline(cin, line);) {
		rep(i,line.length()) if(line[i] == ',') line[i] = ' ';
		istringstream is(line);
		double dx, dy;
		is >> dx >> dy;

		X.push_back(dx);
		Y.push_back(dy);
	}

	const int N = X.size();

	for(int i = 1; i < N; i++) {
		X[i] -= X[0];
		Y[i] -= Y[0];
	}

	X[0] = 0;
	Y[0] = 0;

	double S = 0;

	for(int i = 1; i < N - 1; i++) {
		double a = dist(X[0], Y[0], X[i], Y[i]);
		double b = dist(X[i], Y[i], X[i + 1], Y[i + 1]);
		double c = dist(X[i + 1], Y[i + 1], X[0], Y[0]);

		double z = (a + b + c) / 2;
		S += sqrt(z * (z - a) * (z - b) * (z - c));
	}

	cout << S << endl;
	return 0;
}