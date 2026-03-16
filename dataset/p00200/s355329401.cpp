#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

#define INF 1e9

int cost[101][101];
int times[101][101];
int cost_d[101];
int time_d[101];
bool used[101];
int V;
int E;

void cost_dijkstra(int s) {
	for (int i = 0; i < V; i++) {
		cost_d[i] = INF;
		used[i] = false;
	}
	cost_d[s] = 0;
	
	while (true) {
		int v = -1;
		for (int u = 0; u < V; u++) {
			if (!used[u] && (v == -1 || cost_d[u] < cost_d[v])) {
				v = u;
			}
		}
		//全ての頂点が到達済み
		if (v == -1) {
			break;
		}
		//集合に新たに頂点を追加
		used[v] = true;
		for (int u = 0; u < V; u++) {
			if (cost[v][u] != -1) {
				cost_d[u] = min(cost_d[u], cost_d[v] + cost[v][u]);
			}
		}

	}
}
void time_dijkstra(int s) {
	for (int i = 0; i < V; i++) {
		time_d[i] = INF;
		used[i] = false;
	}
	time_d[s] = 0;

	while (true) {
		int v = -1;
		for (int u = 0; u < V; u++) {
			if (!used[u] &&( v == -1 || time_d[u] < time_d[v])) {
				v = u;
			}
		}
		//全ての頂点が到達済み
		if (v == -1) {
			break;
		}
		//集合に新たに頂点を追加
		used[v] = true;
		for (int u = 0; u < V; u++) {
			if (cost[v][u] != -1) {
				time_d[u] = min(time_d[u], time_d[v] + times[v][u]);
			}
		}

	}
}

int main() {


	while (cin >> E >> V, (E != 0 && V != 0)) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				cost[i][j] = -1;
				times[i][j] = -1;
			}
		}
		
		for (int i = 0; i < E; i++) {
			int a, b,c,t;
			cin >> a >> b>>c>>t;
			cost[a - 1][b - 1] = cost[b - 1][a - 1] = c;
			times[a - 1][b - 1] = times[b - 1][a - 1] = t;
		}
	
		int k;//クエリの数
		cin >> k;
		
		for(int i=0;i<k;i++){
			int p, q, r;
			cin >> p>>q>>r;
			
			//cost
			if (r == 0) {
				cost_dijkstra(p-1);
				cout << cost_d[q-1] << endl;
			}
			//time
			else if(r==1){

				time_dijkstra(p-1);
				cout << time_d[q-1] << endl;
			}
			
		}
	}
	return 0;
}









