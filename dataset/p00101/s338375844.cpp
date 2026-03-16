#include <iostream>
#include <string>

int main(void){
	int num;
	std::string str;
	std::string::size_type index;

	std::cin >> num;
	std::cin.ignore();

	for(int i; i < num; ++i){
		getline(std::cin, str);

		for(index = str.find("Hoshino"); index != std::string::npos; index = str.find("Hoshino",index + 6)){
			str.replace(index,7,"Hoshina");
		}

		std::cout << str << std::endl;
	}
	return 0;
}