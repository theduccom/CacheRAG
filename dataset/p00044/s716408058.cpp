#include <iostream>
using namespace std;

const unsigned LIMIT = 50050;

int main(){
	bool table[ LIMIT ] = { false };
	table[ 2 ] = true;
	for ( int i = 3; i < LIMIT; i += 2 ){
		table[ i ] = true;
	}
	for ( int i = 3; i < LIMIT; i += 2 ){
		if ( !table[ i ] ) continue;
		for ( int j = i + i; j < LIMIT; j += i ){
			table[ j ] = false;
		}
	}

	int n;
	while ( cin >> n ){
		for ( int i = n-1; i > 1; --i ){
			if ( table[ i ] ){
				cout << i;
				break;
			}
		}
		cout << " ";
		for ( int i = n+1; i < LIMIT; ++i ){
			if ( table[ i ] ){
				cout << i;
				break;
			}
		}
		cout << endl;
	}

	return 0;
}