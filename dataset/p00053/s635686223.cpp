#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
static const int SIZE = 110000;
bool IsPrime[SIZE];
vector<int> Prime;

void calc()
{
	memset(IsPrime, 1, sizeof(bool) * SIZE);
	for(int i = 2; i < SIZE; ++i)
	{
		if(IsPrime[i])
		{
			Prime.push_back(i);
			for(int j = 2 * i; j < SIZE; j += i)
			{
				IsPrime[j] = false;
			}
		}
	}
}

void solve()
{
	calc();
	int n;
	while(cin >> n, n)
	{
		int sum = 0;
		for(int i = 0; i < n; ++i)
		{
			sum += Prime[i];
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}