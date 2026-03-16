#include <iostream>
using namespace std;

const int DIGIT = 8;

int main(){
	int n, input;

	cin >> n;
	for ( int i = 0; i < n; ++i ){
		int max = 0, min = 0, multi = 1;
		int list[ DIGIT ] = { 0 };
		cin >> input;

		for ( int j = 0; j < DIGIT; ++j ){
			++list[ j ] = input % 10;
			input /= 10;
		}

		for ( int j = 0; j < DIGIT - 1; ++j ){
			for ( int k = 0; k < DIGIT - 1 - j; ++k ){
				if ( list[ k ] > list[ k + 1 ] ){
					int t = list[ k ];
					list[ k ] = list[ k + 1 ];
					list[ k + 1 ] = t;
				}
			}
		}

		for ( int j = 0; j < DIGIT; ++j ){
			max += list[ j ] * multi;
			min += list[ DIGIT - 1 - j ] * multi;
			multi *= 10;
		}

		cout << max - min << endl;

	}
	return 0;
}