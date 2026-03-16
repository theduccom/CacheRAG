#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	register int i, j;

	bool isPrime[50001 + 1];
	isPrime[2] = true;
	for ( i = 3; i < 50001; i += 2 )
	{
		isPrime[i] = true;
	}

	for ( i = 3; i < 50001; i += 2 )
	{
		for ( j = i + i; j < 50001; j += i )
		{
			isPrime[j] = false;
		}
	}

	int cnt = 1;
	int primes[5500];
	primes[0] = 2;
	for ( i = 3; i < 50001; i += 2 )
	{
		if ( isPrime[i] )
		{
			primes[cnt] = i;
			cnt++;
		}
	}

	int n;
	while ( cin >> n && n != 0 )
	{
		int kotae = 0;
		for ( i = 0; i < cnt; i++ )
		{
			if ( primes[i] <= n / 2 )
			{
				if ( isPrime[n-primes[i]] )
					kotae++;
			}
		}
		cout << kotae << endl;
	}

	return 0;
}