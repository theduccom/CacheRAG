#include "bits/stdc++.h"
using namespace std;

#define ASC(a) a.begin(), a.end()		// 昇順ソート 例：sort(ASC(a));
#define DESC(a) a.rbegin(), a.rend()	// 降順ソート 例:sort(DESC(a));
#define rep(i, n) for(int i = 0; i < n; i++)
#define Rep(i, n) for(int i = 1; i < n; i++)
#define In(a) rep(i, n) cin>>a[i];
#define ANS(s) cout << s << endl
#define inc(a, b) cin >> a >> b;
#define only_unique(vec) vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
#define souwa(vec) accumulate(ASC(vec), 0)

const int mod = 1000000007;
const int inf = (int)1e9 + 7;
const long long INF = 1LL << 60;

typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<pair<int, int> > vii;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

ll GCD(ll a, ll b) { return b ? GCD(b, a % b) : a; }
ll LCM(ll a, ll b) { return (a * b) / GCD(a, b); }
int round_int(int a, int b) { return (a + (b - 1)) / b; }


// 4,8方向に探索する際に用いる配列
//int dx[4] = { 0,  0, 1, -1 };
//int dy[4] = { 1, -1, 0,  0 };
//int dx[8] = { 1, 0, -1,  0, 1, -1, -1,  1 };
//int dy[8] = { 0, 1,  0, -1, 1,  1, -1, -1 };


// ────────────────────────────────────────────────────

int main() {
	int b[3];
	rep(i, 3) cin >> b[i];

	if (b[0] == 1 && b[1] == 0 && b[2] == 0) cout << "Close" << endl;
	else if (b[0] == 0 && b[1] == 1 && b[2] == 0) cout << "Close" << endl;
	else if (b[0] == 1 && b[1] == 1 && b[2] == 0) cout << "Open" << endl;
	else if (b[0] == 0 && b[1] == 0 && b[2] == 1) cout << "Open" << endl;
	else cout << "Close" << endl;
}
