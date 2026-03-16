#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <iostream>
#include <climits>
#include <cfloat>


using namespace std;

bool data[12][12];

void DestroyIsland(int x, int y)
{
	data[y][x] = false;

	int dx[] = { 0, 1, 0, -1 };
	int dy[] = { 1, 0, -1, 0 };
	for (int i = 0; i < 4; ++i)
	{
		int tx = x + dx[i];
		int ty = y + dy[i];
		if (tx >= 0 && ty >= 0 && tx < 12 && ty < 12 && data[ty][tx])
			DestroyIsland(tx, ty);
	}
}

int main()
{
	while (!feof(stdin))
	{
		char buf[13];
		for (int i = 0; i < 12; ++i)
		{
			scanf("%s\n", buf);
			for (int j = 0; j < 12; ++j)
				data[i][j] = buf[j] == '1';
		}

		int n = 0;
		for (int y = 0; y < 12; ++y)
		{
			for (int x = 0; x < 12; ++x)
			{
				if (data[y][x])
				{
					++n;
					DestroyIsland(x, y);
				}
			}
		}
		printf("%d\n", n);
	}

	return 0;
}