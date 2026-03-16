#include <bits/stdc++.h>

using namespace std;

char mp[8][9];

int a[7][4][2] = {
	{{0, 0}, {0, 1}, {1, 0}, {1, 1}},
	{{0, 0}, {1, 0}, {2, 0}, {3, 0}},
	{{0, 0}, {0, 1}, {0, 2}, {0, 3}},
	{{0, 1}, {1, 0}, {1, 1}, {2, 0}},
	{{0, 0}, {0, 1}, {1, 1}, {1, 2}},
	{{0, 0}, {1, 0}, {1, 1}, {2, 1}},
	{{1, 0}, {1, 1}, {0, 1}, {0, 2}}
};

int main()
{
	int nyan;
	while (1) {
		for (int i = 0; i < 8; ++i) if (scanf("%s", mp[i]) == EOF) return 0;

		for (int i = 0; i < 8; ++i) for (int j = 0; j < 8; ++j) {
			for (int k = 0; k < 7; ++k) {
				int cnt = 0;

				for (int l = 0; l < 4; ++l) {
					int ny = i + a[k][l][0], nx = j + a[k][l][1];
					if (ny < 0 || ny >= 8 || nx < 0 || nx >= 8 || mp[ny][nx] == '0') continue;
					cnt++;
				}

				if (cnt == 4) {
					printf("%c\n", 'A' + k);
					goto nxt;
				}
			}
		}
		
nxt:;
	}
}