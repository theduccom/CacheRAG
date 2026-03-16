#define _USE_MATH_DEFINES
#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
#include<cmath>
#include<climits>
using namespace std;

int main(){
	int N, M, K;
	int cost[100][100], time[100][100];
	while(cin >> N >> M, N || M){
		fill_n( (int*)cost, 100*100, 1e6 );
		fill_n( (int*)time, 100*100, 1e6 );
		int A, B;
		for(int i = 0; i < N; i++){
			cin >> A >> B;
			A--; B--;
			cin >> cost[A][B] >> time[A][B];
			cost[B][A] = cost[A][B]; time[B][A] = time[A][B];
		}
		
		for(int k = 0; k < M; k++){
			for(int i = 0; i < M; i++){
				for(int j = 0; j < M; j++){
					cost[i][j] = min( cost[i][j], cost[i][k] + cost[k][j] );
					time[i][j] = min( time[i][j], time[i][k] + time[k][j] );
				}
			}
		}

		cin >> K;
		int P, Q, R;
		for(int i = 0; i < K; i++){
			cin >> P >> Q >> R; P--; Q--;
			if(R == 0) printf("%d\n", cost[P][Q] );
			else printf("%d\n", time[P][Q] );
		}
	}
	return 0;
}