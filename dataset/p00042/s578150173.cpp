#include<iostream>
#include<algorithm>
#include<cstring>

constexpr int MAX = 1000;

int dp[MAX][MAX + 1];
int W, n;
int v[MAX], w[MAX];

int main() {
	int cnt = 0;
	while (1) {
		std::cin >> W;
		if (W == 0)
			break;
		++cnt;
		std::cin >> n;
		char ch;
		for (int i = 0; i < n; ++i)
			std::cin >> v[i] >> ch >> w[i];
		std::memset(dp, 0, sizeof(dp));
		dp[0][w[0]] = v[0];
		for (int i = 1; i < n; ++i) {
			for (int j = 0; j <= W; ++j) {
				dp[i][j] = dp[i - 1][j];
				if (j >= w[i])
					dp[i][j] = std::max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
		int ans = 0, maxv;
		for (int i = W; i >= 0; --i) {
			if (ans <= dp[n - 1][i]) {
				ans = dp[n - 1][i];
				maxv = i;
			}
		}
		std::cout << "Case " << cnt << ':' << std::endl
			<< ans << std::endl << maxv << std::endl;
	}
	return 0;
}