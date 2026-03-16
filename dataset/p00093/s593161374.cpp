#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long ll;

#define ITER( c ) __typeof( c ).begin()
#define REP( i, m, n ) for ( int i = m; i < n; i++ )
#define UREP( i, m, n ) for ( unsigned int i = m; i < n; i++ )
#define IREP( c, it ) for ( ITER(c) it = c.begin(); it != c.end(); ++it )
#define ALL( c ) c.begin(), c.end()
#define PB( n ) push_back( n );
#define MP( a, b ) make_pair( a, b )
#define fst first
#define snd second

bool leap( int y )
{
	if ( !( y % 400 ) )
	{
		return true;
	}
	else if ( !( y % 100 ) )
	{
		return false;
	}
	else if ( !( y % 4 ) )
	{
		return true;
	}

	return false;
}

int main()
{
	int a, b;
	bool first = true;

	while ( cin >> a >> b )
	{
		if ( a == 0 && b == 0 )
		{
			break;
		}

		bool be = false;


		if ( !first )
		{
			cout << endl;
		}
		else
		{
			first = false;
		}

		for ( int i = a; i <= b; i++ )
		{
			if ( leap( i ) )
			{
				be = true;
				cout << i << endl;
			}
		}

		if ( !be )
		{
			cout << "NA" << endl;
		}
	}

	return 0;
}