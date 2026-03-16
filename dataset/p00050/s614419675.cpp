#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	string s;
	vector<string> w;

	while(cin >> s){
		if(s=="hoge") break;
		
		if( s.find("peach",0) != string::npos){
			unsigned i = s.find("peach",0);
			s.replace( i , 5 , "apple" );
		}else if( s.find("apple",0) != string::npos){
			unsigned i = s.find("apple",0);
			s.replace( i , 5 , "peach" );
		}
		w.push_back(s);
	}
	for(int i=0 ; i<w.size() ; i++){
		cout << w[i];
		if(i==w.size()-1){
			cout << endl;
		}else{
			cout << " ";
		}
	}
	return 0;
}