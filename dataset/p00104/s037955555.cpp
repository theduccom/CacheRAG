#include <iostream>
#include <algorithm>
#define MH 100
#define MW 100
using namespace std;
char f[MH][MW];
bool u[MH][MW];

void move(int x, int y) {
	if (u[y][x] == true) cout << "LOOP" << endl;
	else {
		u[y][x] = true;
		if (f[y][x] == '.') cout << x << " " << y << endl;
		else {
			if (f[y][x] == '<') move(x - 1, y);
			if (f[y][x] == '^') move(x, y - 1);
			if (f[y][x] == '>') move(x + 1, y);
			if (f[y][x] == 'v') move(x, y + 1);
		}
	}
	return;
}

int main() {
	int h, w;

	while (cin >> h >> w, !(h == 0 && w == 0)) {
		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				cin >> f[i][j];
			}
		}
		fill(u[0], u[MH], false);
		move(0, 0);
	}
	return 0;
}