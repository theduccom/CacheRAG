#include <iostream>
#include <string>

using namespace std;

int main(void){
	string str;
	
	while(1){
		getline(cin, str);
		if(str.size() == 0) break;
		int n = str.size();
		
		for(int i=0;i<=n-5;i++){
			if(str[i] == 'a' && str[i+1] == 'p' && str[i+2] == 'p' && str[i+3] == 'l' && str[i+4] == 'e'){
				str[i] = 'p'; str[i+1] = 'e'; str[i+2] = 'a'; str[i+3] = 'c'; str[i+4] = 'h';
			}else if(str[i] == 'p' && str[i+1] == 'e' && str[i+2] == 'a' && str[i+3] == 'c' && str[i+4] == 'h'){
				str[i] = 'a'; str[i+1] = 'p'; str[i+2] = 'p'; str[i+3] = 'l'; str[i+4] = 'e';
			}
		}
		cout << str << endl;
	}
}