#include<iostream>
#include<cstdio>

using namespace std;

int i, j, k, p, q, r, n, m, a, b, c, cost[101], t, dc[101][101], dt[101][101];

int dic(const int d[101][101]) {
  cost[p] = 0;
  int min, f[101] = {};
  for(i = 0; i < m; i++) {
    f[p] = 1;
    for(j = 0; j <= m; j++) {
      if(f[j]) continue;
      if(cost[j] > cost[p] + d[p][j]) cost[j]  = cost[p] + d[p][j];
    }
    min = 200000000;
    for(j = 0; j <= m; j++ ) {
      if(f[j]) continue;
      if(min > cost[j]) min = cost[p = j];
    }
  }
  return cost[q];
}


int main() {
  while(cin >> n >> m, n != 0 || m != 0) {
    for(i = 0; i <= 100; i++)
      for(j = 0; j <= 100; j++) {
	dc[i][j] = 100000000;
	dt[i][j] = 100000000;
      }
  

  
    while(n--) {
      cin >> a >> b >> c >> t;
      dc[a][b] = dc[b][a] = c;
      dt[a][b] = dt[b][a] = t;
    }
  
    cin >> k;
    
    while(k--) {
      cin >> p >> q >> r;
      for(i = 0; i <= 100; i++) cost[i] = 100000000;
      if(r) cout << dic(dt) << endl;
      else cout << dic(dc) << endl;
    }
  
  }
  return 0;
}