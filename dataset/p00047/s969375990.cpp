#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	
	int cup[3]={1,0,0};
	string str;
	
	while( cin >> str ){
		if( cin.eof() ) break;
		swap( cup[str[0]-'A'] , cup[str[2]-'A'] );
	}
	
	for( int i=0 ; i<3 ; i++ ){
		if( cup[i] ) cout << char('A'+i) << endl;
	}
}