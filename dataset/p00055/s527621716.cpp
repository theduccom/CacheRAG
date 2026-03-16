#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	// a( n + 1 ) = a( n ) * 2
	// a( n + 1 ) = a( n ) / 3
	double input;
	while ( cin >> input ){
		double sum = input;
		for ( int i = 0; i < 9; ++i ){
			if( !( i % 2 ) ) input *= 2;
			else input /= 3;
			sum += input;
		}
		cout << setprecision( 8 ) << setiosflags( ios::fixed );
		cout << sum << endl;
	}
	return 0;
}