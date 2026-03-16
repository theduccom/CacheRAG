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

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int field[12][12];

void dfs( int x, int y ) {
	REP( i, 4 ) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if( nx >= 0 && nx < 12 && ny >= 0 && ny < 12 && field[nx][ny] == 1 ) {
			field[nx][ny] = 0;
			dfs( nx, ny );
		}
	}
}

signed main() {
	while( 1 ) {
		REP( i, 12 ) {
			REP( j, 12 ) {
				char c; if( !( cin >> c ) ) return 0;
				field[j][i] = c - '0';
			}
		}

		int ans = 0;
		REP( i, 12 ) {
			REP( j, 12 ) {
				if( field[j][i] == 1 ) {
					field[j][i] = 0;
					dfs( j, i );
					ans++;
				}
			}
		}

		cout << ans << endl;

	}
	
}
