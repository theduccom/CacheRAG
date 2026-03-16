#include <iostream>

using namespace std;

int answer;

int unit[4][2] = { { 0, 1 }, { 0, -1}, { 1, 0 }, { -1, 0 } };

void solve( int y, int x, char data[13][13] )
{
	data[y][x] = '0';

	for( int i = 0;i < 4;i++ ){
		int dy = y + unit[i][0];
		int dx = x + unit[i][1];

		if( y < 0 || y > 11 || x < 0 || x > 11 ) continue;

		if( data[dy][dx] == '1' ) solve( dy, dx, data );
	}
}

int main(int argc, char const* argv[])
{
	char data[13][13];

	while( true ){
		for( int i = 0;i < 12;i++ ){
			if( !( cin >> data[i] ) ) return 0;
		}

		answer = 0;
		for( int i = 0;i < 12;i++ ){
			for( int j = 0;j < 12;j++ ){
				if( data[i][j] == '1' ){
					answer++;
					solve( i, j, data );
				}
			}
		}

		cout << answer << endl;
	}

	return 0;
}