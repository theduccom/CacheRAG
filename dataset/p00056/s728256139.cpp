#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int dp[3][50001] = {}, n, memo[50000];
	bool prime[50000] = {};
	for (int i = 2; i < 50000; i++){
		if (prime[i]) continue;
		for (int j = 2; i*j < 50000; j++){
			if (prime[i * j]) continue;
			prime[i * j] = true;
		}
	}
	dp[0][0] = 1;
	for (int i = 0; i < 2; i++){
		for (int j = 0; j <= 50000; j++){
			if (dp[i][j] == 0) continue;
			int k = 2;
			if (k < j) k = j;
			for (; k < 50000; k++){
				if (prime[k]) continue;
				if (j + k > 50000) break;
				dp[i + 1][j + k] += dp[i][j];
			}
		}
	}
	while (cin >> n, n){
		printf("%d\n", dp[2][n]);
	}
	return 0;
}