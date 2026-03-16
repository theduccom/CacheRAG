#include <algorithm>
#include <cstdio>

using namespace std;

int W, N, v[1000], w[1000], dp[1001][1001];

int main() {
  for (int I = 1;; I++) {
    scanf("%d\n", &W);
    if (!W) return 0;
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++)
      scanf("%d,%d\n", &v[i], &w[i]);
    for (int j = 0; j <= W; j++)
      dp[N][j] = 0;
    for (int i = N-1; i >= 0; i--)
      for (int j = 0; j <= W; j++)
        if (j >= w[i])
          dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]]+v[i]);
        else
          dp[i][j] = dp[i+1][j];
    int maxv = 0, maxw = 0;
    for (int j = 0; j <= W; j++)
      if (dp[0][j] > maxv) {
        maxv = dp[0][j];
        maxw = j;
      }
    printf("Case %d:\n%d\n%d\n", I, maxv, maxw);
  }
}