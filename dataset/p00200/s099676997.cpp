#include <iostream>

using namespace std;

int main() {
	int l, n, m, s[100][100][2];
	while (cin >> n >> m, n || m) {
		for (int y = 0; y < 100; ++y)
			for (int x = 0; x < 100; ++x) {
				if (x == y) s[y][x][0] = 0, s[y][x][1] = 0;
				else s[y][x][0] = 100000, s[y][x][1] = 100000;
			}

		for (int i = 0; i < n; ++i) {
			int a, b, cost, time;
			cin >> a >> b >> cost >> time;
			--a, --b;
			s[a][b][0] = cost, s[b][a][0] = cost;
			s[a][b][1] = time, s[b][a][1] = time;
		}

		for (int t = 0; t < 2; ++ t)
			for (int i = 0; i < m; ++i)
				for (int j = 0; j < m; j++)
					for (int k = 0; k < m; k++)
						if (s[j][k][t] > s[j][i][t]+s[i][k][t])
							s[j][k][t] = s[j][i][t]+s[i][k][t], s[k][j][t] = s[j][k][t];

		cin >> l;
		for (int i = 0; i < l; ++ i) {
			int p, q, r;
			cin >> p >> q >> r;
			--p, --q;
			cout << s[p][q][r] << endl;
		}
	}
}