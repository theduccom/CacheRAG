#include <iostream>
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

typedef long long ll;
typedef unsigned long long ull;

#define REP( i, m, n ) for ( int i = (int)m; i < (int)n; i++ )
#define UREP( i, m, n ) for ( unsigned int i = (unsigned int)m; i < (unsigned int)n; i++ )
#define ITER( c ) __typeof( (c).begin() )
#define IREP( c, it ) for ( ITER(c) it = c.begin(); it != c.end(); ++it )
#define ALL( c ) (c).begin(), (c).end()
#define PB( n ) push_back( n )
#define MP( a, b ) make_pair( a, b )
#define fst first
#define snd second

int dijkstra( vector< vector< pair<int,int> > > graph, const int start, const int goal )
{
	vector<int> distance( graph.size() );
	fill( ALL( distance ), INT_MAX );

	priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > que; // 累計コスト, ノード番号
	que.push( MP( 0, start ) );

	while ( !que.empty() )
	{
		int total = que.top().fst;
		int node = que.top().snd;
		que.pop();

		if ( total < distance[ node ] )
		{
			distance[ node ] = total;

			REP( i, 0, graph[ node ].size() )
			{
				int to = graph[ node ][i].fst;
				int cost = graph[ node ][i].snd;

				que.push( MP( total + cost, to ) );
			}
		}
	}

	return distance[ goal ];
}

int main()
{
	int n, m;
	cin >> n >> m;

	vector< vector< pair<int,int > > > graph( n );

	REP( i, 0, m )
	{
		string buffer;
		cin >> buffer;

		REP( j, 0, buffer.length() )
		{
			if ( buffer[j] == ',' )
			{
				buffer[j] = ' ';
			}
		}

		int from, to, forward, back;
		istringstream( buffer ) >> from >> to >> forward >> back;

		graph[ from - 1 ].PB( MP( to - 1, forward ) );
		graph[ to - 1 ].PB( MP( from - 1, back ) );
	}
	
	string buffer;
	cin >> buffer;

	REP( j, 0, buffer.length() )
	{
		if ( buffer[j] == ',' )
		{
			buffer[j] = ' ';
		}
	}

	int start, goal, given, pay;
	istringstream( buffer ) >> start >> goal >> given >> pay;

	cout << given - pay - dijkstra( graph, start - 1, goal - 1 ) - dijkstra( graph, goal - 1, start - 1 ) << endl;

	return 0;
}