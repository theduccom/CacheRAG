#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	for(unsigned int i = 0;i < str.size() ;i++){
		if(str[i]=='a' && str[i+1]=='p' && str[i+2]=='p' && str[i+3]=='l' && str[i+4]=='e'){
			if(i+3 >= str.size()) break;
			else{
				str[i] = 'p';
				str[i+1] = 'e';
				str[i+2] = 'a';
				str[i+3] = 'c';
				str[i+4] = 'h';
			}
		}
		else if(str[i]=='p' && str[i+1]=='e' && str[i+2]=='a' && str[i+3]=='c' && str[i+4]=='h'){
			if(i+3 >= str.size()) break;
			else{
			str[i] = 'a';
			str[i+1] = 'p';
			str[i+2] = 'p';
			str[i+3] = 'l';
			str[i+4] = 'e';
			}
		}
	}
	cout << str << endl;
	return 0;
}