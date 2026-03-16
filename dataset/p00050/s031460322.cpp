#include<iostream>
#include<vector>
#include<string>
#include<sstream>
int main()
{
	std::vector<std::string::size_type>apple, peach;
	std::string str;
	std::getline(std::cin, str);
	while (true)
	{
		static int index = -1;
		index = str.find("apple", index + 1);
		if (index == std::string::npos)
		{
			break;
		}
		apple.push_back(index);
	}
	while (true)
	{
		static int index = -1;
		index = str.find("peach", index + 1);
		if (index == std::string::npos)
		{
			break;
		}
		peach.push_back(index);
	}
	for (auto i : apple)
	{
		str.replace(i, 5, "peach");
	}
	for (auto i : peach)
	{
		str.replace(i, 5, "apple");
	}
	std::cout << str << std::endl;
	return 0;
}
