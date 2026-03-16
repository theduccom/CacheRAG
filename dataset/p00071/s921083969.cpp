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

bool bomb[8][8];

void recur(int x, int y)
{
	bomb[y][x] = false;
	int dx[] = { 0, 1, 0, -1 };
	int dy[] = { 1, 0, -1, 0 };

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 1; j <= 3; ++j)
		{
			int tx = x + j*dx[i];
			int ty = y + j*dy[i];
			if (tx >= 0 && ty >= 0 && tx < 8 && ty < 8
				&& bomb[ty][tx])
			{
				recur(tx, ty);
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;

	for (int l = 1; l <= n; ++l)
	{
		char buf[64];
		cin.getline(buf, sizeof(buf));
		cin.getline(buf, sizeof(buf));
		for (int i = 0; i < 8; ++i)
		{
			cin.getline(buf, sizeof(buf));
			for (int j = 0; j < 8; ++j)
				bomb[i][j] = buf[j] == '1';
		}
		int x, y;
		cin >> x >> y;
		recur(--x, --y);

		printf("Data %d:\n", l);
		for (int i = 0; i < 8; ++i)
		{
			for (int j = 0; j < 8; ++j)
			{
				if (bomb[i][j])
					putchar('1');
				else
					putchar('0');
			}
			printf("\n");
		}
	}

	return 0;
}