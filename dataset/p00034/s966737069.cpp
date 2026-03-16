#include <iostream>
using namespace std;

int main(){
	int len[ 10 ], vel[ 2 ];
	char c;

	while ( cin >> len[ 0 ] >> c >> len[ 1 ] >> c >> len[ 2 ] >> c >> len[ 3 ] >> c
				>> len[ 4 ] >> c >> len[ 5 ] >> c >> len[ 6 ] >> c >> len[ 7 ] >> c
				>> len[ 8 ] >> c >> len[ 9 ] >> c >> vel[ 0 ] >> c >> vel[ 1 ] ){
		int length = 0;
		for ( int i = 0; i < 10; ++i ){
			length += len[ i ];
		}
		double location = static_cast< double >( vel[ 0 ] * length ) / static_cast< double >( vel[ 0 ] + vel[ 1 ] );
		length = 0;
		for ( int i = 0; i < 10; ++i ){
			length += len[ i ];
			if ( location <= length ){
				cout << i + 1 << endl;
				break;
			}
		}
	}


	return 0;
}