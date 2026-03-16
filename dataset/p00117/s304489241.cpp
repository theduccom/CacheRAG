#include <iostream>
#include <climits>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

const int INF = INT_MAX / 2;

struct Edge
{
	int from, to, cost;

	Edge( const int f, const int t, const int c ) : from( f ), to( t ), cost( c )
	{
		return;
	}
};

int bellmanford1( const int V, const vector< Edge > E, const int s, const int t )
{
	vector<int> dist( V, INF );
	dist[s] = 0;

	while ( true )
	{
		bool update = false;

		for ( int i = 0; i < E.size(); i++ )
		{
			if ( dist[ E[i].from ] != INF && dist[ E[i].from ] + E[i].cost < dist[ E[i].to ] )
			{
				dist[ E[i].to ] = dist[ E[i].from ] + E[i].cost;
				update = true;
			}
		}

		if ( !update )
		{
			break;
		}
	}

	return dist[t];
}

int bellmanford2( const int V, const vector< Edge > E, const int s, const int t )
{
	vector<int> dist( V, INF );
	dist[s] = 0;

	for ( int i = 1; i < V; i++ )
	{
		for ( int j = 0; j < E.size(); j++ )
		{
			dist[ E[j].to ] = min( dist[ E[j].to ], dist[ E[j].from ] + E[j].cost );
		}
	}

	return dist[t];
}

int main()
{
	int n, m;
	cin >> n >> m;

	vector< Edge > E;

	for ( int i = 0; i < m; i++ )
	{
		int a, b, ab, ba;
		char d;

		cin >> a >> d >> b >> d >> ab >> d >> ba;

		a--;
		b--;

		E.push_back( Edge( a, b, ab ) );
		E.push_back( Edge( b, a, ba ) );
	}

	int s, t, money, price;
	char d;

	cin >> s >> d >> t >> d >> money >> d >> price;

	s--;
	t--;

	cout << money - price - bellmanford1( n, E, s, t ) - bellmanford2( n, E, t, s ) << endl;

	return 0;
}