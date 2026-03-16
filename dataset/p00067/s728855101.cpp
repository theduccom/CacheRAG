#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 0, 0, 1}, dy[4] = {0, -1, 1, 0};

int mp[12][12];

void dfs_fill(int y, int x)
{
	if (y < 0 || y >= 12 || x < 0 || x >= 12) return;

	if (!mp[y][x]) return;

	mp[y][x] = 0;

	for (int i = 0; i < 4; ++i) dfs_fill(y + dy[i], x + dx[i]);
}

int main()
{
	string s;
	while (getline(cin, s)) {
		if (s.empty()) continue;

		for (int y = 0; y < 12; ++y) {
			for (int x = 0; x < 12; ++x) {
				mp[y][x] = s[x] - '0';
			}
			getline(cin, s);
		}

		int ans = 0;

		for (int i = 0; i < 12; ++i) for (int j = 0; j < 12; ++j) {
			if (mp[i][j]) {
				dfs_fill(i, j);
				ans++;
			}
		}

		printf("%d\n", ans);
	}
}