#include <iostream>
#include <string>
  
int main(){
    const std::string wrong_word("Hoshino");
    const std::string right_word("Hoshina");
	
    int num;
    std::cin >> num;
    std::cin.ignore(); // ignore next newline character
      
    for(int i = 0; i < num; ++i){
        std::string str;
        std::getline(std::cin, str);
		
        std::string::size_type pos = str.find(wrong_word);
        while(pos != std::string::npos){
            str.replace(pos, wrong_word.length(), right_word);
            pos = str.find(wrong_word);
        }
		
        std::cout << str << std::endl;
    }
    return 0;
}