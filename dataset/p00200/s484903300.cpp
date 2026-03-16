#include <iostream>
#include <algorithm>
using namespace std;

static const int MAX_S = 100;
static const int INFTY = ( 1 << 20 );

pair< int, int > Adj[MAX_S][MAX_S]; // first : cost, second : time

int main()
{

	int n, m, a, b, cost, time, qn, r;

	while( cin >> n >> m, n || m ) {

		for( int i = 0; i < m; i++ ) {
			for( int j = 0; j < m; j++ ) Adj[i][j].first = Adj[i][j].second = INFTY;
		}

		for( int i = 0; i < n; i++ ) {

			cin >> a >> b >> cost >> time;
			Adj[--a][--b].first  = Adj[b][a].first  = cost;
			Adj[a][b].second	 = Adj[b][a].second = time;

		}

		for( int k = 0; k < m; k++ ) {
			for( int i = 0; i < m; i++ ) {
				if( Adj[i][k].first == INFTY ) continue;
				for( int j = 0; j < m; j++ ) {

					Adj[i][j].first  = min( Adj[i][j].first , Adj[i][k].first  + Adj[k][j].first );
					Adj[i][j].second = min( Adj[i][j].second, Adj[i][k].second + Adj[k][j].second );
				
				}
			}
		}

		cin >> qn;
		for( int i = 0; i < qn; i++ ) {

			bool query;

			cin >> a >> b >> query;
			a--; b--;

			cout << ( !query ? Adj[a][b].first : Adj[a][b].second ) << endl;

		}

	}

	return 0;

}