#include <iostream>
#include <cstdio>
#include <algorithm>

#define INF (1e+9)

#define MAX_N 20

using namespace std;

int cost[MAX_N + 1][MAX_N + 1];

int N,M;


void init(){
	for(int i = 0;i <= MAX_N;i++){
		for(int j = 0;j <= MAX_N;j++){
			if(i == j) cost[i][j] = 0;
			else cost[i][j] = INF;
		}
	}
	return ;
}

void solve(){
	for(int k = 1;k <= N;k++){
		for(int i = 1;i <= N;i++){
			for(int j = 1;j <= N;j++){
				cost[i][j] = min(cost[i][j],cost[i][k] + cost[k][j]);
			}
		}
	}

	return ;
}

int main(){
	init();
	scanf("%d%d",&N,&M);
	int _u,_v;
	int _cost0;
	int _cost1;
	for(int i = 0;i < M;i++){
		scanf("%d,%d,%d,%d",&_u,&_v,&_cost0,&_cost1);
		cost[_u][_v] = _cost0;
		cost[_v][_u] = _cost1;
	}
	
	solve();

	int rest,price;
	scanf("%d,%d,%d,%d",&_u,&_v,&rest,&price);
	int ans = rest - price - cost[_u][_v] - cost[_v][_u];
	printf("%d\n",ans);


	return 0;
}