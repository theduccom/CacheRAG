#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include "bits/stdc++.h"
#define REP(i,a,b) for(int i=a;i<b;++i)
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define ALL(a) begin(a),end(a)
#define ifnot(a) if(not (a))
#define dump(x)  cerr << #x << " = " << (x) << endl
using namespace std;

// #define int ll
#ifdef _MSC_VER
const bool test = true;
#else 
const bool test = false;
#endif

int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };
#define INF (1 << 28)
ull mod = (int)1e9 + 7;
//.....................
const int MAX = (int)2e5 + 5;

double x = 0;
double y = 0;

int main() {
	double dir = M_PI/2;
	double d, t;
	// dump(sin(M_PI));
	// dump(cos(dir));
	// dump(sin(dir));
	while (scanf("%lf,%lf",&d,&t) != EOF) {
		// cout << d << " " << t << endl;
		if (d == 0) break;
		x += d*cos(dir);
		y += d*sin(dir);
		dir += -t/180*M_PI;
	}
	cout << (ll)(x+1e-8) << endl;
	cout << (ll)(y+1e-8) << endl;
	return 0;
}