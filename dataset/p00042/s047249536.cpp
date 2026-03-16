#include <bits/stdc++.h>

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define Rrep(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int dp[1001][1001];
int v[1000], w[1000];

int main() {
	int W, N;
	int c = 1;
	while(1) {
		scanf("%d", &W);
		if(W == 0) break;
		memset(dp, 0, sizeof(dp));
		scanf("%d", &N);
		int wans = 0;
		rep(i, N) scanf("%d,%d", &v[i], &w[i]);
		rep(i, N) rep(j, W + 1) {
			if(j < w[i]) dp[i + 1][j] = dp[i][j];
			else {
				dp[i+1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
			}
		}
		Rrep(i, W) if(dp[N][i] != dp[N][W]){
			printf("Case %d:\n", c++);
			printf("%d\n", dp[N][W]);
			printf("%d\n", i + 1);
			break;
		}
	}
	return 0;
}