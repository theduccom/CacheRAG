#include <stdio.h>

int dp[1024][10010];

int main(void)
{
	int i, j;
	int n;
	int wei;
	int w[1024];
	int k[1024];
	int b;
	int max;
	int mw;
	
	b = 0;
	while (scanf("%d", &wei), wei != 0){
		scanf("%d", &n);
		for (i = 0; i <= n; i++){
			if (i < n){
				scanf("%d,%d", &k[i], &w[i]);
			}
			for (j = 0; j < 10000; j++){
				dp[i][j] = 0;
			}
		}
		for (i = 0; i < n; i++){
			for (j = 0; j <= wei; j++){
				if (dp[i + 1][j + w[i]] < dp[i][j] + k[i] && j + w[i] <= wei){
					dp[i + 1][j + w[i]] = dp[i][j] + k[i];
				}
				if (dp[i + 1][j] < dp[i][j]){
					dp[i + 1][j] = dp[i][j];
				}
			}
		}
		max = 0;
		for (i = 0; i <= wei; i++){
			if (max < dp[n][i]){
				max = dp[n][i];
				mw = i;
			}
		}
		b++;
		printf("Case %d:\n", b);
		printf("%d\n%d\n", max, mw);
	}
	return (0);
}