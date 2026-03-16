#include<iostream>
#include<string>
using namespace std ;

int main(){
	
	int ans = 0;
	string str;
	
	while( cin >> str ){
		if( cin.eof() ) break ;
		
		bool f = true;
		for( int i=0 ; i<str.size()/2 ; i++ ){
			if( !f ) break;
			f = ( str[i]==str[str.size()-i-1] );
		}
		if( f ) ans++ ;
	}
	
	cout << ans << endl ;
	
	return 0;
}