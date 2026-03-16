#include<iostream>
#include<string>
int conv(char c)
{
	switch (c)
	{
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	default:
		return 0;
	}
}
int main()
{
	for (std::string str; std::cin >> str;)
	{
		str.push_back(' ');
		int sum = 0;
		for (auto itr = str.begin(), end = str.end(); itr != end; itr++)
		{
			sum += conv(*itr) * (conv(*itr) >= conv(*(itr + 1)) ? 1 : -1);
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
