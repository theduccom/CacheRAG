#include <iostream>
#include <map>
int main()
{
	char from, to, comma;
	std::map<char, bool> cups;
	cups['A'] = true;
	cups['B'] = false;
	cups['C'] = false;
	while (std::cin >> from >> comma >> to) {
		std::swap(cups[from], cups[to]);
	}
	std::cout << (cups['A'] ? 'A' : (cups['B'] ? 'B' : 'C')) << std::endl;
}