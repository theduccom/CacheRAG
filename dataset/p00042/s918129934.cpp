#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)n;(i)++)
#define foreach(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();i++)

int W, N, v[1002], w[1002];
int dp[1002][1002];

int main() {
  int i, j, cases = 1, ans;
  char c;
  while (scanf("%d",&W),W) {
    scanf("%d",&N);
    rep(i,N) scanf("%d%c%d",&v[i],&c,&w[i]);
    memset(dp, -1, sizeof dp);

    for (i=0;i<=W;i++) dp[0][i] = 0;

    for (i=0;i<N;i++) {
      for (j=0;j<=W;j++) {
        if (j >= w[i]) {
          dp[i+1][j] = max(dp[i][j], v[i]+dp[i][j-w[i]]);
        } else {
          dp[i+1][j] = dp[i][j];
        }
      }
    }
    
    ans = W;
    for (i=0;i<=W;i++) if (dp[N][W] == dp[N][i]) {
      ans = i; break;
    }
    
    printf("Case %d:\n%d\n%d\n", cases, dp[N][ans], ans);
    cases++;
  }
  return 0;
}