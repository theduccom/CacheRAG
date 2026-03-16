#include<iostream>
#include<stdio.h>
#include<vector>
#include<stdlib.h>
#include<set>
#include<string>
#include<queue>
#include<map>

#define INF 9999999

using namespace std;

int main(){

	int n, m;
	int a, b, c, t;

	int resultOfCost[110][110] = {0};
	int resultOfTime[110][110] = {0};

	for (;;){
		cin >> n >> m;

		if (n == 0 && m == 0)
			break;

		
		for (int i = 0; i < m; i++){
			for (int j = 0; j < m; j++){
				if (i != j){
					resultOfCost[i][j] = INF;
					resultOfTime[i][j] = INF;
				}
			}
		}
		
		for (int i = 0; i < n; i++){
			cin >> a >> b >> c >> t;
			a--; b--;
			resultOfCost[a][b] = c;
			resultOfCost[b][a] = c;
			resultOfTime[a][b] = t;
			resultOfTime[b][a] = t;
		}

		for (int y = 0; y < m; y++){
			for (int x = 0; x < m; x++){
				for (int z = 0; z < m; z++){
					resultOfCost[x][z] = min(resultOfCost[x][z], resultOfCost[x][y] + resultOfCost[y][z]);
					resultOfTime[x][z] = min(resultOfTime[x][z], resultOfTime[x][y] + resultOfTime[y][z]);
				}
			}
		}

		int k;
		cin >> k;

		int p, q, r;
		for (int i = 0; i < k; i++){
			cin >> p >> q >> r;
			p--; q--;
			if (r == 0){
				cout << resultOfCost[p][q] << endl;
			}
			else{
				cout << resultOfTime[p][q] << endl;
			}
		}
	}
	return 0;
}