#include <iostream>
#include <algorithm>
using namespace std;

int d[101][101];
int t[101][101],c[101][101];
int n,m;
const int INF = 10000000;

void warshall_floyd() {

  for ( int k = 0; k <= m; k++ ) {
    for ( int i = 0; i <= m; i++ ) {
      for ( int j = 0; j <= m; j++ ) {
	t[i][j] = min( t[i][j], t[i][k] + t[k][j] );
	c[i][j] = min( c[i][j], c[i][k] + c[k][j] );
      }
    }
  }

}

int main() {

 
  while ( cin >> n >> m, n || m ) {
    for ( int i = 0; i < 101; i++ ) {
      for ( int j = 0; j < 101; j++ ) {
	if ( i == j ) {
	  t[i][j] = 0;
	  c[i][j] = 0;
	} else {
	  t[i][j] = INF;
	  c[i][j] = INF;
	}
      }
    }
  
    for ( int i = 0; i  < n; i++ ) {
      int a,b,cost,time; cin >> a >> b >> cost >> time;
      t[a][b] = t[b][a] = time;
      c[a][b] = c[b][a] = cost;
    }
    warshall_floyd();
    int k; cin >> k;
    for ( int i = 0; i < k; i++ ) {
      int p,q,r; cin >> p >> q >> r;
      if ( r == 0 ) {
	cout << c[p][q] << endl;
      } else if ( r == 1) {
	cout << t[p][q] << endl;
      }
    }

  }
  return 0;
}