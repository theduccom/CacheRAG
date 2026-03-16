#include <cctype>
#include <string>
#include <iostream>

int main() {
	std::string str;
	int i;
	std::getline(std::cin, str);
	for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
		*it = toupper(*it);
	}
	std::cout << str << '\n';
	return 0;
}