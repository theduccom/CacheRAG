#include<stdio.h>
#include<stdlib.h>

int main()
{
	int table[10][10] = { { 0 } };
	int x, y, size;
	while (scanf("%d,%d,%d", &x,&y, &size) != EOF)
	{
		switch (size)
		{
		case 1:
		{
			table[y][x]++;
			if (x - 1 >= 0)table[y][x - 1]++;
			if (x + 1 <= 9)table[y][x + 1]++;
			if (y - 1 >= 0)table[y - 1][x]++;
			if (y + 1 <= 9)table[y + 1][x]++;
		}break;
		case 2:
		{
			table[y][x]++;
			if (x - 1 >= 0)
			{
				table[y][x - 1]++;
				if (y - 1 >= 0)table[y - 1][x - 1]++;
				if (y + 1 <= 9)table[y + 1][x - 1]++;

			}
			if (x + 1 <= 9)
			{
				table[y][x + 1]++;
				if (y - 1 >= 0)table[y - 1][x + 1]++;
				if (y + 1 <= 9)table[y + 1][x + 1]++;
			}
			if (y - 1 >= 0)table[y - 1][x]++;
			if (y + 1 <= 9)table[y + 1][x]++;
		}break;
		default:
		{
			table[y][x]++;
			if (x - 1 >= 0)
			{
				table[y][x - 1]++;
				if (y - 1 >= 0)table[y - 1][x - 1]++;
				if (y + 1 <= 9)table[y + 1][x - 1]++;
				if (x - 2 >= 0)table[y][x - 2]++;
			}
			if (x + 1 <= 9)
			{
				table[y][x + 1]++;
				if (y - 1 >= 0)table[y - 1][x + 1]++;
				if (y + 1 <= 9)table[y + 1][x + 1]++;
				if (x + 2 <= 9)table[y][x + 2]++;
			}
			if (y - 1 >= 0)
			{
				table[y - 1][x]++;
				if (y - 2 >= 0)table[y - 2][x]++;
			}
			if (y + 1 <= 9)
			{
				table[y + 1][x]++;
				if (y + 2 <= 9)table[y + 2][x]++;
			}
		}break;
		}
	}
	int cnt=0, i, j, max = 0;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (table[j][i] > max)max = table[j][i];
			if (table[j][i] == 0)cnt++;
		}
	}
	printf("%d\n%d\n", cnt, max);
	return 0;
}