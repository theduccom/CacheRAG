#include <iostream>
#include <string>

void strReplace(std::string& str){
	const std::string wrong_word = "Hoshino";
	const std::string correct_word = "Hoshina";
	
	std::string::size_type pos = str.find(wrong_word, 0);
	
	while(pos != std::string::npos){
		str.replace(pos, wrong_word.length(), correct_word);
		pos = str.find(wrong_word, pos+correct_word.length());
	}
}

int main(){
	int n;
	std::cin >> n;
	std::cin.ignore();
	
	for(int i=0; i<n; ++i){
		std::string str;
		std::getline(std::cin, str);
		strReplace(str);
		std::cout << str << std::endl;
	}
	
	return 0;
}