#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 10001;

int main()
{
	bool prime[ SIZE ];
	memset( prime, 0, sizeof(prime) );

	prime[ 0 ] = prime[ 1 ] = true;
	for( int i = 2; i < SIZE; ++i ){
		if( prime[ i ] ) continue;
		for( int j = i + i; j < SIZE; j += i ){
			prime[ j ] = true;
		}
	}

	int n;
	while( cin >> n && n ){
		for( int i = ( n % 2 == 0 ? n - 1 : n ); n > 1; i -= 2 ){
			if( !prime[ i ] && !prime[ i - 2 ] ){
				cout << i - 2<< " " << i << endl;
				break;
			}
		}
	}

	return 0;
}