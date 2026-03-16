#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

#pragma warning(disable:4996)

#define MAX_N 1200
#define MAX_W 1200

int dp[MAX_N][MAX_W];
int W, N, v[MAX_N], w[MAX_N], cnt;

int main() {
	while (true) {
		cnt++;
		memset(dp, 0, sizeof(dp));
		cin >> W;
		if (W == 0) { break; }
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			scanf("%d,%d", &v[i], &w[i]);
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j <= W; j++)
			{
				dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
				if (j + w[i] <= W)
				{
					dp[i + 1][j + w[i]] = max(dp[i][j] + v[i], dp[i + 1][j + w[i]]);
				}
			}
		}
		cout << "Case " << cnt << ":" << endl;
		int maxn = 0, maxid = 0;
		for (int j = 0; j <= W; j++)
		{
			if (maxn < dp[N][j])
			{
				maxn = dp[N][j];
				maxid = j;
			}
			else if (maxn == dp[N][j])
			{
				maxid = min(maxid, j);
			}
		}
		cout << maxn << endl;
		cout << maxid << endl;
	}
}