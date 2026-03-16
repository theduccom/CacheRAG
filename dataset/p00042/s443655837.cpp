#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
//#define int long long
using namespace std;

int W, N;
int v[1000], w[1000];
pair<int, int> dp[1100][1100];

pair<int, int> rec(int i, int j)
{
	pair<int, int> ans;

	if (dp[i][j].first != -1 && dp[i][j].second != -1)
	{
		return dp[i][j];
	}

	if (i == N)
	{
		ans = pair<int, int>(0, W - j);
	}
	else if (j < w[i])
	{
		ans = rec(i + 1, j);
	}
	else
	{
		pair<int, int> vw1 = rec(i + 1, j);
		pair<int, int> vw2 = rec(i + 1, j - w[i]);
		vw2.first += v[i];
		if (vw1.first > vw2.first)
		{
			ans = vw1;
		}
		else if (vw1.first < vw2.first)
		{
			ans = vw2;
		}
		else if (vw1.first == vw2.first)
		{
			if (vw1.second < vw2.second)
			{
				ans = vw1;
			}
			else
			{
				ans = vw2;
			}
		}
	}

	dp[i][j] = ans;

	return ans;
}

signed main()
{
	int cnt = 1;

	while (true)
	{
		cin >> W;
		if (W == 0)
		{
			break;
		}
		cin >> N;
		rep(i,N)
		{
			scanf("%d,%d", &v[i], &w[i]);
		}

		rep(i,1100)
		{
			rep(j,1100)
			{
				dp[i][j] = pair<int, int>(-1, -1);
			}
		}

		pair<int, int> ans = rec(0, W);

		printf("Case %d:\n", cnt);
		printf("%d\n", ans.first);
		printf("%d\n", ans.second);

		cnt++;
	}
}