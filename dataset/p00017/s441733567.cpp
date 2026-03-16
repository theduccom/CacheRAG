#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string code;
	while(getline(cin, code)){
		for(int i = 0;i < 26;i++){
			for(int j = 0;j < code.size();j++){
				if(code[j] >= 'a' && code[j] <= 'z'){
					code[j]++;
					if(code[j] == 'z'+1)code[j] = 'a';
				}
			}
			if(code.find("the")!=-1 || code.find("this") != -1 || code.find("that") != -1)break;
		}
		cout << code << endl;
	}
	return 0; 
}