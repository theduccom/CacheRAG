#include <cstdio>
#include <algorithm>
using namespace std;

const int INF = 1 << 25;
const int MAX_V = 30 * 30;
int cost[MAX_V][MAX_V];
int d[MAX_V];
bool used[MAX_V];
int V;

void dijkstra(int s) {
	fill(d, d + V, INF);
	fill(used, used + V, false);
	d[s] = 0;

	while(true) {
		int v = -1;
		for(int u = 0; u < V; u++) {
			if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
		}
		if(v == -1) break;

		used[v] = true;
		for(int u = 0; u < V; u++) {
			d[u] = min(d[u], d[v] + cost[v][u]);
		}
	}
}
int main() {
	int n, m, s, g, money, pillar;
	scanf("%d %d", &n, &m);
	V = n;

	for(int i = 0; i < V; i++) {
		for(int j = 0; j < V; j++) {
			cost[i][j] = (i == j) ? 0 : INF;
		}
	}
	for(int i = 0; i < m; i++) {
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		a--, b--;
		cost[a][b] = c;
		cost[b][a] = d;
	}
	scanf("%d,%d,%d,%d", &s, &g, &money, &pillar);
	s--, g--;
	int sum = pillar;
	dijkstra(s);
	sum += d[g];
	dijkstra(g);
	sum += d[s];
	printf("%d\n", money - sum);
}