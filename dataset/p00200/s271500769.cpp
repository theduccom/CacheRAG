#include<iostream>
#include<algorithm>
const int INF = 1<<20;
const int N = 101;
int cost[N][N];
int tim[N][N];
using namespace std;
int main()
{
	int n, m, a, b, co, ti,r;
	while (1){
		cin >> n >> m;
		if (n == 0 && m == 0)return 0;
		for (int i = 0; i < N; i++){
			for (int i2 = 0; i2 < N; i2++){
				cost[i][i2] = INF;
				tim[i][i2] = INF;
			}
		}
		for (int i = 0; i < n; i++){
			cin >> a >> b >> co >> ti;
			cost[a][b] = co;
			cost[b][a] = co;
			tim[a][b] = ti;
			tim[b][a] = ti;
		}
		for (int k = 0; k < N; ++k)
			for (int i = 0; i < N; ++i)
				for (int j = 0; j < N; ++j)
				{
					cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
					tim[i][j] = min(tim[i][j], tim[i][k] + tim[k][j]);
				}
		cin >> m;
		for (int i = 0; i < m; i++){
			cin >> a >> b >> r;
			if (r == 0){
				cout << cost[a][b] << endl;
			}
			else
				cout << tim[a][b] << endl;
		}
	}
}