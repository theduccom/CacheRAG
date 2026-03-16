#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main( void )
{
	while ( 1 )
	{
		int w, h;
		cin >> h >> w;
		if ( w == 0 && h == 0 )
			break;

		vector <string> data;
		for ( int i = 0; i < h; i++ )
		{
			string line;
			cin >> line;
			data.push_back( line );
		}

		bool loop_flag = false;
		int x = 0;
		int y = 0;
		while ( 1 )
		{
			int oldx = x;
			int oldy = y;
			if ( data[y][x] == '.' )
				break;
			else if ( data[y][x] == '>' )
				x++;
			else if ( data[y][x] == 'v' )
				y++;
			else if ( data[y][x] == '^' )
				y--;
			else if ( data[y][x] == '<' )
				x--;
			else if ( data[y][x] == 'x' )
			{
				loop_flag = true;
				break;
			}
			data[oldy][oldx] = 'x';
		}

		if ( loop_flag )
			cout << "LOOP" << endl;
		else
			cout << x << " " << y << endl;

	}
	return 0;
}