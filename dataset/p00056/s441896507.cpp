#include <iostream>
#include <vector>

using namespace std;

bool IsPrime[50010];
vector<int> Prime;

void PrimeCalc()
{
	for(int i = 0; i < 50010; ++i)
	{
		IsPrime[i] = true;
	}
	IsPrime[0] = IsPrime[1] = false;
	for(int i = 2; i < 50010; ++i)
	{
		if(IsPrime[i])
		{
			Prime.push_back(i);
			for(int j = 2 * i; j < 50010; j += i)
			{
				IsPrime[j] = false;
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
		int a = n / 2;
		int b = Prime.size();
		int count = 0;
		for(int i = 0; i <= b; ++i)
		{
			if(n < Prime[i] || Prime[i] > a)
			{
				break;
			}
			if(IsPrime[n - Prime[i]])
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