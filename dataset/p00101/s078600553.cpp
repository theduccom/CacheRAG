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
typedef unsigned long long ull;

#define ITER( c ) __typeof( c ).begin()
#define REP( i, m, n ) for ( int i = m; i < n; i++ )
#define UREP( i, m, n ) for ( unsigned int i = m; i < n; i++ )
#define IREP( c, it ) for ( ITER(c) it = c.begin(); it != c.end(); ++it )
#define ALL( c ) c.begin(), c.end()
#define PB( n ) push_back( n );
#define MP( a, b ) make_pair( a, b )
#define fst first
#define snd second

int main()
{
	int n;
	cin >> n;
	cin.ignore( 1 );

	REP( i, 0, n )
	{
		string line;
		getline( cin, line );

		while ( true )
		{
			int pos = line.find( "Hoshino", 0 );
			if ( pos == string::npos )
			{
				break;
			}
			else
			{
				line.replace( pos, 7, "Hoshina" );
			}
		}

		cout << line << endl;
	}

	return 0;
}