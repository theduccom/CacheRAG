#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX_N = 1020;
const int MAX_W = 1020;

typedef struct {
  int v;
  int w;
} DP;

// ??\???
int W, N;
int v[MAX_N], w[MAX_N];

// ?????¢???????????????
DP dp[MAX_N][MAX_W]; 

// i????????\?????§j????????????????????§??°??????????????????????????????????¨?????????§?????¨???????????????????????????
DP rec(int i, int j) {
  if (dp[i][j].v != -1)
    return dp[i][j];

  int res;
  int weight;
  if (i == N) {
    res = 0;
    weight = 0;
  } else if (w[i] > j) {
    DP result = rec(i+1, j);
    res = result.v;
    weight = result.w;
  } else {
    DP result1 = rec(i+1, j);
    DP result2 = rec(i+1, j-w[i]);
    result2.v += v[i];
    result2.w += w[i];

    if (result1.v > result2.v) {
      res = result1.v;
      weight = result1.w;
    } else if (result1.v < result2.v) {
      res = result2.v;
      weight = result2.w;
    } else {
      res = result1.v;
      weight = min(result1.w, result2.w);
    }
   
  }

  dp[i][j].v = res;
  dp[i][j].w = weight;
  return dp[i][j];
}

DP solve() {
  for (int i=0; i<MAX_N; i++) {
    for (int j=0; j<MAX_W; j++) {
      dp[i][j].v = -1;
    }
  }

  return rec(0, W);
}

int main() {
  int counter = 0;
  
  while(scanf("%d", &W), W) {
    counter++;
    
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
      scanf("%d, %d", &v[i], &w[i]);
    }

    DP result = solve();
    printf("Case %d:\n", counter);
    printf("%d\n%d\n", result.v, result.w);
  }
}