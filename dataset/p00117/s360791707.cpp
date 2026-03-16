#include <iostream>
#include <climits>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

struct Edge
{
	int to, cost;

	Edge( int t, int c ) : to( t ), cost( c )
	{
		return;
	}
};

int dijkstra1( const vector< vector< Edge > > G, const int s, const int t )
{
	const int V = G.size();

	vector<int> dist( V, INT_MAX );
	dist[s] = 0;

	vector<bool> used( V, false );

	while ( true )
	{
		int v = -1;

		for ( int i = 0; i < V; i++ )
		{
			if ( !used[i] && ( v == -1 || dist[i] < dist[v] ) )
			{
				v = i;
			}
		}

		if ( v == -1 )
		{
			break;
		}

		used[v] = true;

		for ( int i = 0; i < G[v].size(); i++ )
		{
			dist[ G[v][i].to ] = min( dist[ G[v][i].to ], dist[v] + G[v][i].cost );
		}
	}

	return dist[t];
}

int dijkstra2( const vector< vector< Edge > > G, const int s, const int t )
{
	const int V = G.size();

	vector<int> dist( V, INT_MAX );

	priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > que;
	que.push( make_pair( 0, s ) );

	while ( !que.empty() )
	{
		int cost = que.top().first;
		int cur = que.top().second;
		que.pop();

		if ( dist[ cur ] < cost )
		{
			continue;
		}

		dist[ cur ] = cost;

		for ( int i = 0; i < G[ cur ].size(); i++ )
		{
			que.push( make_pair( cost + G[ cur ][i].cost, G[ cur ][i].to ) );
		}
	}

	return dist[t];
}

int main()
{
	int n, m;
	cin >> n >> m;

	vector< vector< Edge > > G( n );

	for ( int i = 0; i < m; i++ )
	{
		int a, b, c, d;
		char dummy;

		cin >> a >> dummy >> b >> dummy >> c >> dummy >> d;

		a--;
		b--;

		G[a].push_back( Edge( b, c ) );
		G[b].push_back( Edge( a, d ) );
	}

	int s, t, money, price;
	char dummy;
	cin >> s >> dummy >> t >> dummy >> money >> dummy >> price;

	s--;
	t--;

	cout << money - price - dijkstra1( G, s, t ) - dijkstra2( G, t, s ) << endl;

	return 0;
}