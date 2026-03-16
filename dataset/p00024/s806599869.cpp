#include<iostream>
using namespace  std;

int main()
{
	double n;
	while (cin >> n)
	{
		double t = n / 9.8;
		double y = t * t * 4.9;
		int N = 0;
		for (N = 1;;N++)
		{
			if (y <= (N - 1) * 5)break;
		}
		cout << N << endl;
	}
	return 0;
}