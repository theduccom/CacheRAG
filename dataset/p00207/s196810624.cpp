#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int a[100][100];
int dx[]{ 1,-1,0,0 }, dy[]{ 0,0,1,-1 };
int w, h;

void dfs(int x, int y) {
	int c = a[x][y];
	a[x][y] = -1;
	rep(i, 4) {
		int nx = x + dx[i], ny = y + dy[i];
		if (0 <= nx&&nx < w && 0 <= ny&&ny < h&&a[nx][ny] == c)dfs(nx, ny);
	}
}
int main() {
	while (cin >> w >> h, w) {
		memset(a, 0, sizeof(a));
		int xs, ys, xg, yg, n;
		cin >> xs >> ys >> xg >> yg >> n;
		xs--; ys--; xg--; yg--;
		rep(i, n) {
			int c, d, x, y; scanf("%d%d%d%d", &c, &d, &x, &y);
			x--; y--;
			rep(j, 2)rep(k, 4) {
				if (d)a[x + j][y + k] = c;
				else a[x + k][y + j] = c;
			}
		}
		dfs(xs, ys);
		puts(a[xg][yg] == -1 ? "OK" : "NG");
	}
}