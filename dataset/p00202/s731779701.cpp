#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <cfloat>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <functional>
#include <utility>
#include <numeric>

using namespace std;

typedef unsigned int UI;
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef istringstream ISS;
typedef ostringstream OSS;

#define REP( i, m, n ) for ( int i = (int)( m ); i < (int)( n ); ++i )
#define EACH( v, c ) for ( auto &v : c )

#define ITER( c ) __typeof( (c).begin() )
#define IREP( c, it ) for ( ITER(c) it = c.begin(); it != c.end(); ++it )
#define ALL( c ) (c).begin(), (c).end()

#define PB( n ) push_back( n )
#define MP( a, b ) make_pair( ( a ), ( b ) )
#define EXIST( c, e ) ( (c).find( e ) != (c).end() )

#define fst first
#define snd second

#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define DEBUG( x ) cerr << __FILE__ << ":" << __LINE__ << ": " << #x << " = " << ( x ) << endl

const int MAXPRICE = 1000000;

VI getPrimes()
{
	VI res( MAXPRICE + 1, true );
	res[0] = res[1] = false;

	REP( i, 2, MAXPRICE + 1 )
	{
		if ( !res[i] )
		{
			continue;
		}

		for ( int j = 2; i * j <= MAXPRICE; j++ )
		{
			res[ i * j ] = false;
		}
	}

	return res;
}

int main()
{
	cin.tie( 0 );
	ios::sync_with_stdio( false );

	VI isPrime = getPrimes();

	while ( true )
	{
		int n, x;
		cin >> n >> x;

		if ( !( n | x ) )
		{
			break;
		}

		VI ps( n );

		EACH( p, ps )
		{
			cin >> p;
		}

		VI dp( x + 1, false );
		dp[0] = true;

		REP( i, 0, n )
		{
			REP( j, 0, x + 1 )
			{
				if ( ps[i] <= j )
				{
					dp[j] |= dp[ j - ps[i] ];
				}
			}
		}

		int res = -1;

		REP( i, 0, dp.size() )
		{
			if ( isPrime[i] && dp[i] )
			{
				res = i;
			}
		}

		if ( res == -1 )
		{
			cout << "NA";
		}
		else
		{
			cout << res;
		}
		cout << endl;
	}

	return 0;
}