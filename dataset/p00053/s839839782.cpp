#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

#define max ( 120000 + 1 )

using namespace std;


int main(void){

	vector< bool > p( max, true );
	vector< int > pr;
	vector< int > sum( max, 0 );
	p[0] = false;
	p[1] = false;

	for( int i = 2; i < max; i++ ) {
		if( p[i] == false ) continue;
		for( int j = 2 * i; j < max; j += i ) {
			p[j] = false;
		}
	}

	pr.push_back(0);
	for( int i = 2; i < max; i++ )
		if( p[i] ) pr.push_back( i );

	for( int i = 1; i < pr.size(); i++ ) {
		sum[i] = sum[i-1] + pr[i];
	}

	int n;
	while( true ) {
		scanf("%d",&n);
		if( !n ) break;
		cout << sum[n] << endl;
	}

    return 0;
}