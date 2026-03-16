#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
//#include <map>
#include <iomanip>
#include <vector>

using namespace std;



string map[8];
int d_row[] = {-3, -2, -1, 0, 0, 0, 0, 0, 0, 1, 2, 3};
int d_col[] = {0, 0, 0, -3, -2, -1, 1, 2, 3, 0, 0, 0};


void bomb(int row, int col)
{
	//cout << "row = " << row << " : col = " << col << endl;
	map[row][col] = '0';
	
	for (int i=0; i<12; i++)
	{
		int n_row = row + d_row[i];
		int n_col = col + d_col[i];
		
		if (0<=n_row && n_row<8 && 0<=n_col && n_col<8 && map[n_row][n_col]=='1')
		{
			bomb(n_row, n_col);
		}
	}
}


int main()
{
	int n;
	int X, Y;
	
	cin >> n;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<8; j++)
		{
			cin >> map[j];
		}
		cin >> X >> Y;
		
		bomb(Y - 1, X - 1);
		
		cout << "Data " << i + 1 << ":" << endl;
		for (int j=0; j<8; j++)
		{
			cout << map[j] << endl;
		}
	}
	
	return 0;
}