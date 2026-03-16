#include<iostream>
#include<string>
#include<cstring>

int main(void){
	std::string translated_data;
	std::getline(std::cin,translated_data);
	for(int i=0;i<translated_data.size();i++)
		translated_data[i]=toupper(translated_data[i]);
	std::cout<<translated_data<<std::endl;
	return 0;
}


