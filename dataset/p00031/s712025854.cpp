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

int field[10][10];

int H = 10;
int W = 10;

bool ng(int y, int x) {
	return y < 0 || H <= y || x < 0 || W <= x;
}

int main() {
	int n;
	while (cin >> n) {
		rep(i, 12) {
			int n2 = 1 << i;
			// dump((n >> i) & 1);
			if (((n >> i) & 1) == 0) continue;
			n ^= n2;
			// dump(n);
			if (n == 0) {
				cout << n2 << endl;
				break;
			}
			else cout << n2 << " ";
		}
	}


	return 0;
}