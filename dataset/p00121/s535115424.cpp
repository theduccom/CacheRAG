#include "bits/stdc++.h"
using namespace std;

#define rep(i,a,b) for(int i=(a), i##_len=(b);i<i##_len;i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)

//#define int long long
#define SZ(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<double, double> pdd;

template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }

const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;

int tbl[8];
int b[8 * 7 * 6 * 5 * 4 * 3 * 2 * 1];

int encode(int x[8]) {
	int p[8];
	int ret = 0;
	rep(i, 0,8) p[i] = i;
	rep(i, 0, 8) {
		int a = x[i];
		ret += p[a] * tbl[i];
		for (int i = a + 1; i < 8; i++) p[i]--;
	}
	return ret;
}

void decode(int x[8], int val) {
	int p[8];
	rep(i, 0, 8) p[i] = i;
	rep(i, 0, 7) {
		int a = val / tbl[i];
		val -= a * tbl[i];
		x[i] = p[a];
		for (int i = a; i < 7; i++) p[i] = p[i + 1];
	}
	x[7] = p[0];
}

void solve()
{
	static const int dz[] = { 4,1,-1,-4 };

	memset(b, -1, sizeof(b));
	tbl[6] = 1;
	for (int i = 5; i >= 0; i--) tbl[i] = tbl[i + 1] * (7 - i);

	queue<pii> q;
	q.push(pii(0, 0));
	b[0] = 0;

	while (!q.empty())
	{
		pii tp = q.front(); q.pop();
		int a[8];
		decode(a, tp.first);
		int pz = find(a, a + 8, 0) - a;
		rep(i, 0, 4)
		{
			int npz = pz + dz[i];
			if (0 <= npz&&npz < 8 && npz + pz != 7)
			{
				swap(a[pz], a[npz]);
				int en = encode(a);
				if (b[en] == -1)
				{
					b[en] = tp.second + 1;
					q.push(pii(en, tp.second + 1));
				}
				swap(a[pz], a[npz]);
			}
		}
	}
}

signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	solve();

	int A[8];
	while (true)
	{
		rep(i, 0, 8)
		{
			if (!(cin >> A[i]))
			{
				return 0;
			}
		}
		cout << b[encode(A)] << endl;
	}

	return 0;
}
