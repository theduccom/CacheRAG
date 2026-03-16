#include <iostream>
int main()
{
	int a, b, c, n = 0, m = 0;
	char t;
	while (std::cin >> a >> t >> b >> t >> c)
	{
		if (a*a + b*b == c*c) n++;
		if (a == b) m++;
	}
	std::cout << n << '\n' << m << '\n';
}