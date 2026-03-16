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

int main()
{
	int dx[7][3] = 
	{
		{ 1, 0, 1 },
		{ 0, 0, 0 },
		{ 1, 2, 3 },
		{ -1, 0, -1 },
		{ 1, 1, 2 },
		{ 0, 1, 1 },
		{ 1, -1, 0 }
	};
	int dy[7][3] =
	{
		{ 0, 1, 1 },
		{ 1, 2, 3 },
		{ 0, 0, 0 },
		{ 1, 1, 2 },
		{ 0, 1, 1 },
		{ 1, 1, 2 },
		{ 0, 1, 1 },
	};

	char bb[256];
	char* next = (char*)1;
	while (next)
	{
		char buf[8][8];
		int i;

		for (i = 0; i < 8; ++i)
		{
			if (fgets(bb, 256, stdin) ==NULL)
				break;
			for (int j = 0; j < 8; ++j)
				buf[i][j] = bb[j];
		}
		next = fgets(bb, 256, stdin);
		if (i != 8)
			break;

		int x, y;
		for (y = 0; y < 8; ++y)
		{
			bool found = false;
			for (x = 0; x < 8; ++x)
			{
				if (buf[y][x] == '1')
				{
					found = true;
					break;
				}
			}
			if (found)
				break;
		}

		for (i = 0; i < 7; ++i)
		{
			int j;
			for (j = 0; j < 3; ++j)
			{
				int tx = x+dx[i][j];
				int ty = y+dy[i][j];
				if (tx < 0 || ty < 0 || tx >= 8 || ty >= 8
					|| buf[ty][tx] == '0')
					break;
			}
			if (j == 3)
			{
				printf("%c\n", 'A' + i);
				break;
			}
		}
	}

	return 0;
}