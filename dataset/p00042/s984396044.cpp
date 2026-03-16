#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int dp[1002][1002];

int main(void)
{
	int w;
	int n;
	int cnt;
	int max;
	
	cnt = 1;
	while (1){
		int value[1000];
		int weight[1000];
		
		scanf("%d", &w);
		
		if (w == 0){
			break;
		}
		
		scanf("%d", &n);
		
		memset(dp, -1, sizeof(dp));
		
		for (int i = 0; i < n; i++){
			scanf("%d,%d", &value[i], &weight[i]);
			dp[i][0] = 0;
		}
		
		for (int i = 1; i <= n; i++){
			for (int j = 0; j <= w; j++){
				if (dp[i - 1][j] != -1 && j + weight[i - 1] <= w){
					dp[i][j + weight[i - 1]] = MAX(dp[i - 1][j] + value[i - 1], dp[i][j + weight[i - 1]]);
				}
				if (dp[i - 1][j] != -1){
					dp[i][j] = MAX(dp[i - 1][j], dp[i][j]);
				}
			}
		}
		
		max = 0;
		for (int i = 1; i <= w; i++){
			if (dp[n][i] > dp[n][max]){
				max = i;
			}
		}
		
		printf("Case %d:\n%d\n%d\n", cnt++, dp[n][max], max);
	}
	
	return (0);
}