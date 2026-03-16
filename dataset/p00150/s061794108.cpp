#include <iostream>
#include <vector>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int prime[10001];

void CreatePrime(int n)
{
	rep(i,n)
	{
		prime[i] = 1;
	}

	prime[0] = prime[1] = 0;

	REP(i,2,sqrt(n))
	{
		if(prime[i])
		{
			for(int j=0;i*(j+2) < n;j++)
			{
				prime[i*(j+2)] = 0;
			}
		}
	}
}

int main()
{
	int n;
	CreatePrime(10001);

	while(cin >> n && n)
	{
		for(int i=n;i>=0;i--)
		{
			if(prime[i] && prime[i-2])
			{
				cout << i-2 << " " << i << endl;
				break;
			}
		}
	}
	return 0;
}