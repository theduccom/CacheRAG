#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <iostream>

#define pb push_back
#define mp make_pair
#define all(c) (c).begin(), (c).end()
#define contains(c, x) ((c).find(x) != (c).end())
#define REP(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) REP(i, 0, (n))

using namespace std;

int a[101][101];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int main()
{
	int w, h, sx, sy, gx, gy, n;
	while (true) {
		cin >> w >> h;
		if (!(w | h)) break;
		cin >> sx >> sy >> gx >> gy >> n;
		sx--, sy--, gx--, gy--;
		int c, d, x, y;
		rep(k, n) {
			cin >> c >> d >> x >> y;
			if (d == 0) {
				REP(i, y-1, y+1) REP(j, x-1, x+3) a[i][j] = c;
			}
			else {
				REP(i, y-1, y+3) REP(j, x-1, x+1) a[i][j] = c;
			}
		}
		if (a[sy][sx] != a[gy][gx]) {
			puts("NG");
			continue;
		}

		bool f = false;
		queue<pair<int, int> > q;
		set<pair<int, int> > s;
		pair<int, int> start = mp(sy, sx);
		pair<int, int> goal = mp(gy, gx);
		q.push(start);
		s.insert(start);
		while (!q.empty()) {
			pair<int, int> t = q.front(); q.pop();
			if (t == goal) { f = true; break; }
			rep(i, 4) {
				int r = t.first + dy[i];
				int c = t.second + dx[i];
				if (r < 0 || r >= h || c < 0 || c >= w) continue;
				if (a[sy][sx] != a[r][c] || contains(s, mp(r, c))) continue;
				q.push(mp(r, c));
				s.insert(mp(r, c));
			}
		}
		puts((f ? "OK" : "NG"));
	}
	return 0;
}