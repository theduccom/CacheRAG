#include <iostream>
#include <string>
using namespace std;
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
string field[8];

void bomb(int x, int y) {
	field[y][x] = '0';
	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i]; int ny = y + dy[i];
		for (int j = 0; j < 3; ++j) {
			if (0 <= nx && nx < 8 && 0 <= ny && ny < 8 && field[ny][nx] == '1') bomb(nx, ny);
			nx += dx[i]; ny += dy[i];
		}
	}
	return;
}

int main() {
	int n, sx, sy;

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < 8; ++j) {
				cin >> field[j];
		}
		cin >> sx >> sy;
		sx--; sy--;

		bomb(sx, sy);

		cout << "Data " << i << ":" << endl;
		for (int i = 0; i < 8; ++i) {
			cout << field[i] << endl;
		}
		
	}
	return 0;
}