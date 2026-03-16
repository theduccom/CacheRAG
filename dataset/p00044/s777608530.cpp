#include<iostream>
using namespace  std;
bool isPrime(int p)
{
	if (p <= 1)return false;
	for (int i = 2; i * i <= p; i++)
	{
		if (p % i == 0)return false;
	}
	return true;
}
int main()
{
	int n;

	while (cin >> n)
	{
		int mi = -1, ma = -1;
		for (int i = n - 1; i >= 2; i--)
		{
			if (isPrime(i))
			{
				mi = i;
				break;
			}
		}
		for (int i = n + 1;; i++)
		{
			if (isPrime(i))
			{
				ma = i;
				break;
			}
		}
		cout << mi << " " << ma << endl;
	}
	return 0;
}