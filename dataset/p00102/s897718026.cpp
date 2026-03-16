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

using namespace std;


int table[4096][4096];
int main()
{
	while (true)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;

		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				scanf("%d", &table[i][j]);

		for (int i = 0; i < n; ++i)
		{
			int s = 0;
			for (int j = 0; j < n; ++j)
				s += table[j][i];
			table[n][i] = s;
		}
		for (int i = 0; i <= n; ++i)
		{
			int s = 0;
			for (int j = 0; j < n; ++j)
				s += table[i][j];
			table[i][n] = s;
		}
		for (int i = 0; i <= n; ++i)
		{
			for (int j = 0; j <= n; ++j)
			{
				printf("%5d", table[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}