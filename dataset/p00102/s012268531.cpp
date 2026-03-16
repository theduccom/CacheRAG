#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;

	while (cin >> n, n)
	{
		int table[11][11] = {};

		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < n; x++)
			{
				cin >> table[x][y];
			}
		}

		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < n; x++)
			{
				table[n][y] += table[x][y];
			}
		}
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				table[x][n] += table[x][y];
			}
		}
		for (int x = 0; x < n; x++)
		{
			table[n][n] += table[x][n];
		}

		for (int y = 0; y <= n; y++)
		{
			for (int x = 0; x <= n; x++)
			{
				printf("%5d", table[x][y]);
			}
			cout << endl;
		}
	}

	return 0;
}