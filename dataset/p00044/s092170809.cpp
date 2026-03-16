#include <iostream>
#include <vector>

using namespace std;

bool isPrime[55000];
vector<int> prime;

void primeCalc()
{
	for(int i = 0; i < 55000; ++i)
	{
		isPrime[i] = true;
	}
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < 55000; ++i)
	{
		if(isPrime[i])
		{
			prime.push_back(i);
			for(int j = 2 * i; j < 55000; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
}

void solve()
{
	primeCalc();
	int n;
	while(cin >> n)
	{
		int pos = 0;
		while(true)
		{
			if(prime[pos] >= n)
			{
				cout << prime[pos - 1] << " ";
				break;
			}
			++pos;
		}
		if(prime[pos] == n)
		{
			cout << prime[pos + 1] << endl;
		}
		else
		{
			cout << prime[pos] << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}