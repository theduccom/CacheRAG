#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

const int dx[4] = { 0, 1, 0, -1 };
const int dy[4] = { 1, 0, -1, 0 };

const int ax[2][8] = {
	{0, 1, 2, 3, 0, 1, 2, 3},
	{0, 0, 0, 0, 1, 1, 1, 1}
};

const int ay[2][8] = {
	{0, 0, 0, 0, 1, 1, 1, 1},
	{0, 1, 2, 3, 0, 1, 2, 3}
};

int W, H, sx, sy, gx, gy, n, board[110][110];

bool dfs(int x, int y) {
	if (x == gx && y == gy) return true;
	int c = board[y][x];
	board[y][x] = -1;
	
	for_(d,0,4) {
		int nx = x + dx[d], ny = y + dy[d];
		if (nx < 1 || W < nx || ny < 1 || H < ny) continue;
		if (board[ny][nx] != c) continue;
		if (dfs(nx, ny)) return true;
	}
	
	return false;
}

int main() {
	while (cin >> W >> H, W) {
		memset(board, -1, sizeof(board));
		
		cin >> sx >> sy;
		cin >> gx >> gy;
		cin >> n;
		
		for_(i,0,n) {
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			for_(a,0,8) board[y + ay[d][a]][x + ax[d][a]] = c;
		}
		
		if (board[sy][sx] != -1 && dfs(sx, sy)) puts("OK");
		else puts("NG");
	}
}