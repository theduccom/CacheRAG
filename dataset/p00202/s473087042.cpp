#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
vector<int> prime;
bool isPrime[1000001];
bool dp[1000001];
vector<int> price;

void PrimeCalc()
{
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < 1000001; ++i)
	{
		if(isPrime[i])
		{
			for(int j = 2 * i; j < 1000001; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
}

void solve()
{
	PrimeCalc();
	int n, x;
	while(cin >> n >> x, n || x)
	{
		price.clear();
		price.resize(n);
		for(int i = 0; i < n; ++i)
		{
			cin >> price[i];
		}
		memset(dp, 0, sizeof(dp));
		for(int i = 0; i < n; ++i)
		{
			dp[price[i]] = true;
		}
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j <= x; ++j)
			{
				if(dp[j] && j + price[i] <= x)
				{
					dp[j + price[i]] = true;
				}
			}
		}
		bool ok_flag = false;
		for(int i = x; i >= 1; --i)
		{
			if(dp[i] == true && isPrime[i] == true)
			{
				cout << i << endl;
				ok_flag = true;
				break;
			}
		}
		if(!ok_flag)
		{
			cout << "NA" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}