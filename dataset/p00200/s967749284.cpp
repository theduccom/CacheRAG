#include <list>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#define INF (1LL << 60)
using namespace std;
bool used[100]; long long dist[100];
void dijkstra(int V, int E, int s, vector<pair<int, long long> > X[]) {
	priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > Q;
	for (int i = 0; i < V; i++) dist[i] = INF, used[i] = false;
	dist[s] = 0; Q.push(make_pair(0, s));
	int cnt = 0;
	while (!Q.empty()) {
		if (cnt > E) return; // NEGATIVE_CYCLE
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
int n, m, q, a, b, c, u, v, w1, w2; vector<pair<int, long long> > G1[100], G2[100];
int main() {
	while(cin >> n >> m, n) {
		for(int i = 0; i < m; i++) G1[i].clear(), G2[i].clear();
		for(int i = 0; i < n; i++) {
			cin >> u >> v >> w1 >> w2; u--, v--;
			G1[u].push_back(make_pair(v, w1));
			G1[v].push_back(make_pair(u, w1));
			G2[u].push_back(make_pair(v, w2));
			G2[v].push_back(make_pair(u, w2));
		}
		cin >> q;
		for(int i = 0; i < q; i++) {
			cin >> a >> b >> c; a--, b--;
			if(c == 0) {
				dijkstra(m, n, a, G1);
				cout << dist[b] << endl;
			}
			else {
				dijkstra(m, n, a, G2);
				cout << dist[b] << endl;
			}
		}
	}
}