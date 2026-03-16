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
	if ( n < 2 )
	{
		return false;
	}

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
	while ( true )
	{
		int n;
		cin >> n;

		if ( n == 0 )
		{
			break;
		}

		int sum = 0;

		for ( int i = 2, count = 0; count < n; i++ )
		{
			if ( isPrime( i ) )
			{
				sum += i;
				count++;
			}
		}

		cout << sum << endl;
	}

	return 0;
}