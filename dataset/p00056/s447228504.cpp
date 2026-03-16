#include <iostream>
using namespace std;

const unsigned LIMIT = 50000;

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
		if ( !( n ) ) break;

		int cnt = 0;
		if ( table[ n - 2 ] ) ++cnt;
		for ( int i = 3; i <= n / 2; i += 2 ){
			if ( !table[ i ] ) continue;
			if ( table[ n - i ] ) ++cnt;
		}

		cout << cnt << endl;
	}
	return 0;
}