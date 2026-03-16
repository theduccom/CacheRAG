#include<iostream>
#include<algorithm>
#include<functional>
#include<string>
#include<vector>
using namespace std;
int main() {
	int H,W;
	while (true) {
		cin >> H >> W;
		if (H == 0 && W == 0) {
			break;
		}
		string tile[100];
		bool memo[100][100];
		for (int i = 0;i < H;i++) {
			cin >> tile[i];
			for (int j = 0;j < W;j++) {
				memo[i][j] = false;
			}
		}
		int x = 0;
		int y = 0;
		while (true) {
			if (memo[x][y]) {
				cout << "LOOP" << endl;
				break;
			}
			if (tile[x][y] == '.') {
				cout << y << " " << x << endl;
				break;
			}
			memo[x][y] = true;
			if (tile[x][y] == '>') {
				y++;
			}
			if (tile[x][y] == '<') {
				y--;
			}
			if (tile[x][y] == '^') {
				x--;
			}
			if (tile[x][y] == 'v') {
				x++;
			}

		}
	}
	return 0;

}