#include <bits/stdc++.h>
using namespace std;

const int INF = 10000000;
const int MAX_V = 51;

int d[MAX_V][MAX_V];
int V;

void warshall_floyd() {
  for ( int k = 0; k < V; k++ ) {
    for (int i = 0; i < V; i++ ) {
      for ( int j = 0; j < V; j++ ) {
	d[i][j] = min(d[i][j], d[i][k] + d[k][j] );
      }
    }
  }
}


int main() {

  cin >> V;

  for ( int i = 0; i < 51; i++ ) {
    for ( int j = 0; j < 51; j++ ) {
      if ( i == j ) d[i][j] = 0;
      else d[i][j] = INF;
    }
  }


  int m; cin >> m;
  int a,b,c,dd;
  char ch1,ch2,ch3;
  for ( int i = 0; i < m; i++ ) {

    cin >> a >> ch1 >> b >> ch2 >> c >> ch3 >> dd;
    a--; b--;
    d[a][b] = c;
    d[b][a] = dd;
  }

  int x1,x2,y1,y2;
  cin >> x1 >> ch1 >> x2 >> ch2 >> y1 >> ch3 >> y2;
  x1--; x2--;
  warshall_floyd();

  int ans = y1 - d[x1][x2] - d[x2][x1] - y2;

  cout << ans << endl;

  return 0;
}