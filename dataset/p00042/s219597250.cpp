#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <iostream>


using namespace std;


int W, N;
int w[1001];
int v[1001];
int dp[1001][1001];

int main()
{
	for (int caseCount = 1; ; ++caseCount)
	{
		scanf("%d", &W);
		if (W == 0)
			break;
		scanf("%d", &N);
		for (int i = 0; i < N; ++i)
		{
			int a, b;
			scanf("%d,%d", &a, &b);
			v[i] = a;
			w[i] = b;
		}
		memset(dp, 0, sizeof(dp));

		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j <= W; ++j)
				dp[i+1][j] = max(dp[i][j], (w[i] <= j ? dp[i][j-w[i]]+v[i] : 0));
		}

		int mw, mv;
		mw = 9999;
		mv = -1;
		for (int i = 0; i <= W; ++i)
		{
			if (dp[N][i] > mv)
			{
				mv = dp[N][i];
				mw = i;
			}
		}
		printf("Case %d:\n%d\n%d\n", caseCount, mv, mw);
	}


	return 0;
}