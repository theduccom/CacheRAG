#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 1 << 25;

int cost[100][100];
int tmin[100][100];

int main() {
	int n, m, query;
	while (cin >> n >> m , n) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++) {
				cost[i][j] = (i == j) ? 0 : INF;
				tmin[i][j] = (i == j) ? 0 : INF;
			}
		}

		while (n--) {
			int a, b, c, t;
			cin >> a >> b >> c >> t;
			cost[a - 1][b - 1] = cost[b - 1][a - 1] = c;
			tmin[a - 1][b - 1] = tmin[b - 1][a - 1] = t;
		}

		for (int k = 0; k < m; k++) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++) {
					cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
					tmin[i][j] = min(tmin[i][j], tmin[i][k] + tmin[k][j]);
				}
			}
		}

		cin >> query;
		while (query--) {
			int p, q, r;
			cin >> p >> q >> r;
			if (r == 0) {
				cout << cost[p - 1][q - 1] << endl;
			}
			else {
				cout << tmin[p - 1][q - 1] << endl;
			}
		}
	}
}