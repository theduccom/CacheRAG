#include <iostream>
#include <string>
using namespace std;
 
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string str;
	while(getline(cin, str)){
	
	while(1){
		for(size_t i = 0; i < str.size(); ++i){
			if('a' <= str[i] && str[i] <= 'z'){
				if(str[i] == 'z'){
					str[i] = 'a';
				}
				else {
					str[i]++;
				}
			}
		}
		bool check = false;
		for(size_t i = 0; i < str.size(); ++i){
			if(str[i] == 't' && (i == 0 || str[i - 1] == ' ')){
				if(str.substr(i, 3) == "the" && (str[i + 3] == ' ' || str[i + 3] == '.') ){
					check = true;
					break;
				}
				if((str.substr(i, 4) == "this" || str.substr(i, 4) == "that") && (str[i + 4] == ' ' || str[i + 4] == '.') ){
					check = true;
					break;
				}
			}
		}
		if(check){
			break;
		}
	}
	cout << str << endl;
	}
	return 0;
}