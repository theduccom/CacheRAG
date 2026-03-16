#include <iostream>

using namespace std;

int unit[4][2] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };

void solve( int x, int y, char data[9][9] ){
	data[y][x] = '0';

	for( int i = 0;i < 4;i++ ){
		for( int j = 1;j <= 3;j++ ){
			int dx = x + unit[i][0] * j;
			int dy = y + unit[i][1] * j;

			if( dx < 0 || dx > 7 || dy < 0 || dy > 7 ) continue;

			if( data[dy][dx] == '1' ){
				solve( dx, dy, data );
			}
		}
	}
}



int main(int argc, char const* argv[])
{
	char data[9][9];
	int n;
	int x,y;

	cin >> n;

	for( int i = 1;i <= n;i++ ){
		for( int j = 0;j < 8;j++ ){
			cin >> data[j];
		}

		cin >> x >> y;

		solve( x - 1, y - 1, data );

		cout << "Data " << i << ":" << endl;
		for( int j = 0;j < 8;j++ ){
			cout << data[j] << endl;
		}
	}

	return 0;
}