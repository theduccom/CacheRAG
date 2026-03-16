#include <iostream>
#include <string>

int main(){
	int data;
	std::cin >> data;  //dataset
	std::cin.ignore();
	
	std::string mis = "Hoshino";
	std::string correct = "Hoshina";
	
	for(int i=0; i<data; ++i){
		std::string  sentence;
		
		std::getline(std::cin, sentence);
		
		std::string::size_type index = sentence.find(mis);
		
		if(index == std::string::npos){
			std::cout << sentence << std::endl;
		}else{
			while(index != std::string::npos){
				sentence.replace(index, mis.length(), correct);
				index = sentence.find(mis, index + correct.length());
			}
			std::cout << sentence << std::endl;
		}
	}
	
	return 0;
}