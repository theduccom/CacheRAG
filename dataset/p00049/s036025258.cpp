#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	int blood[ 4 ] = { 0 }, dummy;
	string s;
	while ( cin >> s ){
		istringstream is( s );
		is >> dummy >> s;
		if ( s == ",A" ){
			++blood[ 0 ];
		} else if ( s == ",B" ){
			++blood[ 1 ];
		} else if ( s == ",AB" ){
			++blood[ 2 ];
		} else if ( s == ",O" ){
			++blood[ 3 ];
		}else{
			cout << "error" << endl;
		}
	}

	cout << blood[ 0 ] << endl << blood[ 1 ] << endl << blood[ 2 ] << endl << blood[ 3 ] << endl;

	return 0;
}