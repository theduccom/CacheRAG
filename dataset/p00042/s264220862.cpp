#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  for(int tci = 0; ; tci++) {
    int W; scanf("%d", &W); if(!W) break;
    int N; scanf("%d", &N);
    static int v[10000],w[10000];
    for(int i = 0; i < N; i++) {
      scanf("%d,%d", v+i, w+i);
    }
    static int knap[1001][1001];
    for(int i = 0; i <= N; i++) fill(knap[i], knap[i]+W+1, 0);
    for(int i = 0; i < N; i++) {
      for(int j = 0; j < w[i]; j++) {
        knap[i+1][j] = knap[i][j];
      }
      for(int j = w[i]; j <= W; j++) {
        knap[i+1][j] = max(knap[i][j],knap[i][j-w[i]]+v[i]);
      }
    }
    pair<int,int> mval(0,0);
    for(int j = 0; j <= W; j++) {
      mval = max(mval, make_pair(knap[N][j],-j));
    }
    printf("Case %d:\n%d\n%d\n", tci+1, mval.first, -mval.second);
  }
  return 0;
}