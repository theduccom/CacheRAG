#include<stdio.h>

#include<queue>
#include<iostream>

using namespace std;

enum
{
	wide, high,
	none = 0
};

#define BLOCK_WIDE 2
#define BLOCK_HIGH 4

void HighBlock(char map[100 +2][100 +2] ,int color, int x, int y)
{
	int i = y, j;
	y += BLOCK_HIGH;
	while (i < y)
	{
		j = x;
		while (j < x + BLOCK_WIDE)
		{
			map[i][j++] = color;
		}

		++i;
	}
}

void WideBlock(char map[100 +2][100 +2] ,int color, int x, int y)
{
	int i = y, j;
	y += BLOCK_WIDE;
	while (i < y)
	{
		j = x;
		while (j < x + BLOCK_HIGH)
		{
			map[i][j++] = color;
		}

		++i;
	}
}

int sx, sy;
int gx, gy;
int n;

#define X first
#define Y second

void func(char map[100 + 2][100 + 2])
{
	int mx[] = { 0 ,1 ,-1 ,0 };
	int my[] = { 1 ,0 ,0 ,-1 };
	int way = map[sy][sx];
	queue< pair< int, int > > que;
	que.push(make_pair(sx, sy));

	while (!que.empty())
	{
		pair<int, int> top = que.front(); que.pop();

		int x = top.X, y = top.Y;
		if (map[y][x] == way)
		{
			if (x == gx && y == gy)
			{
				puts("OK");
				return;
			}

			map[y][x] = none;

			int i = 4;
			while (i--)
			{
				int xx = x + mx[i];
				int yy = y + my[i];

				if (map[yy][xx] == way)
				{
					que.push(make_pair(xx, yy));
				}
			}
		}
	}

	puts("NG");
}

int main(void)
{
	char map[100 + 2][100 + 2];
	int W, H;
	while (1)
	{
		scanf("%d %d", &W, &H);

		if ((W | H) == 0)
		{
			return 0;
		}

		scanf("%d %d", &sx, &sy);
		scanf("%d %d", &gx, &gy);
		scanf("%d", &n);

		int i;
		for (i = 0; i < n; ++i)
		{
			int color, d, x, y;
			scanf("%d %d %d %d", &color, &d, &x, &y);

			if (d == wide)
			{
				WideBlock(map, color, x, y);
			}

			if (d == high)
			{
				HighBlock(map, color, x, y);
			}
		}

		func(map);
	}
}
