#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
 using namespace std;

const double inf = (int)1e8;

int cost[2][100][100];
int d[100];
bool used[100];
int n, m;

int dijkstra(int s, int e, int req){
	fill(d, d+m, inf);
	fill(used, used+m, false);
	d[s] = 0;

	while(true){
//		cout << "hogehoge" << endl;

		int v = -1;

		for(int u =  0; u < m; u++){
			if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
		}

		if(v == -1) break;

		used[v] = true;

		for(int u = 0; u < m; u++){
			d[u] = min(d[u], d[v] + cost[req][v][u]);
		}
	}
	return d[e];
}

//#define DEBUG

int main(){
	while(cin >> n >> m){
		if(n == 0 && m == 0) break;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < m; j++)
				for(int k = 0; k < m; k++){
					cost[i][j][k] = inf;
				}
		}
		for(int i = 0; i < n; i++){
			int a, b, c, t;
			cin >> a >> b >> c >> t;
			a--; b--;
			cost[0][a][b] = c;
			cost[0][b][a] = c;

			cost[1][a][b] = t;
			cost[1][b][a] = t;
		}

#ifdef DEBUG
	//test
		for(int i	= 0; i < m; i++){
			for(int j = 0; j < m; j++){
				cout << cost[0][i][j] << " ";
			}
		}
#endif

		int  num;
		cin >> num;
		for(int i = 0; i < num; i++){
			int p, q, req;
			cin >> p >> q >> req;
			p--; q--;
			cout << dijkstra(p, q, req) << endl;
		}
	}
}