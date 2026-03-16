#include <iostream>
#include <string>
using namespace std;

unsigned rewrite( string& original, const int loc, const string& write ){
	unsigned advance = 0;
	for ( unsigned i = 0; i < write.size(); ++i ){
		original[ loc + i ] = write[ i ];
		++advance;
	}
	return loc + advance;
}

int main(){
	unsigned loc1 = 0, loc2 = 0;
	string s, peach = "peach", apple = "apple";

	while ( getline( cin, s ) ){
		while ( 1 ){
			loc1 = s.find( peach, loc1 );
			loc2 = s.find( apple, loc2 );
			if ( loc1 == string::npos && loc2 == string::npos ){
				break;
			}else if ( loc1 < loc2 ){
				loc1 = rewrite( s, loc1, apple );
			}else{
				loc1 = rewrite( s, loc2, peach );
			}
			loc2 = loc1;
		}
		cout << s << endl;
	}

	return 0;
}