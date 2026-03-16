#include<iostream>
using namespace  std;
int prime[10000];
int ptr = 0;
bool isPrime(int p)
{
	if (p <= 1)return false;
	for (int i = 2; i * i <= p; i++)
	{
		if (p % i == 0)return false;
	}
	return true;
}
void setPrime()
{
	for (int i = 2;;i++)
	{
		if (ptr >= 10000)break;
		if (isPrime(i))prime[ptr++] = i;
	}
}
int main()
{
	int n;
	setPrime();
	while (cin >> n && n != 0)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += prime[i];
		}
		cout << sum << endl;
	}
	return 0;
}