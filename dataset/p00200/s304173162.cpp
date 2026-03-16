#include<iostream>
#include<algorithm>

using namespace std;

#define INF 1000000

int s, e, r, n, m;

int dijk(int d[][101]) {
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
      if(c[j] > d[j][mi] + c[mi]) {
	c[j] = d[j][mi] + c[mi];
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
  int i, j,k, a,b, cost, time;
  while(cin >> n >> m, n != 0 || m != 0) {
    int d[101][101] = {};
    int T[101][101] = {};

    
    for(i = 0; i <= m; i++) {
      for(j = 0;j <= m; j++) {
	d[i][j] = T[i][j] = INF;
      }
    }
    
    for(i = 0; i < n; i++) {
      cin >> a >> b >> cost >> time;
      d[a][b] = d[b][a] = cost;
      T[a][b] = T[b][a] = time;
    }
    
    cin >> k;
    for(i = 0; i < k; i++) {
      cin >> s >> e >> r;
      if(r == 0) cout << dijk(d) << endl;
      else cout << dijk(T) << endl;
    }
  }
  return 0;
}