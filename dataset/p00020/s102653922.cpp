#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
	string str ;
	int i , j , k ;
	getline( cin , str );
	for( i=0 ; i<str.size() ; i++ ){
		if( !islower( str[i] ) )
			str[i]= tolower( str[i] );
		if( !isupper( str[i] ) )
			str[i] = toupper( str[i] );
		cout << str[i];
	}
	cout << endl;
}