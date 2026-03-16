#include<iostream>

int n;
bool field[8][8];

void dfs( int x, int y )
{
	field[y][x] = false;

	static const int dx[] = { 0, 1, 0, -1 }, dy[] = { -1, 0, 1, 0 };

	for( int i = 1; i <= 3; ++i )
	{
		for( int j = 0; j != 4; ++j )
		{
			int nx = x + dx[j] * i, ny = y + dy[j] * i;

			if( nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && field[ny][nx] )
				dfs( nx, ny );
		}
	}

	return;
}

int main()
{
	std::cin >> n;
	for( int t = 0; t != n; ++t )
	{
		for( int i = 0; i != 8; ++i )
		{
			for( int j = 0; j != 8; ++j )
			{
				char c;
				std::cin >> c;
				field[i][j] = c - '0';
			}
		}

		int x, y;
		std::cin >> x >> y;

		--x; --y;
		dfs( x, y );

		std::cout << "Data " << t + 1 << ":" << std::endl;

		for( int i = 0; i != 8; ++i )
		{
			for( int j = 0; j != 8; ++j )
				std::cout << field[i][j];

			std::cout << std::endl;
		}
	}

	return 0;
}