#include <iostream>
using namespace std;

char M[14][14];
const int dx[4] = { 0, 0, 1, -1 };
const int dy[4] = { 1, -1, 0, 0 };

void fill( int x, int y )
{
	M[y][x] = '0';

	for ( int i = 0; i < 4; i++ )
	{
		int nx = x+dx[i];
		int ny = y+dy[i];
		if ( M[ny][nx] == '1' )
			fill( nx, ny );
	}
}

int main( void )
{
	while ( cin.eof() == false )
	{
		if ( cin.eof() ) break;

		for ( int i = 0; i < 14; i++ )
			for ( int j = 0; j < 14; j++ )
				M[i][j] = '0';

		for ( int i = 0; i < 12; i++ )
			for ( int j = 0; j < 12; j++ )
				cin >> M[i+1][j+1];

		if ( cin.eof() ) break;

		int kotae = 0;
		for ( int i = 0; i < 12; i++ ) for ( int j = 0; j < 12; j++ )
		{
			if ( M[i+1][j+1] == '1' )
			{
				fill( j+1, i+1 );
				kotae++;
			}
		}

		cout << kotae << endl;
	}
	return 0;
}