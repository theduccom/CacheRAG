#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool isLeapYear( int n ) {
	if( n % 400 == 0 ) return true;
	if( n % 100 == 0 ) return false;
	if( n % 4 == 0 ) return true;
	return false;
}

int main(void){

	int cnt = 0;
	while( true ) {
		
		int a, b;
		bool flg = false;
		cin >> a >> b;
		if( !( a|b ) ) break;
		if( cnt > 0 ) cout << endl;
		for( int i = a; i <= b; i++ ) {
			bool b = isLeapYear( i );
			flg |= b;
			if( b ) cout << i << endl;
		}
		if( !flg ) cout << "NA" << endl;
		cnt ++;
	}

    return 0;
}