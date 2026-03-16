#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

bool isPrime( int n )
{
	for ( int i = 2; i <= sqrt( n ); i++ )
	{
		if ( !( n % i ) )
		{
			return false;
		}
	}

	return true;
}

int main()
{
	set<int> primes;

	for ( int i = 2; i <= 50000; i++ )
	{
		if ( isPrime( i ) )
		{
			primes.insert( i );
		}
	}

	while ( true )
	{
		int n;
		cin >> n;
		
		if ( n == 0 )
		{
			break;
		}

		int count = 0;

		for ( set<int>::iterator it = primes.begin(); *it <= n / 2 && it != primes.end(); it++ )
		{
			if ( primes.find( n - *it ) != primes.end() )
			{
				count++;
			}
		}

		cout << count << endl;
	}

	return 0;
}