#include <iostream>
#include <string>
using namespace std;

int main(){
	string str, str_copy;
	
	while(getline(cin, str)){
		for(int i = 0; i < 26; i++){
			for(int j = 0; j < str.size(); j++){
				if(str[j] >= 'a' && str[j] <= 'z'){
					str[j] = (str[j] == 'z')? 'a' : str[j] + 1;
				}
			}
			if(str.find("the") != string::npos
			 || str.find("this") != string::npos
			  || str.find("that") != string::npos){
				cout << str << endl;
			}
		}
	}
	
	return 0;
}