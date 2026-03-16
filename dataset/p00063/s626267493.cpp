#include <iostream>
#include <string>
using namespace std;

string reserve( const string& s ){
	string rs;
	for ( int i = s.size()-1; i >= 0; --i ){
		rs += s[ i ];
	}
	return rs;
}

int main(){
	int cnt = 0;
	string s;

	while ( cin >> s ){
		if ( s == reserve( s ) ) ++cnt;
	}

	cout << cnt << endl;
	return 0;
}