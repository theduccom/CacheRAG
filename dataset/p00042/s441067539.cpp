#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAX_W (1000)
#define MAX_N (1000)

int W, N;
int v[MAX_N], w[MAX_N];
int dp[MAX_N + 1][MAX_W + 1];

int rec_dp(int i, int wei)
{
  if (dp[i][wei] != -1){
    return (dp[i][wei]);
  }

  int res;
  if (i == N){
    res = 0;
  }
  else if (wei < w[i]){
    res = rec_dp(i + 1, wei);
  }
  else {
    res = max(rec_dp(i + 1, wei), rec_dp(i + 1, wei - w[i]) + v[i]);
  }

  return (dp[i][wei] = res);
}
int main()
{
  int cnt = 0;

  while (scanf("%d", &W), W){
    memset(dp, -1, sizeof(dp));
    scanf("%d", &N);
    for (int i = 0; i < N; i++) scanf("%d,%d", &v[i], &w[i]);
    for (int i = 0;;i++){
      if (rec_dp(0, i) == rec_dp(0, W)){
        printf("Case %d:\n", ++cnt);
        printf("%d\n%d\n", rec_dp(0, i), i);
        break;
      }
    }
  }

  return (0);
}