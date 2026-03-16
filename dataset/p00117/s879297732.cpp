#include <iostream>
using namespace std;
#define INF (1<<29)

int dist[30][30];
int main(){
    int n, m;
    char dummy;
	cin >> n >> m;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i == j)dist[i][j] = 0;
			else      dist[i][j] = INF;
		}
	}

	for(int i=0;i<m;i++){
		int a, b, c, d;
		cin >> a >> dummy >> b >> dummy >> c >> dummy >> d;
		dist[a-1][b-1] = c;
		dist[b-1][a-1] = d;
	}	


	for(int k=0;k<n;k++)for(int i=0;i<n;i++)for(int j=0;j<n;j++)
		dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	int x1, x2, y1, y2;
	cin >> x1 >> dummy >> x2 >> dummy >> y1 >> dummy >> y2;
	cout << (y1 - y2 - dist[x1-1][x2-1] - dist[x2-1][x1-1]) << endl;
	return 0;
}