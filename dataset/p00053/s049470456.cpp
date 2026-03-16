#include <iostream>
#include <vector>

using namespace std;

static const int SIZE = 300000;
vector<int> prime;
bool isPrime[SIZE];

void primeCalc()
{
	for(int i = 0; i < SIZE; ++i)
	{
		isPrime[i] = true;
	}
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < SIZE; ++i)
	{
		if(isPrime[i])
		{
			prime.push_back(i);
			for(int j = 2 * i; j < SIZE; j += i)
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
	while(cin >> n, n)
	{
		int sum = 0;
		for(int i = 0; i < n; ++i)
		{
			sum += prime[i];
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}