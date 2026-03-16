#include<iostream>
#include<algorithm>
#include<cstring>

int dp[1001][10001];
int v[1001], w[1001];

int main(){
	int W;

	int k = 1;
	while (std::cin >> W, W){
		int n;

		std::cin >> n;
		char a;
		for (int i = 0; i < n; i++)std::cin >> v[i] >> a >> w[i];

		memset(dp, -1, sizeof(dp));

		dp[1][0] = 0;
		dp[1][w[0]] = v[0];
		for (int i = 1; i < n; i++){
			for (int j = 0; j <= W; j++){

				if (dp[i][j] != -1){
					dp[i + 1][j] = std::max(dp[i + 1][j], dp[i][j]);
					if (j + w[i] <= W)dp[i + 1][j + w[i]] = std::max(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
				}
			}
		}

		int max = 0, id = 0;
		for (int i = 1; i <= W; i++){
			if (max < dp[n][i])max = dp[n][i], id = i;
		}
		std::cout << "Case " << k << ":" << std::endl << max << std::endl << id << std::endl;

		k++;
	}

	return 0;
}