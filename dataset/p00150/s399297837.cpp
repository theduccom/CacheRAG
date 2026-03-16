#include <iostream>
using namespace std;

const int MAX_V = 1000000;
int prime[MAX_V+1];

int main()
{
	int i, k, v;
	int input;

	for(i = 2; i <= MAX_V; i++)
	{
		prime[i] = 1;
	}
	
	for(i = 2; i*i <= MAX_V; i++)
	{
		if(prime[i])
		{
			for(k = 2 * i; k <= MAX_V; k += i)
			{
				prime[k] = 0;
			}
		}
	}

	for (i = 0; ; ++i)
	{
		cin >> input;
		if (input == 0) break;

		for (v = input; v != 0; --v)
		{
			if (prime[v] && prime[v - 2])
			{
				cout << v - 2 << " " << v << endl;
				break;
			}
		}
	}

	return 0;
}