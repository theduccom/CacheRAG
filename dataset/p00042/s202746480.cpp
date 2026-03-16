#include <iostream>
#include <array>
#include <string>
#include <tuple>
#include <vector>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
//using ll = long long;

#define out(s) cout << (s) << endl;

int dp[1010][1010];

int main()
{
	int W, N;
	cin >> W;
	vector<tuple<int, int>> anss;
	int cnt = 1;
	while (W!=0)
	{
		cin >> N;
		memset(dp, -1, sizeof(dp));
		dp[0][0] = 0;
		for (size_t i = 0; i < N; i++)
		{
			int vi, wi;
			scanf("%d,%d", &vi, &wi);
			for (size_t n = 0; n <= W; n++)
			{
				if (dp[i][n] != -1) {
					dp[i + 1][n] = max(dp[i][n], dp[i + 1][n]);
					if (n + wi > W)continue;
					dp[i + 1][n + wi] = max(dp[i][n] + vi, dp[i][n]);
				}
			}
		}
		int dp_max = *max_element(dp[N], dp[N] + W + 1);
		int index = 0;
		for (size_t i = 0; i < W+1; i++)
		{
			if (dp_max == dp[N][i]) { index = i; break; }
		}
		cout << "Case " << cnt << ":" << endl;
		cout << dp_max << endl;
		cout << index << endl;
		cin >> W;
		cnt++;
	}

	return 0;
}