#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef long long ll;
typedef unsigned long long ull;

#define REP( i, m, n ) for ( int i = (int)( m ); i < (int)( n ); i++ )
#define UREP( i, m, n ) for ( unsigned int i = (unsigned int)( m ); i < (unsigned int)( n ); i++ )

#define ITER( c ) __typeof( (c).begin() )
#define IREP( c, it ) for ( ITER(c) it = c.begin(); it != c.end(); ++it )
#define ALL( c ) (c).begin(), (c).end()
#define RALL( c ) (c).rbegin(), (c).rend()

#define PB( n ) push_back( n )
#define MP( a, b ) make_pair( ( a ), ( b ) )
#define EXIST( c, e ) ( (c).find( e ) != (c).end() )

#define fst first
#define snd second

#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define DEBUG( x ) cerr << __FILE__ << ":" << __LINE__ << ": " << #x << " = " << ( x ) << endl

bool check( VI ls, int r )
{
	REP( i, 0, 3 )
	{
		REP( j, i + 1, 3 )
		{
			if ( sqrt( pow( ls[i], 2 ) + pow( ls[j], 2 ) ) < 2 * r )
			{
				return true;
			}
		}
	}

	return false;
}

int main()
{
	while ( true )
	{
		VI ls( 3 );
		
		bool notlast = false;

		REP( i, 0, 3 )
		{
			cin >> ls[i];
			notlast |= ls[i] != 0;
		}

		if ( !notlast )
		{
			break;
		}

		int n;
		cin >> n;

		REP( i, 0, n )
		{
			int r;
			cin >> r;

			if ( check( ls, r ) )
			{
				cout << "OK" << endl;
			}
			else
			{
				cout << "NA" << endl;
			}
		}
	}

	return 0;
}