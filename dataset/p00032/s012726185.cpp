#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int a, b, c = 0;
	char s;
	int rect_num = 0;
	int diamond_num = 0;
	while (std::cin >> a >> s >> b >> s >> c)
	{
		int a2 = std::pow(a, 2);
		int b2 = std::pow(b, 2);
		int c2 = std::pow(c, 2);
		if ((a2 + b2) == c2)
		{
			rect_num++;
		}
		else
		{
			if ((a + b >= c) && (a == b))
			{
				diamond_num++;
			}
		}
	}
	std::cout << rect_num << std::endl;
	std::cout << diamond_num << std::endl;

	return 0;
}