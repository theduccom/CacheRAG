#include <stdio.h>
#include <algorithm>
using namespace std;
int W, N, v[1000], w[1000], dp[1001][1001], c, r;
int main() {
	while (~scanf("%d", &W)) {
		if (!W) break;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) scanf("%d,%d", &v[i], &w[i]);
		for (int i = 1; i <= N; i++) {
			for (int j = 0; j <= W; j++) {
				dp[i][j] = dp[i - 1][j];
				if (j >= w[i - 1]) {
					dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
				}
			}
		}
		printf("Case %d:\n", ++c);
		printf("%d\n", dp[N][W]);
		printf("%d\n", lower_bound(dp[N], dp[N] + W + 1, dp[N][W]) - dp[N]);
	}
	return 0;
}