#include <queue>
#include <cstring>
#include <iostream>
using namespace std;
int W, H, sx, sy, gx, gy, N, c, d, x, y, r[111][111], vis[111][111];
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
int main() {
	while(cin >> W >> H, W | H) {
		cin >> sx >> sy >> gx >> gy; sx--, sy--, gx--, gy--;
		memset(r, 0, sizeof(r));
		cin >> N;
		for(int i = 0; i < N; i++) {
			cin >> c >> d >> x >> y; x--, y--;
			int zx = (d ? 2 : 4), zy = (d ? 4 : 2);
			for(int j = 0; j < zy; j++) {
				for(int k = 0; k < zx; k++) {
					r[y + j][x + k] = c;
				}
			}
		}
		memset(vis, 0, sizeof(vis)); vis[sy][sx] = 1;
		queue<pair<int, int> > que; que.push(make_pair(sx, sy));
		while(!que.empty()) {
			pair<int, int> v = que.front(); que.pop();
			for(int i = 0; i < 4; i++) {
				int tx = v.first + dx[i], ty = v.second + dy[i];
				if(0 <= tx && tx < W && 0 <= ty && ty < H && !vis[ty][tx] && r[ty][tx] == r[v.second][v.first]) {
					vis[ty][tx] = 1;
					que.push(make_pair(tx, ty));
				}
			}
		}
		cout << (vis[gy][gx] ? "OK" : "NG") << endl;
	}
	return 0;
}