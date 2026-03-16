#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)(n);++i)

const int inf = 100100100;
int edge[30][30];

int main() {
  int N, M; scanf("%d%d", &N, &M);
  REP(i, N) REP(j, N) edge[i][j] = inf;
  REP(i, N) edge[i][i] = 0;
  
  REP(m, M) {
      int a, b, c, d;
      scanf("%d,%d,%d,%d", &a, &b, &c, &d);
      a--, b--;
      edge[a][b] = c;
      edge[b][a] = d;
  }
  REP(k, N) REP(i, N) REP(j, N)
      edge[i][j] = min(edge[i][j], edge[i][k] + edge[k][j]);

  int start, end, have, price;
  scanf("%d,%d,%d,%d", &start, &end, &have, &price);
  start--, end--;
  int ans = have - (edge[start][end] + edge[end][start] + price);
  cout << ans << endl;
  
  return 0;
}