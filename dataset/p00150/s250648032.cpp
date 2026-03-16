#include <iostream>
#include <string.h>

using namespace std;
bool isPrime[10005];

void PrimeCalc()
{
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < 10005; ++i)
	{
		if(isPrime[i])
		{
			for(int j = 2 * i; j < 10005; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
}

void solve()
{
	PrimeCalc();
	int n;
	while(cin >> n, n)
	{
		for(int i = n; i >= 5; --i)
		{
			if(isPrime[i] && isPrime[i - 2])
			{
				cout << i - 2 << " " << i << endl;
				break;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}