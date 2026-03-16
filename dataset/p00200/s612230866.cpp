#include <iostream>
#include <vector>

using namespace std;

#define INF 1e9

void wf(vector< vector<int> >& m) {
	int N = m.size();
	for (int k = 0; k < N; ++k) for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j) {
		m[i][j] = min(m[i][j], m[i][k] + m[k][j]);
	}
}

int main() {
	int n, N;
	while (cin >> n >> N, n || N) {
		vector< vector<int> > cost(N, vector<int>(N, INF));
		vector< vector<int> > time(N, vector<int>(N, INF));
		for (int i = 0; i < N; ++i) cost[i][i] = time[i][i] = 0;
		for (int i = 0; i < n; ++i) {
			int a, b, c, t;
			cin >> a >> b >> c >> t; --a, --b;
			cost[a][b] = cost[b][a] = c;
			time[a][b] = time[b][a] = t;
		}

		wf(cost);
		wf(time);

		int k; cin >> k;
		for (int t = 0; t < k; ++t) {
			int p, q, r; cin >> p >> q >> r; --p, --q;
			vector< vector<int> >& m = r == 0 ? cost : time;
			cout << m[p][q] << endl;
		}
	}
}