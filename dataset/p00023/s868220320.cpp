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

double a[3];
double b[3];

int solve() {
	double diff = hypot(a[0] - b[0], a[1] - b[1]);
	if (diff + b[2] < a[2]) return 2;
	if (diff + a[2] < b[2]) return -2;
	if (a[2] + b[2] >= diff) return 1;
	return 0;
}

int main() {
	int N;
	cin >> N;
	while (cin >> a[0]) {
		rep(i, 2) cin >> a[i + 1];
		rep(i, 3) cin >> b[i];
		cout << solve() << endl;
	}
	return 0;
}