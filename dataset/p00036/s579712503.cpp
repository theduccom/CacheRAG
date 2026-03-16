#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

vector <string> f;

const string P[7][4] = {
	{// A
		"1100",
		"1100",
		"0000",
		"0000"
	},
	{// B
		"1000",
		"1000",
		"1000",
		"1000"
	},
	{// C
		"1111",
		"0000",
		"0000",
		"0000"
	},
	{// D
		"0100",
		"1100",
		"1000",
		"0000"
	},
	{// E
		"1100",
		"0110",
		"0000",
		"0000"
	},
	{// F
		"1000",
		"1100",
		"0100",
		"0000"
	},
	{// G
		"0110",
		"1100",
		"0000",
		"0000"
	},
};

bool check( int x, int y, int k )
{
	for ( int i = 0; i < 4; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			int nx = x + j;
			int ny = y + i;
			if ( P[k][i][j] == '1' )
			{
				if ( nx < 0 || nx >= 8 || ny < 0 || ny >= 8 )
				{
					return false;
				}
				if ( P[k][i][j] != f[ny][nx] )
					return false;
			}
		}
	}
	return true;
}

int main( void )
{
	while ( cin.eof() == false )
	{
		f = vector <string>(8);
		string line;
		for ( int i = 0; i < 8; i++ )
		{
			getline( cin, line );
			f[i] = line;
			if ( cin.eof() ) break;
		}
		if ( cin.eof() ) break;
		getline( cin, line );

		char answer = 'A';
		bool not_found = true;
		for ( int i = 0; not_found && i < 8; i++ )
		{
			for ( int j = 0; not_found && j < 8; j++ )
			{
				for ( int k = 0; not_found && k < 7; k++ )
				{
					if ( check( j, i, k ) )
					{
						answer += k;
						not_found = false;
					}
				}
			}
		}

		cout << answer << endl;
	}
	return 0;
}