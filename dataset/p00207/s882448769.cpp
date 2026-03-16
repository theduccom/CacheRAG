#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define fi first
#define se second

template<typename A, typename B> inline bool chmax(A &a, B b) { if (a<b) { a=b; return 1; } return 0; }
template<typename A, typename B> inline bool chmin(A &a, B b) { if (a>b) { a=b; return 1; } return 0; }

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<int, pll> pip;
const ll INF = 1ll<<29;
const ll MOD = 1000000007;
const double EPS  = 1e-9;

int dx[2][8] = {
	{ 0,1,2,3,0,1,2,3 },
	{ 0,1,0,1,0,1,0,1 }
};

int dy[2][8] = {
	{ 0,0,0,0,1,1,1,1 },
	{ 0,0,1,1,2,2,3,3 }
};

int main() {
	int w, h;
	while (cin >> w >> h, w || h) {
		int sx, sy, gx, gy;
		scanf("%d %d %d %d", &sx, &sy, &gx, &gy);
		sx--; sy--; gx--; gy--;
		
		int maps[100][100];
		memset(maps, -1, sizeof(maps));
		
		int n; cin >> n;
		
		REP(i, n) {
			int c, d, x, y;
			scanf("%d %d %d %d", &c, &d, &x, &y);
			x--; y--;
			
			REP(j, 8) {
				int xx = x + dx[d][j], yy = y + dy[d][j];
				maps[yy][xx] = c - 1;
			}
		}
		
		int num = maps[sy][sx];
		bool done[100][100] = {};
		
		queue<pii> que;
		if (num != -1) que.push(pii(sy, sx));
		done[sy][sx] = true;
		
		while (!que.empty()) {
			pii now = que.front(); que.pop();
			int x = now.se, y = now.fi;
			
			int ddx[4] = {1,0,-1,0}, ddy[4] = {0,1,0,-1};
			REP(i, 4) {
				int xx = x + ddx[i], yy = y + ddy[i];
				if (!(xx >= 0 && xx < w && yy >= 0 && yy < h)) continue;
				if (maps[yy][xx] != num || done[yy][xx]) continue;
				done[yy][xx] = true;
				que.push(pii(yy, xx));
			}
		}
		
		if (done[gy][gx] && num != -1) puts("OK");
		else puts("NG");
	}
	return 0;
}