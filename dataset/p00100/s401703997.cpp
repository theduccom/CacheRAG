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

		map<int, ull> tmp;
		vector<int> nums;

		REP( i, 0, n )
		{
			int no, price, num;
			cin >> no >> price >> num;

			if ( tmp[ no ] == 0 )
			{
				nums.PB( no );
			}

			tmp[no] += price * num;
		}

		bool flag = false;

		REP( i, 0, nums.size() )
		{
			if ( 1000000 <= tmp[ nums[i] ] )
			{
				cout << nums[i] << endl;
				flag = true;
			}
		}

		if ( !flag )
		{
			cout << "NA" << endl;
		}
	}

	return 0;
}