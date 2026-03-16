#include<bits/stdc++.h>

using namespace std;

int W, H, GoalX, GoalY, TargetColor;
int MapData[101][101];
const int Dx[] = {1,0,-1,0}; // right,down,left,up
const int Dy[] = {0,1,0,-1};


void setBlock(int c, int d, int x, int y) {
	int lenX, lenY;

	if (d == 1) {
		lenX = x + 2;
		lenY = y + 4;
	}
	else {
		lenX = x + 4;
		lenY = y + 2;
	}

	for (int i = y; i < lenY; ++i) {
		for (int j = x; j < lenX; ++j) {
			MapData[i][j] = c;
		}
	}
}

bool solve(int x, int y) {
	int nowX, nowY;

	if (x == GoalX && y == GoalY) {
		return true;
	}

	MapData[y][x] = 0;
	for (int i = 0; i < 4; ++i) {
		nowX = x + Dx[i];
		nowY = y + Dy[i];

		if (nowX<1 || nowX>W || nowY<1 || nowY>H) {
			continue;
		}
		if (MapData[nowY][nowX] == TargetColor && solve(nowX, nowY)) {
			return true;
		}
	}
	return false;
}

int main() {
	int n, c, d, x, y, startX, startY;

	while (cin >> W >> H, W) {
		cin >> startX >> startY >> GoalX >> GoalY >> n;
		memset(MapData, 0, sizeof(MapData));
		for (int i = 0; i < n; ++i) {
			cin >> c >> d >> x >> y;
			setBlock(c, d, x, y);
		}

		TargetColor = MapData[startY][startX];
		//cout << "startColor:" << TargetColor << endl;
		if (TargetColor == 0) {
			cout << "NG" << endl;
			continue;
		}

		if (solve(startX, startY)) {
			cout << "OK" << endl;
		}
		else {
			cout << "NG" << endl;
		}
	}

	return 0;
}
