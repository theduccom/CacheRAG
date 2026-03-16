#include <iostream>
#include <string>

int main(){
	std::string str;
	int num;
	int start = 0;

	std::cin >> num;

	getline(std::cin, str); // skip "\n"

	for(int i=0; i<num; ++i){

		std::getline(std::cin, str);

		while(start != -1){

			if(start == 0){ // for first loop
				start = (int)str.find("Hoshino", start);
			}else{
				start = (int)str.find("Hoshino", start+7);
			}

			if(start != -1){ // for first loop
				str.replace(start, 7, "Hoshina");
			}

		}

		std::cout << str << std::endl;

		start = 0;
	}

}