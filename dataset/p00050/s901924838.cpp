#include <iostream>
#include <string>

int main(){
	std::string s;
	std::getline(std::cin, s);
	for(int i = 0; i < s.size()-4; ++i){
		if(s[i] != 'a' && s[i] != 'p')continue;
		else{
			if(s[i]=='a' && s[i+1]  == 'p' && s[i+2] == 'p' && s[i+3] == 'l' && s[i+4] == 'e'){
				s[i] = 'p';
				s[i+1] = 'e';
				s[i+2] = 'a';
				s[i+3] = 'c';
				s[i+4] = 'h';
				i+=4;
			}else if(s[i]=='p' && s[i+1]  == 'e' && s[i+2] == 'a' && s[i+3] == 'c' && s[i+4] == 'h'){
				s[i] = 'a';
				s[i+1] = 'p';
				s[i+2] = 'p';
				s[i+3] = 'l';
				s[i+4] = 'e';
				i+=4;
			}
			
		}
	}
	std::cout<<s<<std::endl;
}