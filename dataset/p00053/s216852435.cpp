#include <iostream>
#include <vector>

using namespace std;
bool IsPrime[1300000];
vector<int> Prime;
vector<int> Sum;

void CalcPrime()
{
	for(int i = 0; i < 1300000; ++i)
	{
		IsPrime[i] = true;
	}
	IsPrime[0] = IsPrime[1] = false;
	for(int i = 2; i < 1300000; ++i)
	{
		if(IsPrime[i])
		{
			Prime.push_back(i);
			for(int j = 2 * i; j < 1300000; j += i)
			{
				IsPrime[j] = false;
			}
		}
	}
	int n = Prime.size();
	Sum.resize(n);
	Sum[0] = Prime[0];
	for(int i = 1; i < n; ++i)
	{
		Sum[i] = Prime[i] + Sum[i - 1];
	}
}

void solve()
{
	CalcPrime();
	int n;
	while(cin >> n, n)
	{
		cout << Sum[n - 1] << endl;
	}
}

int main()
{
	solve();
	return(0);
}