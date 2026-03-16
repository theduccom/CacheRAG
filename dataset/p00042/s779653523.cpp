#include <iostream>
#include <cstdio>

using namespace std;

typedef long long ll;

ll value[1000], weight[1000];
ll dp[1001][1001]; // dp[?¬?????????????][??????] = ?????§??????

int main() {
	int W;
	int c = 1;
	while ( cin >> W, W ) {
		int N; cin >> N;
		for (int i = 0; i < N; ++i) scanf("%d,%d", &value[i], &weight[i]);

		for (int i = 0; i < 1001; ++i) {
			for (int j = 0; j < 1001; ++j) {
				dp[i][j] = 0;
			}
		}
//		fill(&dp[0][0], &dp[0][0]+1501*1501, 0);

		for (int i = 0; i < N; ++i) {
			for (int w = 0; w <= W; ++w) {
				dp[i+1][w] = max(dp[i+1][w], dp[i][w]);
				if (w + weight[i] <= W) {
					dp[i+1][w+weight[i]] = max(dp[i+1][w+weight[i]], dp[i][w]+value[i]);
				}
			}
		}
		ll av = 0, aw = 0;
		for (int w = 0; w <= W; ++w) {
			if (dp[N][w] > av) {
				av = dp[N][w];
				aw = w;
			}
		}
		printf("Case %d:\n", c++);
		printf("%d\n", av);
		printf("%d\n", aw);
	}
}