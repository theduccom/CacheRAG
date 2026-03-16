#include <iostream>
#include <string>
using namespace std;

const unsigned WIDTH = 14;
const unsigned HEIGHT = 14;

void trace( int* map , int j, int i ){
	map[ j * HEIGHT + i ] = false;
	if( map[ ( j - 1 ) * HEIGHT + i ] ){
		trace( map, j - 1, i );
	}
	if( map[ j * HEIGHT + ( i + 1 ) ] ){
		trace( map, j, i + 1 );
	}
	if( map[ ( j + 1 ) * HEIGHT + i ] ){
		trace( map, j + 1, i );
	}
	if( map[ j * HEIGHT + ( i - 1 ) ] ){
		trace( map, j, i - 1 );
	}
}


int main(){
	int map[ HEIGHT * WIDTH ] = { false };
	string s;

	while ( cin >> s ){
		for ( int i = 1; i < WIDTH-1; ++i ){
			map[ HEIGHT + i ] = static_cast< int >( s[ i - 1 ] - '0' );
		}
		for ( int j = 2; j < HEIGHT-1; ++j ){
			cin >> s;
			for ( int i = 1; i < WIDTH-1; ++i ){
				map[ j * HEIGHT + i ] = static_cast< int >( s[ i - 1 ] - '0' );
			}
		}

		int cnt = 0;
		for ( int j = 1; j < HEIGHT-1; ++j ){
			for ( int i = 1; i < WIDTH-1; ++i ){
				if( map[ j * HEIGHT + i ] ){
					trace( map, j, i );
					++cnt;
				}
			}
		}

		cout << cnt << endl;
	}

	return 0;
}