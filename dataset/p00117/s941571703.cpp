#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<vector>
#include<functional>
#include<queue>

const int INF = 1 << 30;	
typedef std::pair<int, int> P;
struct edge{ 
	int to, cost; 

	edge(int to, int cost)
		: to(to), cost(cost)
	{}
};
const int V = 20;
std::vector<edge> G[V];
int d[V];

void dijkstra(int s){
	std::priority_queue<P, std::vector<P>, std::greater<P>> que;
	std::fill(d, d + V, INF);
	d[s] = 0;
	que.push(P(0, s));
	while (!que.empty()){
		P p = que.top();
		que.pop();
		int v = p.second;
		if (d[v] < p.first)continue;
		for (int i = 0; i < G[v].size(); ++i){
			edge e = G[v][i];
			if (d[e.to] > d[v] + e.cost){
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i != m; ++i)
	{
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		G[a].push_back(edge(b, c));
		G[b].push_back(edge(a, d));
	}
	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	dijkstra(x1);
	y1 -= d[x2];
	dijkstra(x2);
	y1 -= d[x1];
	y1 -= y2;
	printf("%d\n", y1);
	return 0;
}