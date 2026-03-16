#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int kInf = 1 << 20;
int dtime[101][101];
int dcost[101][101];

int n, m;

void wf() {
	for(int k = 1; k <= m; k++)
		for(int i = 1; i <= m; i++)
			for (int j = 1; j <= m; j++) {
				dtime[i][j] = min(dtime[i][j], dtime[i][k] + dtime[k][j]);
				dcost[i][j] = min(dcost[i][j], dcost[i][k] + dcost[k][j]);
			}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while (cin >> n >> m, n || m) {
		fill(dtime[0], dtime[101], kInf);
		fill(dcost[0], dcost[101], kInf);
		for (int i = 0; i < 101; i++)
			dtime[i][i] = dcost[i][i] = 0;
		for (int i = 0; i < n; i++) {
			int a, b, cost, time;
			cin >> a >> b >> cost >> time;
			dtime[a][b] = dtime[b][a] = time;
			dcost[a][b] = dcost[b][a] = cost;
		}
		wf();
		int k;
		cin >> k;
		for (int i = 0; i < k; i++) {
			int p, q, r;
			cin >> p >> q >> r;
			if(r)
				cout << dtime[p][q] << endl;
			else
				cout << dcost[p][q] << endl;
		}
	}
}