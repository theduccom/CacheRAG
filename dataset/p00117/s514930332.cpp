#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional>
#include <cstdio>

const int N = 21;
const int infi = (int)1e9 + 7;

typedef std::pair<int, int> P;

int n, m;
std::vector<P> g[N];
int cost[N];

void dijkstra(int k){
	for(int i = 0; i < n; ++i)cost[i] = infi;
	cost[k] = 0;
	std::priority_queue<P, std::vector<P>, std::greater<P> >que;
	que.push(P(0, k));
	
	while(!que.empty()){
		P p = que.top();
		que.pop();
		
		int v = p.second;
		if(cost[v] < p.first)continue;
		
		for(int i = 0; i < g[v].size(); ++i){
			int to = g[v][i].first;
			if(cost[to] > cost[v] + g[v][i].second){
				cost[to] = cost[v] + g[v][i].second;
				que.push(P(cost[to], to));
			}
		}
	}
}

int main(){
	std::cin >> n >> m;
	for(int i = 0; i < m; ++i){
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		--a, --b;
		
		g[a].push_back(P(b, c));
		g[b].push_back(P(a, d));
	}
	
	int s, gg, v, p;
	scanf("%d,%d,%d,%d", &s, &gg, &v, &p);
	--s, --gg;
	dijkstra(s);
	v -= cost[gg];
	dijkstra(gg);
	v -= cost[s];
	v -= p; 
	printf("%d\n", v);
	
	return 0;
}