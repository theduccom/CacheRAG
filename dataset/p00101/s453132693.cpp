#include <string>
#include <iostream>
#include <cstdio>
int main(){
	int n;
	std::cin>>n;
	std::string s;
	std::cin.ignore();
	for(int i=0;i<n;++i){
		std::getline(std::cin,s);
		/*for(int j=0;j<s.size()-6;++j){
			if(s[j]=='H' && s[j+1] == 'o' && s[j+2] == 's'&& s[j+3] == 'h'&& s[j+4] == 'i'&& s[j+5] == 'n'&& s[j+6] == 'a')s[j+6]='a';
		}*/
		while(s.find("Hoshino") != std::string::npos){
			s[s.find("Hoshino")+6]='a';
			//std::cout<<s.find("Hoshino")<<std::endl;
		}
		//std::cout<<"tes"<<std::endl;
		std::cout<<s<<std::endl;
	}
	return 0;
}