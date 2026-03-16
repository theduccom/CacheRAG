#include <iostream>
#include <algorithm>
#define INF 1000000
using namespace std;
int cost[100][100];
int t[100][100];
int d[100];
int m;

void dcost(int s) {
	bool used[100];
	fill(used, used + 100, false);
	fill(d, d + 100, INF);
	d[s] = 0;
	while (1) {
		int v = -1;
		for (int u = 0; u < m; ++u) {
			if (!used[u] && (v == -1 || d[u] < d[v])) v = u;
		}
		if (v == -1) break;
		used[v] = true;

		for (int u = 0; u < m; ++u) {
			d[u] = d[u] < d[v] + cost[v][u] ? d[u] : d[v] + cost[v][u];
		}
	}
}

void dtime(int s) {
	bool used[100];
	fill(used, used + 100, false);
	fill(d, d + 100, INF);
	d[s] = 0;
	while (1) {
		int v = -1;
		for (int u = 0; u < m; ++u) {
			if (!used[u] && (v == -1 || d[u] < d[v])) v = u;
		}
		if (v == -1) break;
		used[v] = true;

		for (int u = 0; u < m; ++u) {
			d[u] = d[u] < d[v] + t[v][u] ? d[u] : d[v] + t[v][u];
		}
	}
}

int main() {
	int n, k, a, b, p, q, r;
	
	while (cin >> n >> m, !(n == 0 && m == 0)) {
		fill(cost[0], cost[100], INF);
		fill(t[0], t[100], INF);
		while (n--) {
			cin >> a >> b;
			a--; b--;
			cin >> cost[a][b] >> t[a][b];
			cost[b][a] = cost[a][b];
			t[b][a] = t[a][b];
		}
		cin >> k;
		while (k--) {
			cin >> p >> q >> r;
			p--; q--;
			if (r == 1) dtime(p);
			else dcost(p);
			cout << d[q] << endl;
		}
		
	}
	return 0;
}