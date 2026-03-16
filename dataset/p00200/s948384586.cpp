#include <iostream>
#include <queue>
#include <functional>
#include <map>
#include <vector>

using namespace std;

const int INF = 9999999;

int solve( int from, int to, int cost[101][101], int n )
{
	int dist[101];
	int history[101];

	for( int i = 0;i < 101;i++ ){
		dist[i] = INF;
		history[i] = 0;
	}

	dist[from] = 0;

	priority_queue<pair<int,int>,vector< pair<int,int> >,greater< pair<int,int> > > q;
	q.push( make_pair(0,from) );

	while( !q.empty() ){
		pair<int,int> a = q.top();
		int u = a.second;
		history[u] = 1;
		q.pop();

		for( int i = 1;i <= n;i++ ){
			if( history[i] ) continue;
			if( cost[u][i] == INF ) continue;

			if( dist[i] > cost[u][i] + dist[u] ){
				dist[i] = cost[u][i] + dist[u];
				q.push( make_pair(dist[i],i ) );
			}
		}
	}
	return dist[to];
}

int main(void){
	int n,m;
	int cost[101][101];
	int time[101][101];

	while( cin >> n >> m && n != 0 ){
		for( int i = 0;i < 101;i++ ){
			for( int j = 0;j < 101;j++ ){
				cost[i][j] = INF;
				time[i][j] = INF;
			}
		}
		for( int i = 0;i < 101;i++ ){
			cost[i][i] = 0;
			time[i][i] = 0;
		}
		for( int i = 0;i < n;i++ ){
			int a,b,c,d;
			cin >> a >> b >> c >> d;
			cost[a][b] = c;
			cost[b][a] = c;
			time[a][b] = d;
			time[b][a] = d;
		}

		int k;
		cin >> k;

		for( int i = 0;i < k;i++ ){
			int p,q,r;
			cin >> p >> q >> r;

			cout << solve( p, q, r ? time : cost, m ) << endl;
		}
	}
			
	return 0;
}