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

int paper[10][10];

bool range(int x, int y)
{
	return x >= 0 && y >= 0 && x < 10 && y < 10;
}

void dropMedium(int x, int y)
{
	for (int dy = -1; dy <= 1; ++dy)
	{
		for (int dx = -1; dx <= 1; ++dx)
		{
			int xx = x+dx;
			int yy = y+dy;
			if (range(xx, yy))
				++paper[yy][xx];
		}
	}
}
void dropSmall(int x, int y, int d = 1)
{
	int dx[] = { 0, 0, 1, 0, -1 };
	int dy[] = { 0, 1, 0, -1, 0 };
	for (int i = 0; i < 5; ++i)
	{
		int xx = x+d*dx[i];
		int yy = y+d*dy[i];
		if (range(xx, yy))
			++paper[yy][xx];
	}
}
void dropLarge(int x, int y)
{
	dropSmall(x, y, 2);
	dropMedium(x, y);
	--paper[y][x];
}


int main()
{
	int x, y, s;
	while (scanf("%d,%d,%d", &x, &y, &s) != EOF)
	{
		switch (s)
		{
			case 1: dropSmall(x, y); break;
			case 2: dropMedium(x, y); break;
			case 3: dropLarge(x, y); break;
		}
	}
	int empties = 0;
	int m = 0;
	for (int y = 0; y < 10; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			if (paper[y][x] == 0)
				++empties;
			m = max(m, paper[y][x]);
		}
	}
	printf("%d\n%d\n", empties, m);

	return 0;
}