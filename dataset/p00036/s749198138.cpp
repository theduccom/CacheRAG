#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<string> v(8);
	while (cin >> v[0]) {
		for (int i = 1; i < 8; i++) {
			cin >> v[i];
		}
		int sx = 8, sy = 8, ex = 0, ey = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (v[i][j] == '1') {
					sx = min(sx, j);
					sy = min(sy, i);
					ex = max(ex, j);
					ey = max(ey, i);
				}
			}
		}
		if (sx == ex) {
			cout << 'B' << endl;
		}
		else if (sx + 3 == ex) {
			cout << 'C' << endl;
		}
		else if (sx + 1 == ex && sy + 1 == ey) {
			cout << 'A' << endl;
		}
		else if (sx + 1 == ex && v[sy][sx] == '0') {
			cout << 'D' << endl;
		}
		else if (sx + 1 == ex && v[sy][sx] == '1') {
			cout << 'F' << endl;
		}
		else if (sx + 2 == ex && v[sy][sx] == '0') {
			cout << 'G' << endl;
		}
		else if (sx + 2 == ex && v[sy][sx] == '1') {
			cout << 'E' << endl;
		}
	}
	return 0;
}