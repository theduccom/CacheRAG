#include <iostream>

using namespace std;

int main(void){
	int n;
	int m;
	int dist[21][21];
	
	cin >> n;
	cin >> m;

	for( int i = 0;i < 21;i++ ){
		for( int j = 0;j < 21;j++ ){
			dist[i][j] = 99999;
		}
	}
	for( int i = 0;i < 21;i++ ){
		dist[i][i] = 0;
	}

	for( int i = 0;i < m;i++ ){
		int a1,b1,c1,c2;
		scanf("%d,%d,%d,%d",&a1,&b1,&c1,&c2 );
		dist[a1][b1] = c1; dist[b1][a1] = c2;
	}

	for( int k = 1;k <= n;k++ ){
		for( int i = 1;i <= n;i++ ){
			if( dist[i][k] == 99999 ) continue;
			for( int j = 1;j <= n;j++ ){
				dist[i][j] = min( dist[i][k] + dist[k][j], dist[i][j] );
			}
		}
	}

	int x1,x2,y1,y2;

	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);

	cout << y1 - ( dist[x1][x2] + dist[x2][x1] + y2 ) << endl;
	return 0;
}