#include <iostream>
#include <string>
using namespace std;

int main(){
	string is, os;
	while ( cin >> is ){
		os = "";
		for ( unsigned i = 0; i < is.size(); ++i ){
			if ( is[ i ] == '@' ){
				++i;
				int n = static_cast< int >( is[ i ] - '0' );
				++i;
				for ( int j = 0; j < n; ++j ){
					os += is[ i ];
				}
			}else{
				os += is[ i ];
			}
		}

		cout << os << endl;
	}
	return 0;
}