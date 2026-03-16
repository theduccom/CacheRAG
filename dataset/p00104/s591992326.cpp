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
	while ( true )
	{
		int h, w;
		cin >> h >> w;
		cin.ignore( 1 );

		if ( h == 0 && w == 0 )
		{
			break;
		}

		vector<string> field;

		REP( i, 0, h )
		{
			string buffer;
			cin >> buffer;
			field.PB( buffer );
		}

		pair<int,int> current = MP( 0, 0 );
		set< pair<int,int> > visited;

		while ( true )
		{
			if ( field[ current.fst ][ current.snd ] == '.' )
			{
				cout << current.snd << ' ' << current.fst << endl;
				break;
			}

			if ( visited.find( current ) != visited.end() )
			{
				cout << "LOOP" << endl;
				break;
			}

			visited.insert( current );

			switch ( field[ current.fst ][ current.snd ] )
			{
			case '>':
				current.snd++;
				break;
			case '<':
				current.snd--;
				break;
			case '^':
				current.fst--;
				break;
			case 'v':
				current.fst++;
				break;
			}

		}
	}

	return 0;
}