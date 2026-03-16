#include<iostream>
#include<cmath>
int main()
{
	int cnt[2] = { 0,0 };
	while (true)
	{
		int a, b, c;
		char foo;
		std::cin >> a >> foo >> b >> foo >> c;
		if (std::cin.eof())
		{
			break;
		}
		if (c == hypot(a, b))
		{
			cnt[0]++;
		}
		else if (a == b)
		{
			cnt[1]++;
		}
	}
	std::cout << cnt[0] << std::endl;
	std::cout << cnt[1] << std::endl;
	return 0;
}
