#include<iostream>
#include<algorithm>
using namespace std;
int a[100][100];
bool l=false;
void solve(int n, int m, int xg, int yg, int c,int h,int w) {
	if (m + 1 < w&&a[n][m + 1] == c) {
		a[n][m + 1] = 1000;
		if (n == xg&&m+1 == yg) {
			l = true; return;
		}
		solve(n, m+1, xg, yg, c, h, w);
	}
	if (m - 1 >= 0 && a[n][m - 1] == c) {
		a[n][m - 1] = 1000;
		if (n == xg&&m - 1 == yg) {
			l = true; return;
		}
		solve(n, m-1, xg, yg, c, h, w);
	}
	if (n + 1 < h && a[n+1][m] == c) {
		a[n+1][m] = 1000;
		if (n+1 == xg&&m == yg) {
			l = true; return;
		}
		solve(n+1, m, xg, yg, c, h, w);
	}
	if (n - 1 >= 0 && a[n-1][m] == c) {
		a[n-1][m] = 1000;
		if (n-1 == xg&&m  == yg) {
			l = true; return;
		}
		solve(n-1, m, xg, yg, c, h, w);
	}
}
int main() {
	int w, h;
	while (cin >> w >> h&&w != 0 && h != 0) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++)
				a[i][j] = 0;
		}
		int xs, ys, xg, yg,n;
		cin >> ys >> xs;
		cin >> yg >> xg;
		xs--; ys--; xg--; yg--;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int c, d, x, y;
			cin >> c >> d >> y >> x;
			x--;
			y--;
			if (d == 0) {
				for (int j = 0; j < 2; j++) {
					for (int z = 0; z < 4; z++) 
						a[x + j][y + z] = c;
				}
			}
			else {
				for (int j = 0; j < 4; j++) {
					for (int z = 0; z < 2; z++)
						a[x + j][y + z] = c;
				}
			}
		}
		int k = a[xs][ys];
		a[xs][ys] = 1000;
		l = false;
		solve(xs, ys, xg, yg, k,h,w);
		if (l) cout << "OK" << endl;
		else cout << "NG" << endl;
	}
}