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

char judge( vector<string> surface )
{
	for ( unsigned int i = 0; i < surface.size(); i++ )
	{
		for ( unsigned int j = 0; j < surface[i].length(); j++ )
		{
			if ( surface[i][j] == '1' )
			{
				// A
				if ( surface[i][j+1] == '1' && surface[i+1][j] == '1' && surface[i+1][j+1] == '1' )
				{
					return 'A';
				}
				// B
				else if ( surface[i+1][j] == '1' &&surface[i+2][j] == '1' &&surface[i+3][j] == '1' )
				{
					return 'B';
				}
				// C
				else if ( surface[i][j+1] == '1' && surface[i][j+2] == '1' && surface[i][j+3] == '1' )
				{
					return 'C';
				}
				// D
				else if ( surface[i+1][j] == '1' && surface[i+1][j-1] == '1' && surface[i+2][j-1] == '1' )
				{
					return 'D';
				}
				// E
				else if ( surface[i][j+1] == '1' && surface[i+1][j+1] == '1' && surface[i+1][j+2] == '1' )
				{
					return 'E';
				}
				// F
				else if ( surface[i+1][j] == '1' && surface[i+1][j+1] == '1' && surface[i+2][j+1] == '1' )
				{
					return 'F';
				}
				// G
				else if ( surface[i][j+1] == '1' && surface[i+1][j-1] == '1' && surface[i+1][j] == '1' )
				{
					return 'G';
				}
				else
				{
					return '-';
				}
			}
		}
	}

	return '-';
}

int main()
{
	while ( true )
	{
		string buffer;
		vector<string> surface;

		surface.push_back( "00000000000000" );
		surface.push_back( "00000000000000" );
		surface.push_back( "00000000000000" );

		for ( int i = 0; i < 8; i++ )
		{
			if ( cin >> buffer )
			{
				surface.push_back( "000" + buffer + "000" );
			}
			else
			{
				return 0;
			}
		}

		surface.push_back( "00000000000000" );
		surface.push_back( "00000000000000" );
		surface.push_back( "00000000000000" );

		cout << judge( surface ) << endl;
	}
	
	return 0;
}