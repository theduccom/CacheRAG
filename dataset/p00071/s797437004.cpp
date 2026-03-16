#include <iostream>
using namespace std;

// 0:eÈµ
// 1:eª é
// 2:øÎ
char map[8][8];
int sx, sy;

void bomb( int x, int y )
{
	// c
	for ( int i = -3; i <= 3; i++ )
	{
		int ny = y + i;
		if ( ny < 0 || ny >= 8 )
			continue;
		if ( map[ny][x] == '1' )
			map[ny][x] = '2';
	}
	// ¡
	for ( int i = -3; i <= 3; i++ )
	{
		int nx = x + i;
		if ( nx < 0 || nx >= 8 )
			continue;
		if ( map[y][nx] == '1' )
			map[y][nx] = '2';
	}
	// c
	for ( int i = -3; i <= 3; i++ )
	{
		int ny = y + i;
		if ( ny < 0 || ny >= 8 )
			continue;
		if ( map[ny][x] == '2' )
		{
			map[ny][x] = '0';
			bomb( x, ny );
		}
	}
	// ¡
	for ( int i = -3; i <= 3; i++ )
	{
		int nx = x + i;
		if ( nx < 0 || nx >= 8 )
			continue;
		if ( map[y][nx] == '2' )
		{
			map[y][nx] = '0';
			bomb( nx, y );
		}
	}
}

int main( void )
{
	char c;
	int n;
	cin >> n;
	for ( int lpc = 0; lpc < n; lpc++ )
	{
		for ( int i = 0; i < 8; i++ )
			for ( int j = 0; j < 8; j++ )
				map[i][j] = '0';

		for ( int i = 0; i < 8; i++ )
		{
			for ( int j = 0; j < 8; j++ )
			{
				cin >> map[i][j];
			}
		}

		cin >> sx;
		cin >> sy;

		sx--;
		sy--;

		map[sy][sx] = '0';

		bomb( sx, sy );

		cout << "Data " << lpc + 1 << ":" << endl;
		for ( int i = 0; i < 8; i++ )
		{
			for ( int j = 0; j < 8; j++ )
				cout << map[i][j];
			cout << endl;
		}
	}
	return 0;
}