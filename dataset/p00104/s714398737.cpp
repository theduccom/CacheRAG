#include <iostream>
#include <string>
using namespace std;

int H, W;

void solve() {
	string b[100];
	for (int i = 0; i < H; i++) {
		cin >> b[i];
	}

	bool visited[100][100] = {0};
	int x = 0, y = 0;

	while (b[y][x] != '.') {
		if (visited[y][x]) {
			cout << "LOOP" << endl;
			return;
		}
		visited[y][x] = true;
		if (b[y][x] == '^') y--;
		if (b[y][x] == 'v') y++;
		if (b[y][x] == '<') x--;
		if (b[y][x] == '>') x++;
	}

	cout << x << " " << y << endl;
}

int main() {
	while (cin >> H >> W , H) {
		solve();
	}
}