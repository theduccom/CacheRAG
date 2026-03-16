#include <cstdio>
#include <algorithm>
using namespace std;
const int INF = 1e+9;

int main(){
	int n,m,dist[21][21];
	
	for(int i=0 ; i < 21 ; i++ )
		for(int j=0 ; j < 21 ; j++ )
			dist[i][j] = INF;

	scanf("%d %d", &n, &m);
	for(int i=0 ; i < m ; i++ ){
		int a,b,c,d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		dist[a][b] = c;
		dist[b][a] = d;
	}
	for(int k=1 ; k <= n ; k++ ){
		for(int i=1 ; i <= n ; i++ ){
			for(int j=1 ; j <= n ; j++ ){
				dist[i][j] = min( dist[i][j] , dist[i][k]+dist[k][j] );
			}
		}
	}
	int x1,x2,y1,y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	int ans = y1 - (y2 + dist[x1][x2] + dist[x2][x1]);
	printf("%d\n", ans );
}