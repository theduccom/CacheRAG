#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n; cin >> n;
	int M; cin >> M;
	int m[20][20]; fill(&m[0][0], &m[0][0]+20*20, 1e9);
	for (int i = 0; i < M; ++i) {
		int a, b, c, d; scanf("%d,%d,%d,%d", &a, &b, &c, &d); --a, --b;
		m[a][b] = c;
		m[b][a] = d;
	}
	for (int i = 0; i < n; ++i) m[i][i] = 0;

	for (int k = 0; k < n; ++k) for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) {
		m[i][j] = min(m[i][j], m[i][k] + m[k][j]);
	}

	int s, t, award, cost; scanf("%d,%d,%d,%d", &s, &t, &award, &cost); --s, --t;
	award -= cost + m[s][t] + m[t][s];
	cout << award << endl;
}