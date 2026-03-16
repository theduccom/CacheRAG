#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#define _m_ 1
const int INF = 1e9;

int cost[101][101];
int tim[101][101];
int d[101];
bool used[101];
int V;

void dijkstra(int s, int o){
	std::fill(d, d + V, INF);
	std::fill(used, used + V, false);
	d[s] = 0;
	while(_m_){
		int v = -1;
		for(int u = 0; u < V; ++u){
			if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
		}
		if(v == -1)break;
		used[v] = true;
		if(o == 0){
			for(int u = 0; u < V; ++u){
				d[u] = std::min(d[u], d[v] + cost[v][u]);
			}
		}else {
			for(int u = 0; u < V; ++u){
				d[u] = std::min(d[u], d[v] + tim[v][u]);
			}
		}
	}
}

int main(){
	int n, m;
	while(scanf("%d %d",&n,&m), n+m){
		for(int i=0;i<m;++i){
			for(int j=0;j<m;++j){
				cost[i][j]=INF;
				tim[i][j]=INF;
			}
		}
		for(int i = 0; i < n; ++i){
			int a, b, co, ti;
			scanf("%d %d %d %d",&a, &b, &co, &ti);
			a--,b--;
			cost[a][b] = co, cost[b][a] = co;
			tim[a][b] = ti, tim[b][a] = ti;
		}
		V = m;
		int k;
		scanf("%d", &k);
		for(int i = 0; i < k; ++i){
			int p, q, r;
			scanf("%d %d %d", &p, &q, &r);
			p--, q--;
			dijkstra(p, r);
			printf("%d\n", d[q]);
		}
	}
}