#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <queue>

#define INF (1 << 28)

using namespace std;

int cost[200][200], dist[200][200];

int main(){
	
	int n, m;
	
	while(true){
		
		cin >> n >> m;
		
		if(n == 0 && m == 0){
			break;
		}
		
		for(int i = 0; i <= m; i++){
			for(int j = 0; j <= m; j++){
				cost[i][j] = INF;
				cost[j][i] = INF;
				dist[i][j] = INF;
				dist[j][i] = INF;
			}
		}
		for(int i = 0; i <= m; i++){
			cost[i][i] = 0;
			dist[i][i] = 0;
		}
		
		for(int i = 0; i < n; i++){
			int a, b, c, t;
			cin >> a >> b >> c >> t;
			cost[a][b] = c;
			cost[b][a] = c;
			dist[a][b] = t;
			dist[b][a] = t;
		}
		
		for(int i = 0; i <= m; i++){
			for(int j = 0; j <= m; j++){
				for(int k = 0; k <= m; k++){
					cost[j][k] = min(cost[j][k], cost[j][i] + cost[i][k]);
					dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
				}
			}
		}
		
		int k;
		
		cin >> k;
		
		for(int loop = 0; loop < k; loop++){
			int p, q, r;
			cin >> p >> q >> r;
			if(r == 0){
				cout << cost[p][q] << endl;
			}else{
				cout << dist[p][q] << endl;
			}
		}
		
	}
	
	return 0;
}