#include<iostream>
#include<string>

int main() {
	std::string in;
	while (std::getline(std::cin,in)) {
		for (std::string::iterator itr = in.begin(); itr != in.end(); itr++) {
			if ('a' <= *itr && *itr <= 'z') {
				*itr = *itr - 'a' + 'A';
			}
		}
		std::cout << in << std::endl;
	}
	return 0;
}