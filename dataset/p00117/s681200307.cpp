#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

#define INF 1000000

int r, n, m;

int dijk(int s, int e, int d[21][21]) {
  int mi, i, j;
  int c[m + 1] = {};
    
  for(i = 0; i <= m; i++) {
    c[i] = INF;
  }
    
  int f[m + 1] = {};
  mi = s;
  c[s] = 0;

  for(i = 0; i < m; i++){
    f[mi] = 1;

    for(j = 0; j <= m; j++) {
      if(f[j] == 1) continue;
      if(c[j] > d[mi][j] + c[mi]) {
	c[j] = d[mi][j] + c[mi];
	//	cout << j << c[j] << endl;
      }
    }

    int MIN = INF * 2;

    for(j = 0; j <= m; j++) {
      if(f[j] == 1) continue;
      if(MIN > c[j]) {
	MIN = c[j];
	mi = j;
      }
    }
  }
  return c[e];
}

  
int main() {
  int i, j, a,b, cost_c, cost_d, h_cost, re, s, e;
  while(cin >> m >> n) {
    int d[21][21] = {};
    
    for(i = 0; i <= m; i++) {
      for(j = 0;j <= m; j++) {
	d[i][j] = INF;
      }
    }
    
    for(i = 0; i < n; i++) {
      scanf("%d,%d,%d,%d", &a, &b, &cost_c, &cost_d);
      //      cin >> a >> b >> cost_c >> cost_d;
      d[a][b] = cost_c;
      d[b][a] = cost_d;
    }
    scanf("%d,%d,%d,%d", &s, &e, &re, &h_cost);
    //    cin >> s >> e >> re >> h_cost;
    cout << re -dijk(s, e, d) - dijk(e, s, d) - h_cost<< endl;
  }
  return 0;
}