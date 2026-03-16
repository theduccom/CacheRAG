#include<iostream>
#include<string>
int main()
{
	int cnt = 0;
	while (true)
	{
		std::string str;
		std::cin >> str;
		if (std::cin.eof())
		{
			break;
		}
		if (str.length() == 1)
		{
			cnt++;
		}
		else
		{
			bool is_ok = true;
			for (int i = 0; i <= str.size() - 1 - i; i++)
			{
				if (str[i] != str[str.size() - 1 - i])
				{
					is_ok = false;
					break;
				}
			}
			if (is_ok)
			{
				cnt++;
			}
		}
	}
	std::cout << cnt << std::endl;
	return 0;
}
