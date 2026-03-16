#include<iostream>
int main()
{
	int sum = 0, average = 0, cnt = 0;
	while (true)
	{
		int a, b;
		char c;
		std::cin >> a >> c >> b;
		if (std::cin.eof())
		{
			break;
		}
		sum += a * b;
		average += b;
		cnt++;
	}
	std::cout << sum << std::endl;
	std::cout << (int)((double)average / cnt + 0.5) << std::endl;
}
