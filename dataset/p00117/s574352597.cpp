#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX_V = 25;
const int INF = 1 << 25;

int cost[MAX_V][MAX_V];
int d[MAX_V];
bool used[MAX_V];
int V;

int dijkstra(int s, int g) {
  fill(d, d + V, INF);
  fill(used, used + V, false);
  d[s] = 0;

  while(true) {
    int v = -1;
    for(int u = 0; u < V; u++) {
      if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
    }

    if(v == -1) break;
    used[v] = true;

    for(int u = 0; u < V; u++) {
      d[u] = min(d[u], d[v] + cost[v][u]);
    }
  }

  return d[g];
}

int main() {
  int m;
  cin >> V >> m;

  for(int i = 0; i < V; i++) {
    for(int j = 0; j < V; j++) {
      cost[i][j] = INF;
    }
  }

  for(int i = 0; i < m; i++) {
    int a, b, c, d;
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    a--, b--;
    cost[a][b] = c;
    cost[b][a] = d;
  }

  int x1, x2, y1, y2;
  scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
  x1--, x2--;
  cout << y1-(dijkstra(x1, x2) + dijkstra(x2, x1) + y2) << endl;
}