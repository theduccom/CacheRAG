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
#include <climits>
#include <cfloat>

typedef long long ll;

using namespace std;

int main()
{
	int n, m, cost[36][36];
	for (int i = 0;i < 36; ++i)
		for (int j = 0; j < 36; ++j)
			cost[i][j] = 9999999;
	for (int i = 0; i < 36; ++i)
		cost[i][i] = 0;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; ++i)
	{
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		cost[a][b] = c;
		cost[b][a] = d;
	}
	int start, end, given, pay;
	scanf("%d,%d,%d,%d", &start, &end, &given, &pay);

	for (int k = 1; k <= n; ++k)
		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= n; ++j)
				cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);

	printf("%d\n", given - (cost[start][end] + cost[end][start] + pay));

	return 0;
}