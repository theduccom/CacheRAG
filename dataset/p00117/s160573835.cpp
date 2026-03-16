#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <functional>
#define MAX_N 21
#define INF 10000000
using namespace std;

typedef pair<int, int> P;

typedef struct {
  int to, cost;
} edge;

vector<edge> G[MAX_N];
int d[2][MAX_N];

void dijkstra(int s, int index) {
  priority_queue<P, vector<P>, greater<P> > que;
  for (int j = 0; j < MAX_N; j++) {
    d[index][j] = INF;
  }
  d[index][s] = 0;
  que.push(P(0, s));

  while (que.empty() == false) {
    P p = que.top();
    que.pop();
    int v = p.second;
    if (d[index][v] < p.first) continue;
    for (int i = 0; i < G[v].size(); i++) {
      edge e = G[v][i];
      if (d[index][e.to] > d[index][v] + e.cost) {
	d[index][e.to] = d[index][v] + e.cost;
	que.push(P(d[index][e.to], e.to));
      }
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int a, b, c, d;
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    edge e;
    e.to = b;
    e.cost = c;
    G[a].push_back(e);
    e.to = a;
    e.cost = d;
    G[b].push_back(e);
  }

  int s, g, money, p;
  scanf("%d,%d,%d,%d", &s, &g, &money, &p);

  dijkstra(s, 0);
  dijkstra(g, 1);
  cout << money - p - d[0][g] - d[1][s] << endl;

  return 0;
}