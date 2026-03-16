#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

char b[8][8];

void dfs(int x, int y) {
	b[y][x] = '0';
	for (int d = -3; d <= 3; d++) {
		if (0 <= x + d && x + d < 8 && b[y][x + d] == '1') dfs(x + d, y);
		if (0 <= y + d && y + d < 8 && b[y + d][x] == '1') dfs(x, y + d);
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {

		for (int y = 0; y < 8; y++) {
			for (int x = 0; x < 8; x++) {
				cin >> b[y][x];
			}
		}

		int sx, sy;
		cin >> sx >> sy;
		sx-- , sy--;
		dfs(sx, sy);

		cout << "Data " << i << ":" << endl;

		for (int y = 0; y < 8; y++) {
			for (int x = 0; x < 8; x++) {
				cout << b[y][x];
			}
			cout << endl;
		}
	}
}