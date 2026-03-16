#include <iostream>
#include <cstdio>
#include <algorithm>
#define MAX_V 190
#define INF 100000
using namespace std;
int go[MAX_V];
int back[MAX_V];
bool used[MAX_V];
int cost[MAX_V][MAX_V];
int n;

void dijkstra(int s, int d[]) {
	fill(d, d + n + 1, INF);
	fill(used, used + n + 1, false);
	d[s] = 0;

	while (1) {
		int v = -1;
		for (int i = 1; i <= n; ++i) {
			if (!used[i] && (v == -1 || d[i] < d[v])) v = i;
		}
		if (v == -1) break;
		used[v] = true;

		for (int i = 1; i <= n; ++i) {
			d[i] = min(d[i], d[v] + cost[v][i]);
		}
	}
}

int main() {
	int m, a, b, c, d, x1, x2, y1, y2;

	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		fill(cost[i], cost[i] + n + 1, INF);
	}
	while (m--) {
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		cost[a][b] = c; cost[b][a] = d;
	}
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	dijkstra(x1, go);
	dijkstra(x2, back);
	cout << y1 - (go[x2] + back[x1] + y2) << endl;
	return 0;
}