# define _CRT_SECURE_NO_WARNINGS

# include <cstdio>

char field[12][12];

int dx[4] = { 1,-1,0,0 }, dy[4] = { 0,0,1,-1 };

void dfs(int x, int y) {
	field[y][x] = '0';
	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (0 <= nx&&nx < 12 && 0 <= ny&&ny < 12 && field[ny][nx] == '1') {
			dfs(nx, ny);
		}
	}
}

int solve() {
	int res = 0;
	for (int i = 0; i < 12; ++i) {
		for (int j = 0; j < 12; ++j) {
			if (field[i][j] == '1') {
				dfs(j, i);
				++res;
			}
		}
	}
	return res;
}

int main() {
	while (1) {
		bool flag = false;
		for (int i = 0; i < 12; ++i) {
			if (scanf("%s", field[i]) == EOF)
				flag = true;
		}
		if (flag)
			break;
		printf("%d\n", solve());
	}
	return 0;
}