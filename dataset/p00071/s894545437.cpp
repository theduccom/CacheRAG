#include <iostream>
#include<cstdlib>
using namespace std;
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
int map[8][8];

void bomb(int x, int y) {
	map[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 3; j++) {
			int nextX = x + dx[i] * j;
			int nextY = y + dy[i] * j;
			if (0 <= nextX && nextX < 8 && 0 <= nextY && nextY < 8 && map[nextX][nextY]) {
				bomb(nextX, nextY);
			}
		}
	}
}

int main () {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < 8; k++) {
				char c;
				cin >> c;
				map[k][j] = c - '0';
			}
		}
		int x, y;
		cin >> x >> y;
		bomb(x - 1, y - 1);
		cout << "Data " << i + 1 << ":" << endl;
		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < 8; k++) {
				cout << map[k][j];
			}
			cout << endl;
		}
	}
	return 0;
}