#include <iostream>
#include <string>

int main(){
	int num;
	std::string english,dammy;
	std::cin >> num;
	std::getline(std::cin,dammy);
	for(int i=0;i<num;++i){
		std::getline(std::cin,english);
		while(english.find("Hoshino") != -1){
			size_t find = english.find("Hoshino");
			english.replace(find, 7, "Hoshina");
		}

		std::cout << english << std::endl;
	}
    return 0;
}
