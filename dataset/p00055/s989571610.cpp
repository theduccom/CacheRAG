#include <iostream>

using namespace std;

void solve()
{
	double a;
	while(cin >> a)
	{
		double sum = a;
		for(int i = 0; i < 9; ++i)
		{
			if(i % 2 == 0)
			{
				a *= 2;
			}
			else
			{
				a /= 3;
			}
			sum += a;
		}
		printf("%.8f\n", sum);
	}
}

int main()
{
	solve();
	return(0);
}