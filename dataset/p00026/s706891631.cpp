#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	int bi[13][2] = {
		{ 0, 2 },
		{ -1, 1 }, { 0, 1 }, { 1, 1 },
		{ -2, 0 }, { -1, 0 }, { 0, 0 }, { 1, 0 }, { 2, 0 },
		{ -1, -1 }, { 0, -1 }, { 1, -1 },
		{ 0, -2 }
	};
	int me[9][2] = {
		{ -1, 1 }, { 0, 1 }, { 1, 1 },
		{ -1, 0 }, { 0, 0 }, { 1, 0 },
		{ -1, -1 }, { 0, -1 }, { 1, -1 }
	};
	int sm[5][2] = {
		{ 0, 1 },
		{ -1, 0 }, { 0, 0 }, { 1, 0 },
		{ 0, -1 }
	};

	vector < vector <int> > V(10, vector<int>(10, 0));
	int max_value = 0;
	while ( !cin.eof() )
	{
		int x, y, size;
		char c1, c2;
		cin >> x >> c1 >> y >> c2 >> size;
		if ( cin.eof() )
			break;

		if ( size == 1 )
		{
			for ( int i = 0; i < 5; i++ )
			{
				int nx = x + sm[i][0];
				int ny = y + sm[i][1];

				if ( ( nx >= 0 && nx < 10 ) && ( ny >= 0 && ny < 10 ) )
				{
					V[ny][nx]++;
					max_value = max( V[ny][nx], max_value );
				}
			}
		}
		else if ( size == 2 )
		{
			for ( int i = 0; i < 9; i++ )
			{
				int nx = x + me[i][0];
				int ny = y + me[i][1];

				if ( ( nx >= 0 && nx < 10 ) && ( ny >= 0 && ny < 10 ) )
				{
					V[ny][nx]++;
					max_value = max( V[ny][nx], max_value );
				}
			}
		}
		else if ( size == 3 )
		{
			for ( int i = 0; i < 13; i++ )
			{
				int nx = x + bi[i][0];
				int ny = y + bi[i][1];

				if ( ( nx >= 0 && nx < 10 ) && ( ny >= 0 && ny < 10 ) )
				{
					V[ny][nx]++;
					max_value = max( V[ny][nx], max_value );
				}
			}
		}
	}

	int emp = 0;
	for ( int i = 0; i < 10; i++ )
	{
		for ( int j = 0; j < 10; j++ )
		{
			if ( V[i][j] == 0 )
				emp++;
		}
	}

	cout << emp << endl;
	cout << max_value << endl;

	return 0;
}