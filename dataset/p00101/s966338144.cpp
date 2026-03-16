#include <iostream>
#include <string>

std::string replaceWord(const std::string wrong_word, const std::string right_word, std::string str){
	
	std::string::size_type pos = str.find(wrong_word);
	
    while(pos != std::string::npos){
        str.replace(pos, wrong_word.length(), right_word);
        pos = str.find(wrong_word);
    }
	
	return str;
}

int main(){
    std::string w_word("Hoshino");
    std::string r_word("Hoshina");
	
    int num;
    std::cin >> num;
    std::cin.ignore();
      
    for(int i = 0; i < num; ++i){
        std::string str;
        std::getline(std::cin, str);
        std::cout << replaceWord(w_word, r_word, str) << std::endl;
    }
	
    return 0;
}