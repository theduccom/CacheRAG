#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void){

	vector< bool > isP( 60000, true );
	isP[0] = false;
	isP[1] = false;
	for( int i = 2; i < 60000; i++ ) {
		if( !isP[i] ) continue;
		for( int j = 2 * i; j < 60000; j+=i ) {
			isP[j] = false;
		}
	}

	int n;
	while( scanf("%d", &n) != EOF ) {
		int min, max;
		for( int i = n + 1;;i++ ) {
			if( isP[i] ) {
				max = i;
				break;
			}
		}
		for( int i = n - 1;; i-- ) {
			if( isP[i] ) {
				min = i;
				break;
			}
		}
		cout << min << " " << max << endl;
	}

    return 0;
}