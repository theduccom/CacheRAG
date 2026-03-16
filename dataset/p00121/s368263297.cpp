#include <bits/stdc++.h>
using namespace std;

#define int				long long
#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define REPR( i, m )	for( int (i) = (m); (i) >= 0; (i)-- )
#define REPONE( i, n )	FOR( i, 1, n + 1 )
#define ALL( a )        (a).begin(), (a).end()
#define MP				make_pair

typedef pair<int, string> P;

template<class T>bool chmax( T& a, const T& b ) { if( a < b ) { a = b; return 1; } return 0; }
template<class T>bool chmin( T& a, const T& b ) { if( a > b ) { a = b; return 1; } return 0; }

const int INF = 1e9;
const int MOD = 1e9 + 7;

int dx[4] = { 1, -1, 4, -4 };

map<string, int> ans;

void bfs() {
	queue<string> que;
	que.push( "01234567" );
	while( !que.empty() ) {
		string t = que.front(); que.pop();
		int pos;
		REP( i, 8 ) if( t[i] == '0' ) pos = i;
		REP( i, 4 ) {
			if( 0 <= pos + dx[i] && pos + dx[i] < 8 &&
				!( pos == 3 && i == 0 ) && !( pos == 4 && i == 1 )  ) {
				string u = t;
				swap( u[pos], u[pos + dx[i]] );

				if( ans[u] == 0 ) {
					ans[u] = ans[t] + 1;
					que.push( u );
				}
			}
		}
	}
}

signed main() {
	ans["01234567"] = 1;

	bfs();

	char c;
	string s;
	while( 1 ) {
		s = "";
		REP( i, 8 ) {
			if( !( cin >> c ) ) return 0;
			s += c;
		}

		cout << ans[s] - 1 << endl;
	}

}
