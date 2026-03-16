#include <iostream>
#include <string>
using namespace std;

static const int SIZE = 8;

class Bomb{
public:
	Bomb() : count( 0 ){
		for ( int i = 0; i < ( SIZE + 2 ) * ( SIZE + 2 ); ++i ){
			field[ i ] = -1;
		}
	}

	void input( string& s, int row ){
		for ( int i = 1; i < SIZE + 1; ++i ){
			field[ row * ( SIZE + 2 ) + i ] = static_cast< int >( s[ i - 1 ] - '0' );
		}
	}
	void output(){
		cout << "Data " << ++count << ":" << endl;

		for ( int i = 1; i < SIZE + 1; ++i ){
			for ( int j = 1; j < SIZE + 1; ++j ){
				cout << field[ i * ( SIZE + 2 ) + j ];
			}
			cout << endl;
		}
	}
	void trigger( int x, int y ){
		if ( field[ y * ( SIZE + 2 ) + x ] == 1 ){
			field[ y * ( SIZE + 2 ) + x ] = 0;
		}
		for ( int i = 0; i < 4; ++i ){
			explode( x, y, i, 3 );
		}
	}
	void explode( int x, int y, int def, int roop ){
		if ( field[ y * ( SIZE + 2 ) + x ] == 1 ){
			trigger( x, y );
			return;
		}
		if ( roop && !field[ y * ( SIZE + 2 ) + x ] ){
			switch ( def ){
				case 0: explode( x, y-1, def, roop-1 ); break;
				case 1: explode( x+1, y, def, roop-1 ); break;
				case 2: explode( x, y+1, def, roop-1 ); break;
				case 3: explode( x-1, y, def, roop-1 ); break;
			}
		}
	}

	int count;
	int field[ ( SIZE + 2 ) * ( SIZE + 2 ) ];
};

int main(){
	int n, x, y;
	string s;
	Bomb bm;

	cin >> n;
	for ( int r = 0; r < n; ++r ){
		for ( int i = 1; i < SIZE + 1; ++i ){
			cin >> s;
			bm.input( s, i );
		}
		cin >> x >> y;

		bm.trigger( x, y );

		bm.output();
	}

	return 0;
}