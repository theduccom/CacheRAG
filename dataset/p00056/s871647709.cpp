#include <iostream>
#include <vector>

using namespace std;
vector<int> prime;
bool isPrime[51000];

void PrimeCalc()
{
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < 51000; ++i)
	{
		isPrime[i] = true;
	}
	for(int i = 2; i < 51000; ++i)
	{
		if(isPrime[i])
		{
			prime.push_back(i);
			for(int j = 2 * i; j < 51000; j += i)
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
		int count = 0;
		for(int i = 0; i < prime.size(); ++i)
		{
			if(prime[i] > n / 2)
			{
				break;
			}
			if(isPrime[n - prime[i]])
			{
				++count;
			}
		}
		cout << count << endl;
	}
}

int main()
{
	solve();
	return(0);
}