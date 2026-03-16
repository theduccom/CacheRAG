#include <iostream>
#include <string>
using namespace std;

bool isChain( int* num, int i, int r ){
	if ( i >= 15 ) return false;
	if ( num[ i ] == 1 ){
		r -= 1;
		if ( !r ){
			return true;
		}else{
			return isChain( num, i+1, r );
		}
	}
	return false;
}


string checkHand( int* c ){
	int number[ 15 ] = {0};
	int max1 = 0, max1num = 0, max2 = 0, max2num = 0;

	for ( int i = 0; i < 5; ++i ){
		int n = c[ i ];
		++number[ n ];
		if ( number[ n ] > max1 ){
			if ( n == max1num ){
				max1 = number[ n ];
				max1num = n;
			}else{
				max2 = max1;
				max2num = max1num;
				max1 = number[ n ];
				max1num = n;
			}
		}else if ( number[ n ] > max2 ){
			max2 = number[ n ];
			max2num = n;
		}
		if ( n == 1 ) ++number[ 14 ];
	}

	if ( max1 == 4 ){
		return "four card";
	}else if ( max1 == 3 ){
		if ( max2 == 2 ){
			return "full house";
		}else{
			return "three card";
		}
	}else if ( max1 == 2 ){
		if ( max2 == 2 ){
			return "two pair";
		}else{
			return "one pair";
		}
	}

	for ( int i = 1; i <= 10; ++i ){
		if ( number[ i ] == 1 ){
			if ( isChain( number, i+1, 5-1 ) ){
				return "straight";
			}
		}
	}


	return "null";
}

int main(){
	int card[ 5 ];
	char c;

	while ( cin >> card[ 0 ] >> c >> card[ 1 ] >> c >> card [ 2 ] >> c
				>> card[ 3 ] >> c >> card[ 4 ] ){

		cout << checkHand( card ) << endl;

	}
	return 0;
}