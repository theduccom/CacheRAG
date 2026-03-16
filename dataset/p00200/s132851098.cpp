#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 99999999;


int main(void)
{
	int n,m;
	int cost[101][101];
	int time[101][101];

	while( cin >> n >> m && n != 0 ){
		for( int i = 0;i < 101;i++ ){
			for( int j = 0;j < 101;j++ ){
				cost[i][j] = time[i][j] = INF;
			}
		}

		for( int i = 0;i < 101;i++ ){
			cost[i][i] = time[i][i] = 0;
		}

		for( int i = 0;i < n;i++ ){
			int a,b,c,d;

			cin >> a >> b >> c >> d;

			cost[a][b] = c;
			cost[b][a] = c;
			time[a][b] = d;
			time[b][a] = d;
		}

		for( int k = 1;k <= m;k++ ){
			for( int i = 1;i <= m;i++ ){
				if( cost[i][k] != INF ){
					for( int j = 1;j <= m;j++ ){
						cost[i][j] = min( cost[i][j], cost[i][k] + cost[k][j] );
					}
				}
				if( time[i][k] != INF ){
					for( int j = 1;j <= m;j++ ){
						time[i][j] = min( time[i][j], time[i][k] + time[k][j] );
					}
				}
			}
		}

		int k;

		cin >> k;

		for( int i = 0;i < k;i++ ){
			int p,q,r;

			cin >> p >> q >> r;

			if( r == 0 ) cout << cost[p][q];
			else cout << time[p][q];

			cout << endl;
		}
	}

	return 0;
}