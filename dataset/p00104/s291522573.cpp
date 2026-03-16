#include <iostream>
#include <string>

using namespace std;

int H, W;
int ansx, ansy;
int tile[100][100];

void move(int x, int y) {
	int here = tile[y][x];
	tile[y][x] = -1;

	if (here) {
		if (here == -1) {
			ansx = -1;
			ansy = -1;
		}
		else if (here == 1)		move(x+1, y);
		else if (here == 2)	move(x-1, y);
		else if (here == 3) move(x, y-1);
		else				move(x, y+1);
	}
	else {
		ansx = x, ansy = y;
	}

	return;
}

int main() {
	string str;

	while (cin >> H >> W) {
		if (H == 0 && W == 0) break;

		for (int i = 0; i < H; i++) {
			cin >> str;
			
			for (int j = 0; j < W; j++) {
				tile[i][j] = (str[j] == '.') ? 0 : (str[j] == '>') ? 1 : (str[j] == '<') ? 2 : (str[j] == '^') ? 3 : 4;
			}
		}

		move(0, 0);

		if (ansx == -1 && ansy == -1)
			cout << "LOOP" << endl;
		else
			cout << ansx << ' ' << ansy << endl;
	}

	return 0;
}