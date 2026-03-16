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
	int x, y, size;
	while (scanf("%d,%d,%d",&x,&y,&size) != EOF) {
		if (size == 1) {
			field[y][x]++;
			rep(i, 4) {
				int ny = y + dy[i];
				int nx = x + dx[i];
				if (ng(ny, nx)) continue;
				field[ny][nx]++;
			}
		}
		if (size == 2) {
			REP(ny, y-1, y+2) REP(nx, x-1, x+2) {
				if (ng(ny, nx)) continue;
				field[ny][nx]++;
			}
		}
		if (size == 3) {
			REP(ny, y-1, y+2) REP(nx, x-1, x+2) {
				if (ng(ny, nx)) continue;
				field[ny][nx]++;
			}
			rep(i, 4) {
				int ny = y + dy[i]*2;
				int nx = x + dx[i]*2;
				if (ng(ny, nx)) continue;
				field[ny][nx]++;
			}
		}
	}
	int brank_n = 0;
	int max_value = 0;
	rep(y, 10) rep(x, 10) {
		if (field[y][x] == 0) brank_n++;
		if (field[y][x] > max_value) max_value = field[y][x];
	}
	cout << brank_n << endl << max_value << endl;


	return 0;
}