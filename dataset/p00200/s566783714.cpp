#include<iostream>
#include<vector>
#include<queue>
#include<functional>

constexpr int MAX_N = 100, INF = (int)1e8;

using P = std::pair<int, int>;

struct edge {
	int to, cost;
	edge() = default;
	edge(int _t, int _c) : to(_t), cost(_c) {}
};

int n;
std::vector<edge> G[2][MAX_N];//0:??????,1:??????

int d[MAX_N];

int dijkstra(int s, int g, int index) {
	std::fill(d, d + n, INF);
	d[s] = 0;
	std::priority_queue<P, std::vector<P>, std::greater<P>> que;
	que.emplace(d[s], s);
	while (!que.empty()) {
		P p = que.top();
		que.pop();
		if (p.second == g)
			return d[g];
		if (d[p.second] > p.first)
			continue;
		for (int i = 0; i < G[index][p.second].size(); ++i) {
			edge e = G[index][p.second][i];
			if (d[e.to] > d[p.second] + e.cost) {
				d[e.to] = d[p.second] + e.cost;
				que.emplace(d[e.to], e.to);
			}
		}
	}
	return -1;
}

int main() {
	while (1) {
		int m;
		std::cin >> m >> n;
		if (m + n == 0)
			break;
		int a, b, c, t;
		for (int i = 0; i < m; ++i) {
			std::cin >> a >> b >> c >> t;
			--a;
			--b;
			G[0][a].emplace_back(b, c);
			G[0][b].emplace_back(a, c);
			G[1][a].emplace_back(b, t);
			G[1][b].emplace_back(a, t);
		}
		int q, r;
		std::cin >> q;
		int p[2];
		for (int i = 0; i < q; ++i) {
			std::cin >> p[0] >> p[1] >> r;
			--p[0];
			--p[1];
			std::cout << dijkstra(p[0], p[1], r) << std::endl;
		}
		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < n; ++j)
				G[i][j].clear();
		}
	}
	return 0;
}