#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	
	string c = "";
	
	bool checker;
	
	for(int j = 0; j < 3000; j++){
		c = " " + c;
	}
	
	while(true){
		
		getline(cin, c);
		
		if(cin.eof()){
			break;
		}
		
		checker = false;
		
		for(int j = 0; j < 2000; j++){
			if(c[j] == '\0'){
				break;
			}
			if(c[j] == 'p' && c[j + 1] == 'e' && c[j + 2] == 'a' && c[j + 3] == 'c' && c[j + 4] == 'h'){
				c[j] = 'a';
				c[j + 1] = 'p';
				c[j + 2] = 'p';
				c[j + 3] = 'l';
				c[j + 4] = 'e';
			}else if(c[j] == 'a' && c[j + 1] == 'p' && c[j + 2] == 'p' && c[j + 3] == 'l' && c[j + 4] == 'e'){
				c[j] = 'p';
				c[j + 1] = 'e';
				c[j + 2] = 'a';
				c[j + 3] = 'c';
				c[j + 4] = 'h';
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