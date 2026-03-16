#include <iostream>

using namespace std;

class Point{
public:
	int x,y;
	Point(){}
	Point( int dx, int dy ) : x( dx ), y( dy ) {}
};

Point place[7][4] = { { Point( 0, 0 ), Point( 1, 0 ), Point( 0, 1 ), Point( 1, 1 ) },
	{ Point( 0, 0 ), Point( 0, 1 ), Point( 0, 2 ), Point( 0, 3 ) },
	{ Point( 0, 0 ), Point( 1, 0 ), Point( 2, 0 ), Point( 3, 0 ) },
	{ Point( 0, 0 ), Point( 0, 1 ), Point( -1, 1 ), Point( -1, 2 ) },
	{ Point( 0, 0 ), Point( 1, 0 ), Point( 1, 1 ), Point( 2, 1 ) },
	{ Point( 0, 0 ), Point( 0, 1 ), Point( 1, 1 ), Point( 1, 2 ) },
	{ Point( 0, 0 ), Point( 1, 0 ), Point( 0, 1 ), Point( -1, 1 ) } };

int main(int argc, char const* argv[])
{
	char data[10][10];

	while( true ){
		for( int i = 0;i < 10;i++ ){
			for( int j = 0;j < 10;j++ ){
				data[i][j] = 0;
			}
		}


		for( int i = 0;i < 8;i++ ){
			if( !( cin >> data[i] ) ) return 0;
		}

		int answer = 0;
		for( int i = 0;i < 8;i++ ){
			for( int j = 0;j < 8;j++ ){
				if( data[i][j] == '1' ){
					for( int k = 0;k < 7;k++ ){
						if( data[i + place[k][0].y][j + place[k][0].x] == '1' &&  data[i + place[k][1].y][j + place[k][1].x] == '1' && data[i + place[k][2].y][j + place[k][2].x] == '1' && data[i + place[k][3].y][j + place[k][3].x] == '1' ){
							answer = k;
							goto END;
						}
					}
				}
			}
		}
END:

		cout << static_cast<char>( 'A' + answer ) << endl;
	}


	return 0;
}