#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>
#include <functional>
#include <cstdlib>
#include <numeric>
#include <queue>
#include <complex>
#include <sstream>
#include <stack>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef complex<double> Point;

struct Edge
{
	int src, dst;
	int weight;
	Edge(int src, int dst, int weight) : src(src), dst(dst), weight(weight) {}

	bool operator< (const Edge& e)const
	{
		return weight != e.weight ? weight > e.weight :
			src != e.src ? src < e.src : dst < e.dst;
	}
};

typedef vector<Edge> Edges;
typedef vector<Edges> Graph;

void Dijkstra(const Graph& g, int s, vi& dist, vi& prev)
{
	int n = g.size();
	dist.assign(n, INT_MAX);
	dist[s] = 0;
	prev.assign(n, -1);
	
	priority_queue<Edge> Q;
	Q.push(Edge(-2, s, 0));

	while(!Q.empty()){
		Edge e = Q.top();
		Q.pop();
		if(prev[e.dst] != -1)
			continue;
		prev[e.dst] = e.src;

		rep(i, g[e.dst].size()){
			int pw = e.weight + g[e.dst][i].weight;
			if(dist[g[e.dst][i].dst] > pw){
				dist[g[e.dst][i].dst] = pw;
				Q.push(Edge(g[e.dst][i].src, g[e.dst][i].dst, pw));
			}
		}
	}
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	
	Graph g(n);
	rep(i, m){
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		--a; --b;
		g[a].push_back(Edge(a, b, c));
		g[b].push_back(Edge(b, a, d));
	}
	
	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	--x1; --x2;
	
	vi dist, prev;
	Dijkstra(g, x1, dist, prev);
	int cost = dist[x2];
	Dijkstra(g, x2, dist, prev);
	cost += dist[x1];
	
	printf("%d\n", y1-y2-cost);
	
	return 0;
}