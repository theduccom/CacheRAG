#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int pow( int p, int x ) {
	if( p == 0 ) return 0;
	if( x == 1 ) return p;
	if( x == 0 ) return 1;
	if( x & 1 ) {
		int y = pow( p, ( x - 1 ) / 2 );
		return p * y * y;
	} else {
		int y = pow( p, x / 2 );
		return y * y;
	}
}

int main(void){

	while( true ) {
		int n;
		cin >> n;
		if( !n ) break;
		int ans = 0;
		while( pow( 5 , ans ) <= n ) {
			ans ++;
		}
		int sum = 0;
		for( int i = 1; i < ans; i++ )
			sum += n / pow( 5, i );
		cout << sum << endl;

	}

    return 0;
}