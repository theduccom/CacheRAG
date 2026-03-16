#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int hani[14][14] = { 0 }, x, y, size;
	int white = 0, max_num = 0;
	char tmp;

	while ( cin >> x >> tmp >> y >> tmp >> size )
	{
		x = x + 2;
		y = y + 2;
		if ( size == 1 )
		{
			hani[x][y] = hani[x][y] + 1;
			hani[x-1][y] = hani[x-1][y] + 1;
			hani[x+1][y] = hani[x+1][y] + 1;
			hani[x][y-1] = hani[x][y-1] + 1;
			hani[x][y+1] = hani[x][y+1] + 1;
		}
		else if ( size == 2 )
		{
			hani[x][y] = hani[x][y] + 1;
			hani[x-1][y] = hani[x-1][y] + 1;
			hani[x+1][y] = hani[x+1][y] + 1;
			hani[x][y-1] = hani[x][y-1] + 1;
			hani[x][y+1] = hani[x][y+1] + 1;
			
			hani[x-1][y-1] = hani[x-1][y-1] + 1;
			hani[x+1][y-1] = hani[x+1][y-1] + 1;
			hani[x-1][y+1] = hani[x-1][y+1] + 1;
			hani[x+1][y+1] = hani[x+1][y+1] + 1;
		}
		else if ( size == 3 )
		{
			hani[x][y] = hani[x][y] + 1;
			hani[x-1][y] = hani[x-1][y] + 1;
			hani[x+1][y] = hani[x+1][y] + 1;
			hani[x][y-1] = hani[x][y-1] + 1;
			hani[x][y+1] = hani[x][y+1] + 1;
			
			hani[x-1][y-1] = hani[x-1][y-1] + 1;
			hani[x+1][y-1] = hani[x+1][y-1] + 1;
			hani[x-1][y+1] = hani[x-1][y+1] + 1;
			hani[x+1][y+1] = hani[x+1][y+1] + 1;

			hani[x-2][y] = hani[x-2][y] + 1;
			hani[x][y-2] = hani[x][y-2] + 1;
			hani[x+2][y] = hani[x+2][y] + 1;
			hani[x][y+2] = hani[x][y+2] + 1;
		}
	}

	for ( int i = 2 ; i < 12 ; i = i + 1 )
	{
		for ( int j = 2 ; j < 12 ; j = j + 1 )
		{
			if ( hani[i][j] == 0 )
			{
				white = white + 1;
			}
			max_num = max( max_num, hani[i][j] );
		}
	}

	cout << white << endl;
	cout << max_num << endl;

	return 0;
}