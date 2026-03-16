#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
//#define int long long
using namespace std;

int prime[10000];
bool is_prime[10001];

int sieve()
{
	int p = 0;
	rep(i,10001) is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	
	for (int i=2; i<=10001; i++)
	{
		if (is_prime[i])
		{
			prime[p++] = i;
			for (int j=2*i; j<=10001; j+=i) is_prime[j] = false;
		}
	}

	return p;
}

signed main()
{
	int n;

	int p = sieve();

	while (true)
	{
		cin >> n;
		if (n == 0) break;

		int mx, mn;
		for (int i=0; i<p; i++)
		{
			if (prime[i + 1] > n) break;
			if (prime[i] + 2 == prime[i+1])
			{
				mx = prime[i + 1];
				mn = prime[i];
			}
		}

		cout << mn << " " << mx << endl;
	}
}