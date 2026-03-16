#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	char cline[256];
	std::cin.getline(cline, sizeof(cline));
	
	std::string str{ cline };
	std::transform( str.cbegin(), str.cend(), str.begin(), ::toupper);

	std::cout << str << std::endl;

	return 0;
}