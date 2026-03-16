#include <iostream>
#include <string.h>

using namespace std;
bool IsPrime[50001];

void calc()
{
	memset(IsPrime, 1, sizeof(IsPrime));
	IsPrime[0] = false;
	IsPrime[1] = false;
	for(int i = 2; i < 50001; ++i)
	{
		if(IsPrime[i])
		{
			for(int j = 2 * i; j < 50001; j += i)
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
		int temp = n / 2;
		for(int i = 0; i <= temp; ++i)
		{
			if(IsPrime[i] == true && IsPrime[n - i] == true)
			{
				count++;
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