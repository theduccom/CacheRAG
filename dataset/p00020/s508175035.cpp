#include <iostream>
#include <cctype>
#include <iterator>
#include <algorithm>

int main(int argc, char const* argv[])
{
	std::string s;
	std::getline(std::cin, s);
	std::transform(s.begin(), s.end(), s.begin(), toupper);
	std::cout << s << std::endl;

	return 0;
}