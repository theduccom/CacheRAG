#include <cstdio>
#include <algorithm>
using namespace std;

int dp[21][21];

int main(){
	int INF = (int)1e9;

	int n, m;
	int a, b, c, d;
	int x1, x2, y1, y2;

	scanf("%d%d", &n, &m);

	for(int i = 0; i <= n; ++i){
		for(int j = 0; j <= n; ++j){
			dp[i][j] = INF;
		}
	}

	for(int i = 0; i < m; ++i){
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		dp[a][b] = c;
		dp[b][a] = d;
	}

	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);

	for(int k = 1; k <= n; ++k){
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= n; ++j){
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
			}
		}
	}

	int cost = dp[x1][x2] + dp[x2][x1];
	int ans = y1 - y2 - cost;
	printf("%d\n", ans);
}