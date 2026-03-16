#include<iostream>
#include<string>
#include<sstream>

int main() {
	std::string line;
	while (std::getline(std::cin, line)) {
		for (int i = 0; i < 26; i++) {
			if (line.find("the") != std::string::npos || line.find("this") != std::string::npos || line.find("that") != std::string::npos) break;
			for (std::string::iterator itr = line.begin(); itr != line.end(); itr++) {
				if (*itr >= 'a' && *itr <= 'z') {
					*itr = ((*itr - 'a' + 1) % 26) + 'a';
				}
			}
		}
		std::cout << line << std::endl;
	}
}