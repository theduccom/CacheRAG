#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s;
	while(cin >> s){
		string out;
		for(int i = 0; i < s.length() ;i++){
			if(s[i] == '@'){
				for(int j=0;j<(s[i+1]-'0');j++){
					out += s[i+2];
				}
				i+=2;
			}else{
				out += s[i];
			}
		}
		cout << out << "\n";
	}
	
	return 0;
}