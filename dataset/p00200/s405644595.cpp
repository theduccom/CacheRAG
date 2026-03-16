#include <iostream>

using namespace std;

int main() {
	int a, b, n, m, k, p, q, r, cost, time, datas[300][300][2];
	while (cin >> n >> m, n || m) {
		for (int y = 0; y < m; ++y)
			for (int x = 0; x < m; ++x)
				datas[y][x][0] = 10000, datas[y][x][1] = 10000;

		for (int x = 0; x < m; ++x)
			datas[x][x][0] = 0, datas[x][x][1] = 0;

		for (int i = 0; i < n; ++i) {
			cin >> a >> b >> cost >> time;
			--a, --b;
			datas[a][b][0] = cost, datas[a][b][1] = time;
			datas[b][a][0] = cost, datas[b][a][1] = time;
		}
		
		for (int i = 0; i < m; ++i)
			for (int j = 0; j < m; ++j)
				for (k = 0; k < m; ++k) {
					if (datas[j][i][0]+datas[i][k][0] < datas[j][k][0])
						datas[j][k][0] = datas[j][i][0]+datas[i][k][0];
					
					if (datas[j][i][1]+datas[i][k][1] < datas[j][k][1])
						datas[j][k][1] = datas[j][i][1]+datas[i][k][1];
				}
		
		cin >> k;
		for (int i = 0; i < k; ++i) {
			cin >> p >> q >> r;
			cout << datas[p-1][q-1][r] << endl;
		}

	}
	return 0;
}