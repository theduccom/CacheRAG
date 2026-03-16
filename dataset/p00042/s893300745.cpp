#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int v[1000];
int w[1000];

int dp[1010][1010];

int main() {
	int W, N;
	int cnt = 1;
	while(scanf("%d", &W), W) {
		scanf("%d", &N);
		for(int i = 0; i < N; i++) {
			scanf("%d,%d", v + i, w + i);
		}

		fill((int*)begin(dp), (int*)end(dp), 0);
		for(int i = 0; i < N; i++) {
			for(int j = 0; j <= W; j++) {
				dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
				if(j + w[i] > W) continue;
				dp[i + 1][j + w[i]] = max(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
			}
		}

		printf("Case %d:\n", cnt);
		int max_v = *max_element(dp[N], dp[N] + W + 1);
		for(int j = 0; j <= W; j++) {
			if(dp[N][j] == max_v) {
				printf("%d\n%d\n", max_v, j);
				break;
			}
		}
		cnt++;
	}
}