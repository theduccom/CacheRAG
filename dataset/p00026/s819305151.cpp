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

const int SMALL[][2] = {
	{  0,  0 },
	{  0,  1 },
	{  1,  0 },
	{  0, -1 },
	{ -1,  0 }
};

const int MIDIUM[][2] = {
	{  1,  1 },
	{  1, -1 },
	{ -1, -1 },
	{ -1,  1 }
};

const int LARGE[][2] = {
	{  0,  2 },
	{  2,  0 },
	{  0, -2 },
	{ -2,  0 }
};

class Paper
{
private:
	int paper[10][10];
public:
	Paper()
	{
		for ( int i = 0; i < 10; i++ )
		{
			for ( int j = 0; j < 10; j++ )
			{
				paper[i][j] = 0;
			}
		}

		return;
	}

	void put( int x, int y )
	{
		if ( inside( x, y ) )
		{
			paper[x][y]++;
		}
		return;
	}

	bool inside( int x, int y )
	{
		return 0 <= x && x < 10 && 0 <= y && y < 10;
	}

	int countWhite()
	{
		int res = 0;

		for ( int i = 0; i < 10; i++ )
		{
			for ( int j = 0; j < 10; j++ )
			{
				if ( paper[i][j] == 0 )
				{
					res++;
				}
			}
		}

		return res;
	}

	int getMax()
	{
		int max = 0;

		for ( int i = 0; i < 10; i++ )
		{
			for ( int j = 0; j < 10; j++ )
			{
				if ( max < paper[i][j] )
				{
					max = paper[i][j];
				}
			}
		}

		return max;
	}
};

int main()
{
	Paper paper;
	string buffer;

	while ( cin >> buffer )
	{
		int x, y, size;

		for ( unsigned int i = 0; i < buffer.length(); i++ )
		{
			if ( buffer[i] == ',' )
			{
				buffer[i] = ' ';
			}
		}

		istringstream( buffer ) >> x >> y >> size;

		for ( int i = 0; i < sizeof( SMALL ) / sizeof( SMALL[0] ); i++ )
		{
			paper.put( x + SMALL[i][0], y + SMALL[i][1] );
		}

		if ( 2 <= size )
		{
			for ( int i = 0; i < sizeof( MIDIUM ) / sizeof( MIDIUM[0] ); i++ )
			{
				paper.put( x + MIDIUM[i][0], y + MIDIUM[i][1] );
			}
		}

		if ( 3 <= size )
		{
			for ( int i = 0; i < sizeof( LARGE ) / sizeof( LARGE[0] ); i++ )
			{
				paper.put( x + LARGE[i][0], y + LARGE[i][1] );
			}
		}
	}

	cout << paper.countWhite() << endl;
	cout << paper.getMax() << endl;

	return 0;
}