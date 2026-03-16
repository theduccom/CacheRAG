#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
	string str;
	while(getline(cin, str)){
		while(1){
			for(int i=0; i<(int)str.length(); i++){
				if('a' <= str[i] && str[i] <'z'){
					str[i]++;
				}else if(str[i]=='z'){
					str[i]='a';
				}
			}
			if(str.find("this")==string::npos && str.find("that")==string::npos && str.find("the")==string::npos){
				continue;
			}
			cout << str << endl;
			break;
		}
	}
	return 0;
}