#include<iostream>
#include<cstring>
using namespace std;
char a[8000][8000]; int h, w, loop, cx, cy;
int main() {
	while (true) {
		cin >> h >> w;
		if (!h) { break; }
		memset(a, ' ', sizeof(a));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> a[i][j];
			}
		}
		cx = 0; cy = 0; loop = 0;
		while (true) {
			if (loop > 15000000) { cout << "LOOP" << endl; break; }
			if (a[cy][cx] == '.') { cout << cx << ' ' << cy << endl; break; }
			if (a[cy][cx] == '<') { cx--; }
			if (a[cy][cx] == '>') { cx++; }
			if (a[cy][cx] == '^') { cy--; }
			if (a[cy][cx] == 'v') { cy++; }
			loop++;
		}
	}
}