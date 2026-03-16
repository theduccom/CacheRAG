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


int main()
{
	char* dir = "><^v";
	int dx[] = { 1, -1, 0, 0 };
	int dy[] = { 0, 0, -1, 1 };

	while (true)
	{
		int H, W;
		scanf("%d %d", &H, &W);
		if (H == 0 && W == 0)
			break;

		char tile[128][128];
		for (int i = 0; i < H; ++i)
			scanf("%s", tile[i]);

		bool visit[128][128];
		for (int i = 0; i < H; ++i)
			for (int j = 0; j < W; ++j)
				visit[i][j] = false;

		int x, y;
		x = y = 0;
		while (true)
		{
			char c = tile[y][x];
			if (c == '.')
				break;
			else if(visit[y][x])
			{
				x = -1;
				break;
			}

			visit[y][x] = true;
			for (int i = 0; i < 4; ++i)
			{
				if (c == dir[i])
				{
					x += dx[i];
					y += dy[i];
					break;
				}
			}
		}
		if (x == -1)
			printf("LOOP\n");
		else
			printf("%d %d\n", x, y);
	}

	return 0;
}