#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
bool IsPrime[10500];
vector<int> Prime;

void calc()
{
	memset(IsPrime, 1, sizeof(IsPrime));
	for(int i = 2; i < 10500; ++i)
	{
		if(IsPrime[i])
		{
			Prime.push_back(i);
			for(int j = 2 * i; j < 10500; j += i)
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
		int count = 0;
		while(Prime[count] < n)
		{
			count++;
		}
		if(Prime[count] != n)
		{
			count--;
		}
		for(int i = count; i >= 0; --i)
		{
			if(Prime[i] - Prime[i - 1] == 2)
			{
				cout << Prime[i - 1] << " " << Prime[i] << endl;
				break;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}