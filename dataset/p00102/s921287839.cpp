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

		vector< vector<int> > table;

		REP( i, 0, n )
		{
			table.PB( vector<int>() );
			int sum = 0;

			REP( j, 0, n )
			{
				int in;
				cin >> in;
				table[i].PB( in );
				sum += in;
			}

			table[i].PB( sum );
		}

		table.PB( vector<int>() );

		REP( i, 0, n + 1 )
		{
			int sum = 0;

			REP( j, 0, n )
			{
				sum += table[j][i];
			}

			table[n].PB( sum );
		}

		REP( i, 0, table.size() )
		{
			REP( j, 0, table[i].size() )
			{
				printf("%5d", table[i][j] );
			}
			cout << endl;
		}
	}

	return 0;
}