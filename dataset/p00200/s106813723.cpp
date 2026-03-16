#include <iostream>
#include <queue>
using namespace std;

const int INF = 20000000;
const int MAX_M = 100;

struct data{
	int cost;
	int time;
};

int main(){
	data ds[MAX_M+1][MAX_M+1];
	int n, m, k;
	int a, b, time, cost;
	int p, q, r;
	while(cin >> n >> m){
		if(n == 0 && m == 0) break;
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= m; j++){
				ds[i][j].cost = ds[i][j].time = INF;
			}
		}
		for(int i = 0; i < n; i++){
			cin >> a >> b >> cost >> time;
			ds[a][b].cost = ds[b][a].cost = cost;
			ds[a][b].time = ds[b][a].time = time;
		}
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= m; j++){
				if(ds[j][i].cost != INF)
					for(int k = 1; k <= m; k++){
						if(ds[j][k].cost > ds[j][i].cost + ds[i][k].cost)
							ds[j][k].cost = ds[j][i].cost + ds[i][k].cost;
					}
				if(ds[j][i].time != INF)
					for(int k = 1; k <= m; k++){
						if(ds[j][k].time > ds[j][i].time + ds[i][k].time)
							ds[j][k].time = ds[j][i].time + ds[i][k].time;
					}
			}
		}
		cin >> k;
		for(int i = 0; i < k; i++){
			cin >> p >> q >> r;
			if(r) cout << ds[p][q].time << endl;
			else cout << ds[p][q].cost << endl;;
		}
	}
	return 0;
}