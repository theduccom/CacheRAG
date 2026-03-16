#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

const int direction[][2] = {
	 1,  0,
	 0, -1,
	-1,  0,
	 0,  1,
};

bool inside( int x, int y )
{
	return 0 <= x && x < 12 && 0 <= y && y < 12;
}

int bfs( vector<string> &board, unsigned int i, unsigned int j )
{
	if ( board[i][j] == '0' )
	{
		return 0;
	}

	board[i][j] = '0';

	for ( int d = 0; d < 4; d++ )
	{
		if ( inside( (int)i + direction[d][0], (int)j + direction[d][1] ) )
		{
			bfs( board, i + direction[d][0], j + direction[d][1] );
		}
	}

	return 1;
}

int main()
{
	while ( true )
	{
		string buffer;
		vector<string> board;

		for ( int i = 0; i < 12; i++ )
		{
			if ( cin >> buffer )
			{
				board.push_back( buffer );
			}
			else
			{
				return 0;
			}
		}

		int res = 0;

		for ( unsigned int i = 0; i < 12; i++ )
		{
			for ( unsigned int j = 0; j < 12; j++ )
			{
				res += bfs( board, i, j );
			}
		}

		cout << res << endl;
	}

	return 0;
}