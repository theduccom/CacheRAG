
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <memory>
#include <memory.h>
using namespace std;

int d[21][21];

int main(){
  char ch;
  int n, m;
  memset(d, -1, sizeof(d));
  int x1, x2, y1, y2;
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    int a, b, c, d2;
    cin >> a >> ch >> b >> ch >> c >> ch >> d2;
    d[a][b] = c;
    d[b][a] = d2;
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(d[j][i] < 0) continue;
      for(int k = 1; k <= n; k++){
	if(d[i][k] >= 0 && (d[j][k] < 0 || d[j][k] > d[j][i] + d[i][k])){
	  d[j][k] = d[j][i] + d[i][k];
	}
      }
    }
  }
  cin >> x1 >> ch >> x2 >> ch >> y1 >> ch >> y2;
  cout << y1 - y2 - d[x1][x2] - d[x2][x1] << endl;
  return 0;
}