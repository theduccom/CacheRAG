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

int maze[150][150];
int W, H;
bool flag;

void dfs( int sx, int sy, int gx, int gy, int color ) {
	REP( i, 4 ) {
		int nx = sx + dx[i];
		int ny = sy + dy[i];

		if( nx >= 0 && nx <= W && ny >= 0 && ny <= H && maze[nx][ny] == color ) {
			if( nx == gx && ny == gy ) flag = true;
			maze[nx][ny] = -1;
			dfs( nx, ny, gx, gy, color );
		}
	}
}

signed main() {
	while( cin >> W >> H, W ) {
		fill( maze[0], maze[150], -1 );

		int sx, sy, gx, gy, n;
		cin >> sx >> sy >> gx >> gy >> n;

		REP( i, n ) {
			int color, d, x, y;
			cin >> color >> d >> x >> y;

			if( d == 0 ) {
				REP( i, 4 ) {
					maze[x + i][y] = color;
					maze[x + i][y + 1] = color;
				}
			} else {
				REP( i, 4 ) {
					maze[x][y + i] = color;
					maze[x + 1][y + i] = color;
				}
			}
		}

		if( maze[sx][sy] == -1 ) {
			cout << "NG" << endl;
		} else {
			flag = false;
			dfs( sx, sy, gx, gy, maze[sx][sy] );
			cout << ( flag ? "OK" : "NG" ) << endl;
		}
	}
}
