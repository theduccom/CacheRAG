#include <iostream>
#include <string>
using namespace std;

int main(){
	bool cup[ 3 ] = { false };
	cup[ 0 ] = true;
	string s;

	while ( cin >> s ){
		if ( cup[ s[ 0 ] - 'A' ] || cup[ s[ 2 ] - 'A' ] ){
			cup[ s[ 0 ] - 'A' ] = !cup[ s[ 0 ] - 'A' ];
			cup[ s[ 2 ] - 'A' ] = !cup[ s[ 2 ] - 'A' ];
		}
	}

	for ( int i = 0; i < 3; ++i ){
		if ( cup[ i ] ){
			cout << static_cast< char >( i + 'A' ) << endl;
		}
	}

	return 0;
}