#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define FOR(i, m, n) for(int i=(m); i<(n); ++i)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define Cout(x) cout << (x) << endl
#define dump(x) cerr << #x << " = " << (x) << endl;
typedef long long LL;
typedef vector<int> VI;
typedef vector<long long> VL;
typedef vector<string> VS;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
const int inf = (int)1e9;
const long long mod = 998244353LL;
const double pi = acos(-1.0);

bool Check(int x, int y) {
	return x >= 0 && y >= 0 && x < 10 && y < 10;
}

int dx[] = { 0,0 ,1,0,-1,-1,1,1,-1,0,2,0,-2 };
int dy[] = { 0,-1,0,1,0 ,-1,-1,1,1,-2,0,2,0 };

int main() {
	VVI p(10, VI(10));
	int x, y, s; char cha;
	while (cin >> x >> cha >> y >> cha >> s) {
		int c = s == 1 ? 5 : s == 2 ? 9 : 14;
		rep(i, c) {
			int X = x + dx[i], Y = y + dy[i];
			if (Check(X, Y))p[Y][X]++;
		}
	}

	int cnt = 0, ma = -1;
	rep(i, 10)rep(j, 10) {
		ma = max(ma, p[i][j]);
		cnt += p[i][j] == 0;
	}
	Cout(cnt);
	Cout(ma);
}
