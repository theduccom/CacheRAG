#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int b[100][100];
int vis[100][100];

int w, h;
bool in(int x, int y) {
	return 0 <= x && x < w && 0 <= y && y < h;
}


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while(cin >> w >> h, w + h) {
		int xs, ys, xg, yg, n;
		cin >> xs >> ys >> xg >> yg >> n;
		xs--, ys--, xg--, yg--;

		memset(b, 0, sizeof b);
		for(int i = 0; i < n; i++) {
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			x--, y--;
			int H = 2, W = 4;
			if(d == 1) swap(H, W);
			for(int dx = 0; dx < W; dx++) {
				for(int dy = 0; dy < H; dy++) {
					b[y + dy][x + dx] = c;
				}
			}
		}

		if(b[ys][xs] == 0 || b[ys][xs] != b[yg][xg]) {
			cout << "NG" << endl;
			continue;
		}

		typedef pair<int, int> P;
		queue<P> q;
		q.push({ xs, ys });
		memset(vis, 0, sizeof vis);
		vis[ys][xs] = 1;
		while(q.size()) {
			int x = q.front().first, y = q.front().second;
			q.pop();
			int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
			for(int k = 0; k < 4; k++) {
				int nx = x + dx[k], ny = y + dy[k];
				if(in(nx, ny) && b[y][x] == b[ny][nx] && vis[ny][nx] == 0) {
					vis[ny][nx] = 1;
					q.push({ nx, ny });
				}
			}
		}
		if(vis[yg][xg]) {
			cout << "OK" << endl;
		}
		else {
			cout << "NG" << endl;
		}
	}
}