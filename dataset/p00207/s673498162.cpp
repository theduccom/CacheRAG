#include <iostream>
#include <vector>
using namespace std;

int w, h;
vector < vector <int> > block_map;

int xs, ys;
int xg, yg;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, -1, 0, 1 };

bool dfs( int x, int y )
{
	if ( block_map[y][x] == 0 || block_map[y][x] != block_map[yg][xg] )
		return false;
	if ( x == xg && y == yg )
		return true;

	block_map[y][x] = -1;
	for ( int i = 0; i < 4; i++ )
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if ( nx < 0 || nx >= w || ny < 0 || ny >= h )
			continue;

		if ( block_map[ny][nx] != -1 && block_map[ny][nx] == block_map[yg][xg] )
		{
			if ( dfs( nx, ny ) )
			{
				return true;
			}
		}
	}

	return false;
}

int main( void )
{
	while ( 1 )
	{
		cin >> w >> h;
		if ( w == 0 && h == 0 )
			break;

		block_map = vector < vector <int> >( h, vector <int>(w,0) );
		
		cin >> xs >> ys >> xg >> yg;

		xs--;
		ys--;
		xg--;
		yg--;

		int n;
		cin >> n;
		for ( int i = 0; i < n; i++ )
		{
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			x--;
			y--;

			if ( d == 0 )
			{
				for ( int by = 0; by < 2; by++ )
				{
					for ( int bx = 0; bx < 4; bx++ )
					{
						block_map[y+by][x+bx] = c;
					}
				}
			}
			else
			{
				for ( int by = 0; by < 4; by++ )
				{
					for ( int bx = 0; bx < 2; bx++ )
					{
						block_map[y+by][x+bx] = c;
					}
				}
			}
		}

		if ( dfs( xs, ys ) )
			cout << "OK" << endl;
		else
			cout << "NG" << endl;

	}
	return 0;
}