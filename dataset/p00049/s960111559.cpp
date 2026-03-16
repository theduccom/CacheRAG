#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int num,ans[4]={};
	char a;
	string str;
	string match[4] = {
		"A","B","AB","O"
	};
	
	while( cin >> num >> a  ){
		if( cin.eof() ) break ;
		cin >> str;
		for( int i=0 ; i<4 ; i++ ){
			if( match[i] == str ) ans[i]++;
		}
	}
	
	for( int i=0 ; i<4 ; i++ ){
		cout << ans[i] << endl ;
	}
	
	return 0 ;
}