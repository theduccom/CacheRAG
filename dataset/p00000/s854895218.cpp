#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	for ( int leftIdx = 1; leftIdx <= 9; ++leftIdx ) {
		for ( int rightIdx = 1; rightIdx <= 9; ++rightIdx ) {
			printf( "%dx%d=%d\n", leftIdx, rightIdx, leftIdx * rightIdx );
		}
	}
	return 0;
}