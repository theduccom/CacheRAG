#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int n;
	getline( cin, str );
	sscanf( str.c_str(), "%d", &n );

	for( int i=0; i<n; i++ ){
		getline( cin, str );
		unsigned int pos = 0;
		pos = str.find( "Hoshino", pos );
		while( pos != string::npos ){
			str.replace( pos, 7, "Hoshina" );
			pos = str.find( "Hoshino", pos );
		}
		cout << str << endl;
	}
	return 0;
}