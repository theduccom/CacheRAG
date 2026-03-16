#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	char tile[100][100];
	bool flag[100][100];
	int h, w, x, y;

	while (cin >> h >> w, h || w) {
		memset(tile, 0, sizeof(tile));
		memset(flag, 0, sizeof(flag));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> tile[i][j];
			}
			getchar();
		}
		x = 0; y = 0;
		while (1) {
			if (flag[y][x])
				break;
			else
				flag[y][x] = 1;

			switch (tile[y][x]) {
			case '>':
				x++;
				break;
			case '<':
				x--;
				break;
			case '^':
				y--;
				break;
			case 'v':
				y++;
				break;
			}
		}
		if (tile[y][x] == '.')
			cout << x << ' ' << y << endl;
		else
			cout << "LOOP" << endl;
	}
	return 0;
}