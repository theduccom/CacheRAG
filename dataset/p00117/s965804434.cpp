#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 10000000;
int n,m;
int data[101][101];

void warshall_floyd() {
  for ( int k = 0; k <= n; k++ ) {
    for (int i = 0; i <= n; i++ ) {
      for ( int j = 0; j <= n; j++ ) {
	data[i][j] = min( data[i][j], data[i][k] + data[k][j] );
      }
    }
  }
}

int main() {
  for ( int i = 0; i < 101; i++ ) {
    for ( int j = 0; j < 101; j++ ) {
      if ( i == j ) data[i][j] = 0;
      else data[i][j] = INF;
    }
  }
  cin >> n;
  cin >> m;
  char ch;
  for ( int i = 1; i <= m; i++ ) {
    int a,b,c,d;
    cin >> a >> ch >> b >> ch >> c >> ch >> d;
    data[a][b] = c;
    data[b][a] = d;
  }
  warshall_floyd();
  int x1,x2,y1,y2; cin >> x1  >> ch >> x2 >> ch >> y1 >> ch >> y2;
  
  cout << y1 - y2 - data[x1][x2] - data[x2][x1] << endl;
  return 0;
}