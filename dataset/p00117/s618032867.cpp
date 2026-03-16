#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
//
int main(void){

	char str;
	int n, m, a, b, c, d, s, g, s_cost, g_cost;
	int cost[21][21];

	cin >> n >> m;

	for (int i = 1; i < n+1; i++){
		for (int j = 1; j < n+1; j++) cost[i][j] = 1001;
	}

	for (int i = 0; i < m; i++){

		cin >> a >> str >> b  >> str >> c >> str >> d;

		cost[a][b] = c;
		cost[b][a] = d;
	}

	cin >> s >> str >> g >> str >> s_cost >> str >> g_cost;

	/*for (int i = 1; i < n + 1; i++){
		for (int j = 1; j < n + 1; j++) printf("%5d",cost[i][j]);
		cout << endl;
	}
	cout << endl;*/

	for (int i = 1; i < n + 1; i++){
		for (int j = 1; j < n + 1; j++){
			for (int k = 1; k < n + 1; k++){
				cost[j][k] = min(cost[j][k], cost[j][i] + cost[i][k]);
				//printf("%5d", cost[i][j]);
			}
			//cout << endl;
		}
		//cout << endl;
	}

	cout << s_cost - g_cost - cost[s][g] - cost[g][s] << endl;
}