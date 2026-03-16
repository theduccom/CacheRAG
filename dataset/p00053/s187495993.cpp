#include <iostream>
using namespace std;

const unsigned LIMIT = 105000;

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
		if ( !n ) break;
		int sum = 0;
		for ( int i = 0, j = 2; i < n; ++i ){
			while ( !table [ j ] ) ++j;
			sum += j;
			++j;
		}
	cout << sum << endl;
	}

	return 0;
}