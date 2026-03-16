#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 100000000;
const int MAX_N = 100;
int main() {
	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)break;
		int t[MAX_N + 1][MAX_N + 1];
		int yen[MAX_N + 1][MAX_N + 1];
		for (int i = 0; i < MAX_N; i++) {
			for (int j = 0; j < MAX_N; j++) {
				if (i == j) t[i][j] = 0, yen[i][j] = 0;
				else t[i][j] = INF, yen[i][j] = INF;
			}
		}
		for (int i = 0; i < n; i++) {
			int a, b, cost, time;
			cin >> a >> b >> cost >> time;
			a--, b--;
			t[a][b] = time, t[b][a] = time;
			yen[a][b] = cost, yen[b][a] = cost;

		}
		for (int k = 0; k < m; k++) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++) {
					t[i][j] = min(t[i][j], t[i][k] + t[k][j]);
					yen[i][j] = min(yen[i][j], yen[i][k] + yen[k][j]);
				}
			}
		}
		int k;
		cin >> k;
		for (int i = 0; i < k; i++) {
			int p, q, r;
			cin >> p >> q >> r;
			if (r == 0) cout << yen[p-1][q-1] << endl;
			else cout << t[p-1][q-1] << endl;
		}
	}
}

