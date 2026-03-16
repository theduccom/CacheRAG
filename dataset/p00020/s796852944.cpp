#include<iostream>
#include<string>
int main()
{
	std::string str;
	std::getline(std::cin, str);
	for (auto&i : str)
	{
		if ('a' <= i && i <= 'z')
		{
			i += 'A' - 'a';
		}
	}
	std::cout << str << std::endl;
	return 0;
}
