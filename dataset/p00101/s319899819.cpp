#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string s;
	
	cin >> n;
	cin.ignore();
	for(int i=0 ; i<n  ; i++){
		getline( cin , s );
		
		while( s.find("Hoshino",0) != string::npos){
			unsigned i = s.find("Hoshino",0);
			s.replace( i , 7 , "Hoshina" );
		}
		cout << s << endl;
	}
	
	return 0;
}