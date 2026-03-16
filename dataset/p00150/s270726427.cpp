#include<algorithm>
#include<iostream>
#include<vector>

bool used[10000];
std::vector<int> primes;

void sieve()
{
	used[0] = used[1] = true;
	for( int i = 2; i <= 10000; ++i )
	{
		if( !used[i] )
		{
			primes.push_back( i );

			for( int j = i; j <= 10000; j += i )
				used[j] = true;
		}
	}

	return;
}

int main()
{
	sieve();

	int n;
	while( std::cin >> n, n )
	{
		int i = std::upper_bound( primes.begin(), primes.end(), n ) - primes.begin() - 1;
		while( i > 0 && primes[i] - primes[i-1] != 2 )
			--i;

		std::cout << primes[i-1] << ' ' << primes[i] << std::endl;
	}

	return 0;
}