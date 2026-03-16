#include <bits/stdc++.h>
using namespace std;

#define int				long long
#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define REPR( i, m )	for( int (i) = (m); (i) >= 0; (i)-- )
#define REPONE( i, n )	FOR( i, 1, n + 1 )
#define ALL( a )        (a).begin(), (a).end()
#define MP				make_pair
#define X				first.first
#define Y				first.second

typedef pair<int, int> P;

template<class T>bool chmax( T& a, const T& b ) { if( a < b ) { a = b; return 1; } return 0; }
template<class T>bool chmin( T& a, const T& b ) { if( a > b ) { a = b; return 1; } return 0; }

const int INF = 1e9;
const int MOD = 1e9 + 7;

int cost[25][25];
int N, M;



signed main() {
	fill( cost[0], cost[25], INF );
	REPONE( i, N ) cost[i][i] = 0;

	char c;
	cin >> N >> M;
	REP( i, M ) {
		int from, to, ft, tf;
		cin >> from >> c >> to >> c >> ft >> c >>  tf;
		cost[from][to] = ft;
		cost[to][from] = tf;
	}
	int s, g, v, p;
	cin >> s >> c >> g >> c >> v >> c >> p;

	REPONE( k, N ) {
		REPONE( i, N ) {
			REPONE( j, N ) {
				chmin( cost[i][j], cost[i][k] + cost[k][j] );
			}
		}
	}

	cout << v - ( cost[s][g] + cost[g][s] ) - p << endl;

}
