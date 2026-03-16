#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>
#include <complex>

using namespace std;

bool isPrime[1000001];
bool dp[1000001];
int main()
{
	fill(isPrime, isPrime+1000001, true);
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i < 1000001; ++i)
	{
		if (isPrime[i])
		{
			for (int j = 2*i; j < 1000001; j += i)
				isPrime[j] = false;
		}
	}

	int n, x;
	while (scanf("%d %d", &n, &x), n | x)
	{
		int v[30];
		for (int i = 0; i < n; ++i)
		{
			int t;
			scanf("%d", &t);
			v[i] = t;
		}

		fill(dp, dp+x+1, false);
		dp[0] = true;
		for (int i = 0; i <= x; ++i)
			if (dp[i])
				for (int j = 0; j < n; ++j)
					if (i + v[j] <= x)
						dp[i + v[j]] = true;

		int ans;
		for (ans = x; ans > 0; --ans)
			if (dp[ans] && isPrime[ans])
				break;
		if (ans)
			printf("%d\n", ans);
		else
			puts("NA");
	}

	return 0;
}