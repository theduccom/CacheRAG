#include <iostream>

using namespace std;

const int W = 12, H = 12;
int m[12][12];
void paint(int x, int y) {
	if (x < 0 || x >= W || y < 0 || y >= H) return;
	if (m[y][x] == 0) return;
	m[y][x] = 0;

	paint(x+1, y);
	paint(x-1, y);
	paint(x, y+1);
	paint(x, y-1);
}
int main() {
	while (1) {
		for (int y = 0; y < H; ++y) {
			string str; if ( !(cin >> str) ) return 0;
			for (int x = 0; x < W; ++x) {
				m[y][x] = str[x] == '1' ? 1 : 0;
			}
		}

		int ans = 0;
		for (int y = 0; y < H; ++y) for (int x = 0; x < W; ++x) {
			if (m[y][x]) {
				++ans;
				paint(x, y);
			}
		}
		cout << ans << endl;
	}
}