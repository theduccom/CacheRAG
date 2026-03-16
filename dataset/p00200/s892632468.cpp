#include <iostream>
#include <cstdio>
#include <algorithm>

#define INF (1e9)

#define MAX_N 3000
#define MAX_M 100

using namespace std;

int cost[MAX_M + 1][MAX_M + 1][2];

int N,M;
int K;


void init(){
	for(int i = 0;i <= MAX_M;i++){
		for(int j = 0;j <= MAX_M;j++){
			for(int k = 0;k < 2;k++){
				if(i != j) cost[i][j][k] = INF;
				else cost[i][j][k] = 0;
			}
		}
	}

	return ;
}

void solve(){
	for(int k = 1;k <= M;k++){
		for(int i = 1;i <= M;i++){
			for(int j = 1;j <= M;j++){
				for(int h = 0;h < 2;h++){
					cost[i][j][h] = min(cost[i][j][h],cost[i][k][h] + cost[k][j][h]);
				}
			}
		}
	}


	return ;
}

int query(int u,int v,int r){
	return cost[u][v][r];
}

int main(){

	while(true){
		init();
		scanf("%d%d",&N,&M);
		if(N == 0 && M == 0) break;
		int _u,_v;
		int _c,_t;
		for(int i = 0;i < N;i++){
			scanf("%d%d%d%d",&_u,&_v,&_c,&_t);
			cost[_u][_v][0] = _c;
			cost[_v][_u][0] = _c;
			cost[_u][_v][1] = _t;
			cost[_v][_u][1] = _t;
		}
	
		solve();
	
		scanf("%d",&K);
		int _r;
		for(int i = 0;i < K;i++){
			scanf("%d%d%d",&_u,&_v,&_r);
			printf("%d\n",query(_u,_v,_r));
		}
	}

	return 0;

}