#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
bool IsPrime[55000];
vector<int> Prime;

void calc()
{
	memset(IsPrime, 1, sizeof(bool) * 55000);
	for(int i = 2; i < 55000; ++i)
	{
		if(IsPrime[i])
		{
			Prime.push_back(i);
			for(int j = 2 * i; j < 55000; j += i)
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
	while(cin >> n)
	{
		int pos = 0;
		while(Prime[pos] < n)
		{
			pos++;
		}
		if(IsPrime[n])
		{
			cout << Prime[pos - 1] << " " << Prime[pos + 1] << endl;
		}
		else
		{
			cout << Prime[pos - 1] << " " << Prime[pos] << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}