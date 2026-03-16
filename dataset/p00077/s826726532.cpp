#include <iostream>
#include <map>
using namespace std;

int main(){
	
	string s;
	while( cin >> s ){
		int c = 1;
		for( int i = 0 ; i < s.size() ; ){
			if( s[i] == '@' ){
				c = s[i+1] - '0';
				i += 2;
			}else{
				cout << string(c,s[i]);
				c = 1;
				i++;
			}
		}
		cout << endl;
	}
}