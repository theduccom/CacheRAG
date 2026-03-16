#include <iostream>
#include <queue>
#include <vector>
#include <functional>

constexpr int MAX_N = 20;
constexpr int INF = (int)1e7;
using P = std::pair<int, int>;

struct edge {
	int to, cost;
	edge() = default;
	edge(const edge&) = default;
	edge(int _t, int _c) : to(_t), cost(_c) {}
	edge& operator= (const edge&) = default;
};

int n, m;
std::vector<edge> G[MAX_N];
int f, t, mym, cm;
int d[MAX_N];

int dijkstra(int s, int g) {
	std::fill(d, d + n, INF);
	std::priority_queue<P, std::vector<P>, std::greater<P>> que;
	d[s] = 0;
	que.push(P(0, s));

	while (!que.empty()) {
		P p = que.top(); que.pop();
		int v = p.second;

		if (v == g)
			break;

		if (d[v] < p.first)
			continue;

		for (int i = 0; i < G[v].size(); ++i) {
			edge e = G[v][i];
			if (d[e.to] > d[v] + e.cost) {
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}
	return d[g];
}

int main() {
	std::cin >> n >> m;
	char ch;
	int a, b, c, d;
	for (int i = 0; i < m; ++i) {
		std::cin >> a >> ch >> b >> ch >> c >> ch >> d;
		--a;
		--b;
		G[a].push_back(edge(b, c));
		G[b].push_back(edge(a, d));
	}
	std::cin >> f >> ch >> t >> ch >> mym >> ch >> cm;

	--f;
	--t;

	int x = dijkstra(f, t), y = dijkstra(t, f);
	int ans = mym - cm - x - y;
	std::cout << ans << std::endl;
	return 0;
}