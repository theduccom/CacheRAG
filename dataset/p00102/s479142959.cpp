#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>

using namespace std;


int n;
int table[11][11];
int row_sum;
int col_sum;


int main()
{
	while (cin >> n)
	{
		if (n == 0) break;
		
		for (int i=0; i<n; i++)
		{
			row_sum = 0;
			for (int j=0; j<n; j++)
			{
				cin >> table[i][j];
				row_sum += table[i][j];
			}
			table[i][n] = row_sum;
		}
		
		for (int i=0; i<=n; i++)
		{
			col_sum = 0;
			for (int j=0; j<n; j++)
			{
				col_sum += table[j][i];
			}
			table[n][i] = col_sum;
		}
		
		for (int i=0; i<=n; i++)
		{
			for (int j=0; j<=n; j++)
			{
				printf("%5d", table[i][j]);
			}
			cout << endl;
		}
	}
	
	return 0;
}