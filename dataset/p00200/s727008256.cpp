# include <iostream>
# include <vector>
# include <queue>
# include <functional>

constexpr int MAX_N = 100;
constexpr int INF = 100000000;

typedef std::pair<int, int> P;

struct edge {
	int to, cost;
	edge(int t, int c) : to(t), cost(c) {}
};

int n, m, K;
std::vector<edge> G[2][MAX_N];
int d[MAX_N];

void dijkstra(int s, int r) {
	std::fill(d, d + n, INF);
	d[s] = 0;
	std::priority_queue<P, std::vector<P>, std::greater<P>> que;
	que.push(P(d[s], s));

	while (!que.empty()) {
		P p = que.top(); que.pop();
		int v = p.second;
		if (p.first > d[v])
			continue;
		for (int i = 0; i < G[r][v].size(); ++i) {
			edge e = G[r][v][i];
			if (d[e.to] > d[v] + e.cost) {
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}
}

int main() {
	int a, b, c, t;
	while (1) {
		std::cin >> m >> n;
		if (m + n == 0)
			break;

		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < n; ++j)
				G[i][j].clear();
		}

		for (int i = 0; i < m; ++i) {
			std::cin >> a >> b >> c >> t;
			G[0][a - 1].push_back(edge(b - 1, c));
			G[0][b - 1].push_back(edge(a - 1, c));
			G[1][a - 1].push_back(edge(b - 1, t));
			G[1][b - 1].push_back(edge(a - 1, t));
		}
		std::cin >> K;
		int p, q, r;
		for (int i = 0; i < K; ++i) {
			std::cin >> p >> q >> r;
			dijkstra(p - 1, r);
			std::cout << d[q - 1] << std::endl;
		}
	}
	return 0;
}