#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size()-4;i++){
		if(s.substr(i,5)=="apple"){
			s[i] = 'p';
			s[i+1] = 'e';
			s[i+2] = 'a';
			s[i+3] = 'c';
			s[i+4] = 'h';
		}
		else if(s.substr(i,5)=="peach"){
			s[i] = 'a';
			s[i+1] = 'p';
			s[i+2] = 'p';
			s[i+3] = 'l';
			s[i+4] = 'e';
		}
	}
	cout << s << endl;
}