#include<iostream>
#include<vector>
#include<string>
int main()
{
	std::vector<std::string>result;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::string s1, s2;
		std::cin >> s1 >> s2;
		std::string shorter, longer;
		if (s1.length() < s2.length())
		{
			shorter = s1;
			longer = s2;
		}
		else
		{
			shorter = s2;
			longer = s1;
		}
		std::string sum;
		int remainder = 0;
		for (int j = (int)shorter.length() - 1, k = (int)longer.length() - 1; j >= 0; j--, k--)
		{
			int digit = (int)(shorter[j] - '0' + longer[k] - '0');
			sum.push_back((char)((digit + remainder) % 10 + '0'));
			remainder = (digit + remainder) / 10;
		}
		for (int j = (int)(longer.length() - shorter.length() - 1); j >= 0; j--)
		{
			int digit = (int)(longer[j] - '0');
			sum.push_back((char)((digit + remainder) % 10 + '0'));
			remainder = (digit + remainder) / 10;
		}
		if (remainder != 0)
		{
			sum.push_back((char)(remainder + '0'));
		}
		result.push_back(sum);
	}
	for (auto i : result)
	{
		if (i.length() > 80)
		{
			std::cout << "overflow";
		}
		else
		{
			for (int j = (int)i.length() - 1; j >= 0; j--)
			{
				std::cout << i[j];
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
