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

bool prime( int n )
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
	int n;

	while (	cin >> n )
	{
		for ( int i = n - 1; 0 <= n; i-- )
		{
			if ( prime( i ) )
			{
				cout << i << ' ';
				break;
			}
		}

		for ( int i = n + 1; ; i++ )
		{
			if ( prime( i ) )
			{
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}