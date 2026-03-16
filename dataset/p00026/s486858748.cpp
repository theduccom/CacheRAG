#include <cstdio>
#include <cstdlib>
#define rep(i, n) for(int i = 0; i < (n); ++i)

int p[11][11];
int main()
{
	int dx[] = { -1, 0, 0, 1, -1, -1, 1, 1, -2, 0, 0, 2 };
	int dy[] = { 0, -1, 1, 0, -1, 1, -1, 1, 0, -2, 2, 0 };
	int x, y, s;
	rep(i, 10) rep(j, 10) p[i][j] = 0;
	while (scanf("%d,%d,%d", &x, &y, &s) == 3) {
		p[y][x]++;
		rep(i, 4 * s) {
			int r = y + dy[i];
			int c = x + dx[i];
			if (r < 0 || r > 9 || c < 0 || c > 9) continue;
			p[r][c]++;
		}
	}
	int c = 0, best = 0;
	rep(i, 10) rep(j, 10) {
		if (p[i][j] == 0) c++;
		if (best < p[i][j]) best = p[i][j];
	}
	printf("%d\n%d\n", c, best);
	return 0;
}