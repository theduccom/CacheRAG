#include <iostream>
#include <algorithm>
using namespace std;

const int inf = 1 << 25;

int cost[100][100][2];
int d[100];
bool used[100];
int m;

int dijkstra(int s, int e, int r) {
  fill(d, d+m, inf);
  fill(used, used+m, false);
  d[s] = 0;

  while(true) {
    int v = -1;

    for(int u = 0; u < m; u++) {
      if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
    }

    if(v == -1) break;

    used[v] = true;

    for(int u = 0; u < m; u++) {
      d[u] = min(d[u], d[v] + cost[v][u][r]);
    }
  }
  return d[e];
}

int main() {
  int n;
  while(cin >> n >> m, n+m) {
    for(int i = 0; i < 100; i++) {
      for(int j = 0; j < 100; j++) {
        cost[i][j][0] = cost[j][i][1] = inf;
      }
    }

    for(int i = 0; i < n; i++) {
      int a, b, c, t; cin >> a >> b >> c >> t;
      a--, b--;
      cost[a][b][0] = cost[b][a][0] = c;
      cost[a][b][1] = cost[b][a][1] = t;
    }

    int k; cin >> k;
    while(k--) {
      int p, q, r; cin >> p >> q >> r;
      cout << dijkstra(p-1, q-1, r) << endl;
    }
  }
}

  