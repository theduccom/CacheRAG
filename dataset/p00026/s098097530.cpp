#include <stdio.h>
#include <map>
#include <algorithm>
using namespace std;

typedef pair<int, int> p;
p ink1[4] = { p(0, 1), p(0, -1), p(1, 0), p(-1, 0) };
p ink2[4] = { p(1, 1), p(-1, -1), p(1, -1), p(-1, 1) };
p ink3[4] = { p(0, 2), p(0, -2), p(2, 0), p(-2, 0) };

int table[10][10];

int main()
{
	int x, y, size;
	while (scanf("%d,%d,%d", &x, &y, &size) != -1)
	{
		table[x][y]++;
		for (int i = 0; i < 4; i++)
		{
			int X = x + ink1[i].first;
			int Y = y + ink1[i].second;
			if (0 <= X && X <= 9 && 0 <= Y && Y <= 9) table[X][Y]++;
		}

		if (size == 1) continue;
		for (int i = 0; i < 4; i++)
		{
			int X = x + ink2[i].first;
			int Y = y + ink2[i].second;
			if (0 <= X && X <= 9 && 0 <= Y && Y <= 9) table[X][Y]++;
		}

		if (size == 2) continue;
		for (int i = 0; i < 4; i++)
		{
			int X = x + ink3[i].first;
			int Y = y + ink3[i].second;
			if (0 <= X && X <= 9 && 0 <= Y && Y <= 9) table[X][Y]++;
		}
	}

	int n = 0;
	int Max = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (table[i][j] == 0) n++;
			Max = max(Max, table[i][j]);
		}
	}
	printf("%d\n%d\n", n, Max);

	return 0;
}