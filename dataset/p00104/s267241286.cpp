#include<iostream>
using namespace std;

char c[101][101] = { 0 };
int x, y;

void move_tile() {
	if (c[y][x] == '^') {
		c[y][x] = 'l';
		y = y - 1;
		move_tile();
	}
	else if (c[y][x] == 'v') {
		c[y][x] = 'l';
		y = y + 1;
		move_tile();
	}
	else if (c[y][x] == '<') {
		c[y][x] = 'l';
		x = x - 1;
		move_tile();
	}
	else if (c[y][x] == '>') {
		c[y][x] = 'l';
		x = x + 1;
		move_tile();
	}
	else {
		return;
	}

}

int main(void) {
	while (1) {
		int h, w;
		cin >> h >> w;
		if (h == 0)return 0;
		for (int i = 0; i <h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> c[i][j];
			}
		}

		x = y = 0;
		move_tile();

		if (c[y][x] == 'l') {
			cout << "LOOP" << endl;
		}
		else {
			cout << x << " " << y << endl;
		}
	}

}