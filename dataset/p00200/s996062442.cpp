#include <iostream>
using namespace std;

#define MAX 1000000
#define n_MAX 101

int main() {

  while( true ) {

    long long int n, m;
    cin >> m >> n;
    if ( n == 0 ) break;

    long long int c[n_MAX][n_MAX], t[n_MAX][n_MAX];

    for ( int i = 1; i < n_MAX; i++ ) {
      for ( int j = 1; j < n_MAX; j++ ) {
	c[i][j] = MAX;
	t[i][j] = MAX;
      }
      c[i][i] = 0;
      t[i][i] = 0;
    }

    for ( long long int i = 0; i < m; i++ ) {

      long long int a, b;
      cin >> a >> b;
      cin >> c[a][b] >> t[a][b];
      c[b][a] = c[a][b];
      t[b][a] = t[a][b];

    }

    for ( int i = 1; i <= n; i++ ) {
      for ( int j = 1; j <= n; j++ ) {
	for ( int k = 1; k <= n; k++ ) {
	  c[j][k] = min( c[j][k], c[j][i] + c[i][k] );
	  t[j][k] = min( t[j][k], t[j][i] + t[i][k] );
	}
      }
    }

    long long int in;
    cin >> in;

    for ( long long int i = 0; i < in; i++ ) {

      long long int p, q, r;
      cin >> p >> q >> r;
      if ( r == 0 ) {
	cout << c[p][q] << endl;
      }else {
	cout << t[p][q] << endl;
      }

    }

  }

  return 0;

}