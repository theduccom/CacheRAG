#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

const int MAX_W = 1024;
int dp[MAX_W];

int main()
{
  for (int tno = 1;; ++tno) {
      int W, N; scanf("%d%d", &W, &N);
      if (W == 0) break;

      memset(dp, 0, sizeof(dp));
      while (N--) {
          int w, v; scanf("%d, %d", &v, &w);
          for (int i = W; i - w >= 0; i--) {
              dp[i] = max(dp[i], dp[i - w] + v);
          }
      }
      int ans = 0;
      for (int i = 0; i <= W; i++) {
          if (dp[ans] < dp[i])
              ans = i;
      }
      printf("Case %d:\n", tno);
      printf("%d\n%d\n", dp[ans], ans);

  }
}