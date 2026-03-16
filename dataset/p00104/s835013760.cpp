#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int H, W;
	while (cin >> H >> W , H) {
		string b[101];
		for (int i = 0; i < H; i++) {
			cin >> b[i];
		}

		bool visited[101][101] = {false};
		int x = 0, y = 0;
		while (b[y][x] != '.' && !visited[y][x]) {
			visited[y][x] = true;
			if (b[y][x] == '^') y--;
			if (b[y][x] == 'v') y++;
			if (b[y][x] == '<') x--;
			if (b[y][x] == '>') x++;
		}

		if (visited[y][x]) {
			cout << "LOOP" << endl;
		}
		else {
			cout << x << " " << y << endl;
		}
	}
}