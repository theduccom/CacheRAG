#include <bits/stdc++.h>
using namespace std;
int main(){
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string s;
	getline(cin, s);
	//apple
	auto pos = s.find( "apple" );
	while( pos != string::npos ){
		if( pos != string::npos ){
			s = s.replace( pos, 5, "+" );
			pos = s.find( "apple", pos , 5 );
		}
	}
	//peach
	auto pos2 = s.find( "peach" );
	while( pos2 != string::npos ){
		if( pos2 != string::npos ){
			s = s.replace( pos2, 5, "-" );
			pos2 = s.find( "peach", pos2 , 5 );
		}
	}
	//replace
	for(int i=0; i<(int)s.size(); i++){
		if(s[i]=='+'){
			s = s.replace( i, 1, "peach" );
		}else if(s[i]=='-'){
			s = s.replace( i, 1, "apple" );
		}
	}
	cout << s << endl;
	
	return 0;
}