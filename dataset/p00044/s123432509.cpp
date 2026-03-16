#include <iostream>
#include <vector>

using namespace std;
bool IsPrime[60000];
vector<int> Prime;

void PrimeCalc()
{
	for(int i = 0; i < 60000; ++i)
	{
		IsPrime[i] = true;
	}
	IsPrime[0] = IsPrime[1] = false;
	for(int i = 2; i < 60000; ++i)
	{
		if(IsPrime[i])
		{
			Prime.push_back(i);
			for(int j = 2 * i; j < 60000; j += i)
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
	while(~scanf("%d", &n))
	{
		int count = 0;
		while(n > Prime[count])
		{
			++count;
		}
		cout << Prime[count - 1] << " ";
		if(IsPrime[n])
		{
			++count;
		}
		cout << Prime[count] << endl;
	}
}

int main()
{
	solve();
	return(0);
}