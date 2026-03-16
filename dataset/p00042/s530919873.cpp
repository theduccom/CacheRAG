#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){

	int cnt, N, W, value, weight, v[1001][1001], w[1001][1001];

	cnt = 0;

	while(1){
		cin >> W;
		if(W == 0) break;
		
		cnt++;
		cin >> N;

		for(int i=0; i<=N; i++){
			for(int j=0; j<=W; j++){
				v[i][j] = 0;
				w[i][j] = 0;
			}
		}
		
		for(int i=1; i<=N; i++){
			scanf("%d, %d", &value, &weight);
			for(int j=0; j<=W; j++){
				for(int k=0; k<=j; k++){
					if(w[i-1][k] + weight <= j && v[i-1][k] + value > v[i][j]){
						v[i][j] = v[i-1][k] + value;
						w[i][j] = w[i-1][k] + weight;
					}
					else if(v[i-1][k] > v[i][j]){
						v[i][j] = v[i-1][k];
						w[i][j] = w[i-1][k];
					}
					else if(v[i-1][k] == v[i][j] && w[i-1][k] < w[i][j]){
						w[i][j] = w[i-1][k];
					}
				}
			}
		}

		cout << "Case " << cnt << ":" << endl;
		cout << v[N][W] << endl;
		cout << w[N][W] << endl; 
		
	}

	return 0;

}