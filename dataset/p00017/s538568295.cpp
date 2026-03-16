#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string str, str1;
	int valid;
	
	while(getline(cin, str)){
		valid = 0;
		for(int i=0; i<26; i++){
			for(int j=0; j<str.length(); j++){
				if(str[j] == ' ' || str[j] == '.') continue;
				if(str[j] == 'z') str[j] = 'a';
				else{
					str[j]++;
				}
			}
			
			str1 = "";
			for(int j=0; j<str.length(); j++){
				if(str[j] != ' ' && str[j] != '.') str1 += str[j];
				else{
					if(str1 == "the" || str1 == "this" || str1 == "that"){
						cout << str << endl;
						valid = 1;
						break;
					}
					else str1 = "";
				}
			}
			if(valid == 1) break;
		}
	}

	return 0;
	
}