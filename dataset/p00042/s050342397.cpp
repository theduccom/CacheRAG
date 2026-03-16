#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAX_N = 1000;
const int MAX_W = 1000;
int W, N;
int v[MAX_N];
int w[MAX_N];
int dp[MAX_W + 1];

void solve() {
	fill(dp, dp + W + 1, 0);
	for (int i = 0; i < N; i++) {
		for (int j = W; j >= 0; j--) {
			if (j + w[i] <= W) {
				dp[j + w[i]] = max(dp[j + w[i]], dp[j] + v[i]);
			}
		}
	}
	printf("%d\n", dp[W]);
	for (int i = W; i >= 0; i--) {
		if (dp[W] != dp[i]) {
			printf("%d\n", i + 1);
			break;
		}
	}
}

int main () {
	int i = 0;
	while (scanf("%d", &W), W) {
		i++; printf("Case %d:\n", i);
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d,%d", &v[i], &w[i]);
		}
		solve();
	}
	return 0;
}