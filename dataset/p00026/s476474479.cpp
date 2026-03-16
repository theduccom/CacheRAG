#include <cmath>
#include <iostream>

#pragma warning(disable : 4996)

int x, y, q, r1, r2, ok[10][10];

int main()
{
	while (~scanf("%d,%d,%d", &x, &y, &q))
	{
		if (q == 1)
		{
			for (int i = -1; i <= 1; i++)
			{
				for (int j = -1; j <= 1; j++)
				{
					if (abs(i) + abs(j) <= 1)
					{
						if (0 <= x + j && x + j < 10 && 0 <= y + i && y + i < 10)
						{
							ok[y + i][x + j]++;
						}
					}
				}
			}
		}

		if (q == 2)
		{
			for (int i = -1; i <= 1; i++)
			{
				for (int j = -1; j <= 1; j++)
				{
					if (0 <= x + j && x + j < 10 && 0 <= y + i && y + i < 10)
					{
						ok[y + i][x + j]++;
					}
				}
			}
		}

		if (q == 3)
		{
			for (int i = -2; i <= 2; i++)
			{
				for (int j = -2; j <= 2; j++)
				{
					if (abs(i) + abs(j) <= 2)
					{
						if (0 <= x + j && x + j < 10 && 0 <= y + i && y + i < 10)
						{
							ok[y + i][x + j]++;
						}
					}
				}
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (ok[i][j] == 0)
			{
				r1++;
			}

			if (ok[i][j] > r2)
			{
				r2 = ok[i][j];
			}
		}
	}

	printf("%d\n", r1);
	printf("%d\n", r2);

	return 0;
}