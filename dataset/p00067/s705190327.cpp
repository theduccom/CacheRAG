#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
//#include <map>
#include <vector>

//#define PI 3.141592653589

using namespace std;


string map[12];
int ans;
int d_row[] = {-1, 0, 0, 1};
int d_col[] = {0, -1, 1, 0};


void dfs(int row, int col)
{
	map[row][col] = 0;
	for (int i=0; i<4; i++)
	{
		int n_row = row + d_row[i];
		int n_col = col + d_col[i];
		if (0<=n_row && n_row<12 && 0<=n_col && n_col<12 && map[n_row][n_col]=='1')
		{
			dfs(n_row, n_col);
		}
	}
}


int main()
{
	while (cin >> map[0])
	{
		ans = 0;
		for (int i=1; i<12; i++) cin >> map[i];
		//for (int i=0; i<12; i++) cout << map[i] << endl;
		for (int i=0; i<12; i++)
		{
			for (int j=0; j<12; j++)
			{
				if (map[i][j] == '1')
				{
					ans++;
					//cout << "ans = " << ans << endl;
					dfs(i, j);
				}
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}