#include <list>
#include <queue>
#include <vector>
#include <algorithm>
#include <functional>
#define INF (1LL << 60)
using namespace std;
bool used[200000]; long long dist[200000];
void dijkstra(int V, int E, int s, vector<pair<int, long long> > X[]) {
	priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > Q;
	for (int i = 0; i < V; i++) dist[i] = INF, used[i] = false;
	dist[s] = 0; Q.push(make_pair(0, s));
	int cnt = 0;
	while (!Q.empty()) {
		if (cnt > E) return;
		pair<long long, int> p = Q.top(); used[p.second] = true; Q.pop();
		for (int i = 0; i < X[p.second].size(); i++) {
			int to = X[p.second][i].first; long long leng = X[p.second][i].second;
			if (dist[to] > dist[p.second] + leng && !used[to]) {
				dist[to] = dist[p.second] + leng;
				Q.push(make_pair(dist[to], to));
			}
		}
	}
}
int V, E, a, b, c, d, f1, f2, g1, g2; vector<pair<int, long long> > G[200000];
int main() {
	scanf("%d%d", &V, &E);
	for(int i = 0; i < E; i++) {
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		G[a - 1].push_back(make_pair(b - 1, c));
		G[b - 1].push_back(make_pair(a - 1, d));
	}
	scanf("%d,%d,%d,%d", &f1, &f2, &g1, &g2); g1 -= g2;
	dijkstra(V, E, f1 - 1, G); g1 -= dist[f2 - 1];
	dijkstra(V, E, f2 - 1, G); g1 -= dist[f1 - 1];
	printf("%d\n", g1);
}