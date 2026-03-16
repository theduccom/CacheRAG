#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int n, W;
int w[1001], v[1001];
int dp[1001][1001];
int num=1;

void reset_variable(){
	W = 0;
	n = 0;
	for (int i = 0; i < 1001; i++){
		w[i] = 0;
		v[i] = 0;
	}
	memset(dp, 0, sizeof(dp));
}


void solve(void){
	cin >> n;
	for (int i = 0; i<n; i++){
		scanf("%d,%d", &v[i], &w[i]);
	}
	cout << "Case " << num << ":" << endl;
	for (int i = 0; i <= W; i++){
		dp[n][i] = 0;
	}
	for (int i = n - 1; i >= 0; i--){
		for (int j = 0; j <= W; j++){
			if (j < w[i]){
				dp[i][j] = dp[i + 1][j];
			}
			else{
				dp[i][j] = max(dp[i + 1][j], v[i] + dp[i + 1][j - w[i]]);
			}
		}
	}
	for (int i = 0; i < 1001; i++){
		if (dp[0][i] == dp[0][W]){
			cout << dp[0][W] << endl << i << endl;
			return;
		}
	}
}

int main(){
	while (1){
		reset_variable();
		cin >> W;
		if (!W) return 0;
		solve();
		num++;
	}
	return 0;
}