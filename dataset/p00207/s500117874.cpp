#include <cstring>
#include <iostream>
using namespace std;
const int MAX_WH = 100;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int w, h;
int sx, sy, gx, gy;
int col;
int field[MAX_WH + 1][MAX_WH + 1];

bool solve(int x, int y) {
	if (x == gx && y == gy) return true;
	field[x][y] = -1;
	for (int i = 0; i < 4; i++) {
		int nextX = x + dx[i];
		int nextY = y + dy[i];
		if (0 < nextX && nextX <= w && 0 < nextY && nextY <= h && col == field[nextX][nextY]) {
			if (solve(nextX, nextY)) return true;
		}
	}
	return false;
}

int main () {
	while (cin >> w >> h, w || h) {
		memset(field, 0, sizeof(field));
		cin >> sx >> sy >> gx >> gy;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			if (d == 0) {
				for (int i = 0; i < 2; i++) {
					for (int j = 0; j < 4; j++) {
						field[x + j][y + i] = c;
					}
				}
			}
			else {
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 2; j++) {
						field[x + j][y + i] = c;
					}
				}
			}
		}
		col = field[sx][sy];
		cout << (solve(sx, sy) ? "OK" : "NG") << endl;
	}
	return 0;
}