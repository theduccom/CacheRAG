#include<iostream>
#include<string>
using namespace std;

int main(){
	string str, inv;
	int cnt=0;
	while( getline(cin, str), str.length()!=0 ){
		inv.resize(str.length());
		for( int i=0; i<str.length(); i++ ){
			inv[i] = str[str.length()-1-i];
		}
		if( str == inv ){
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}