#include <iostream>
#include <algorithm>

using namespace std;
#define INF 1e9

void solve()
{
	int dp[2][101][101];
	int n, m;
	while (cin >> n >> m, n || m)
	{
		for (int i = 0; i < 101; ++i)
		{
			for (int j = 0; j < 101; ++j)
			{
				if (i == j)
				{
					dp[0][i][j] = dp[1][i][j] = 0;
				}
				else
				{
					dp[0][i][j] = dp[1][i][j] = INF;
				}
			}
		}
		int a, b, cost, time;
		for (int i = 0; i < n; ++i)
		{
			cin >> a >> b >> cost >> time;
			dp[0][a][b] = cost;
			dp[0][b][a] = cost;
			dp[1][a][b] = time;
			dp[1][b][a] = time;
		}
		for (int k = 1; k <= m; ++k)
		{
			for (int i = 1; i <= m; ++i)
			{
				for (int j = 1; j <= m; ++j)
				{
					dp[0][i][j] = min(dp[0][i][j], dp[0][i][k] + dp[0][k][j]);
					dp[1][i][j] = min(dp[1][i][j], dp[1][i][k] + dp[1][k][j]);
				}
			}
		}
		int inq;
		cin >> inq;
		for (int i = 0; i < inq; ++i)
		{
			int p, q, r;
			cin >> p >> q >> r;
			cout << dp[r][p][q] << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}