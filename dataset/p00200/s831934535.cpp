#include <iostream>
#include <cstdio>
#include <cmath>
#define INF 100000000
using namespace std;

int main(){
	int cost[100][100],tim[100][100];
	int n,m,l;
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0) break;
	for(int i = 0;i < m;i++){
		for(int j = 0;j < m;j++) {
			cost[i][j] = INF;
			tim[i][j] = INF;
		}
		cost[i][i] = 0;
		tim[i][i] = 0;
	}
	for(int i = 0;i < n;i++){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		cost[a - 1][b - 1] = c;
		cost[b - 1][a - 1] = c;
		tim[a - 1][b - 1] = d;
		tim[b - 1][a - 1] = d;
	}
	for(int k = 0;k < m;k++){
		for(int i = 0;i < m;i++){
			for(int j = 0;j < m;j++) {
				cost[i][j] = min(cost[i][j],cost[i][k] + cost[k][j]);
				tim[i][j] = min(tim[i][j],tim[i][k] + tim[k][j]);
			}
		}
	}
	cin >> l;
	for(int i = 0;i < l;i++){
		int a,b,c;
		cin >> a >> b >> c;
		if(!c) cout << cost[a - 1][b - 1] << endl;
		else cout << tim[a - 1][b - 1] << endl;
	}
	}
	return 0;
}