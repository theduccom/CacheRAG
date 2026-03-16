#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int W, N;
int *v, *w;
int dp[1001][1001];

int main() {
	int no = 1;
	while (1) {
		scanf("%d", &W);
		if (W == 0)
			break;
		scanf("%d", &N);
		v = new int[N];
		w = new int[N];
		for (int i = 0; i < N; i++)
			scanf("%d,%d", &v[i], &w[i]);

		memset(dp, 0, sizeof(dp));
		for (int i = N - 1; i >= 0; i--) {
			for (int j = 0; j <= W; j++) {
				if (j < w[i])
					dp[i][j] = dp[i+1][j];
				else
					dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]] + v[i]);
			}
		}
		printf("Case %d:\n", no++);
		printf("%d\n", dp[0][W]);
		for (int j = 0; j <= W; j++) {
			if (dp[0][j] == dp[0][W]) {
				printf("%d\n", j);
				break;
			}
		}

		delete[] v;
		delete[] w;
	}
	return 0;
}