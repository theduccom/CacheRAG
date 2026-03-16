#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	
	string c = "                                                                                                                                                       ";
	
	bool checker;
	
	while(true){
		
		getline(cin, c);
		
		if(cin.eof()){
			break;
		}
		
		for(int i = 0; i < 26; i++){
			for(int j = 0; j < 2000; j++){
				if(c[j] == '\0'){
					break;
				}else if(c[j] == 'z'){
					c[j] = 'a';
				}else if(c[j] == ' '){
					c[j] = ' ';
				}else if(c[j] == '.'){
					c[j] = '.';
				}else{
					c[j]++;
				}
			}
			
			checker = false;
			
			for(int j = 0; j < 2000; j++){
				if(c[j] == '\0'){
					break;
				}
				if(c[j] == 't' && c[j + 1] == 'h'){
					if(c[j + 2] == 'e'){
						checker = true;
						break;
					}else if(c[j + 2] == 'i' && c[j + 3] == 's'){
						checker = true;
						break;
					}else if(c[j + 2] == 'a' && c[j + 3] == 't'){
						checker = true;
						break;
					}
				}
			}
			
			if(checker){
				break;
			}
		}
		
		for(int i = 0; i < 2000; i++){
			if(c[i] == '\0'){
				break;
			}
			cout << c[i];
		}
		cout << endl;
	}
	
	return 0;
}