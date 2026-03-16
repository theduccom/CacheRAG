#include<iostream>
#include<cmath>
int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		long double xa, ya, ra, xb, yb, rb;
		std::cin >> xa >> ya >> ra >> xb >> yb >> rb;
		long double d = hypot(xa - xb, ya - yb);
		if (d < std::abs(ra - rb))
		{
			std::cout << 2 * (ra < rb ? -1 : 1) << std::endl;
		}
		else if (d <= ra + rb)
		{
			std::cout << 1 << std::endl;
		}
		else
		{
			std::cout << 0 << std::endl;
		}
	}
	return 0;
}
