#include <cstdio>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int, int> Pair;

int w;
int n;
int vs[1001];
int ws[1001];
int dp[1001][1001];

int main() {
  for (int Case=1; ; Case++) {
    scanf("%d", &w);
    if (w == 0) return 0;

    scanf("%d", &n);
    for (int i=0; i<n; i++) {
      scanf("%d,%d", &vs[i], &ws[i]);
    }

    for (int j=0; j<=w; j++) dp[0][j] = 0;
  
    for (int i=0; i<n; i++) {
      for (int j=0; j<=w; j++) {
        dp[i+1][j] = dp[i][j];
      }
  
      for (int j=0; j<=w-ws[i]; j++) {
        dp[i+1][j+ws[i]] = max(dp[i+1][j+ws[i]], dp[i][j] + vs[i]);
      }
    }
  
    Pair ans(0, 0);
    for (int j=0; j<=w; j++) {
      ans = max(ans, Pair(dp[n][j], -j));
    }
  
    printf("Case %d:\n%d\n%d\n", Case, ans.first, -ans.second);
  }
}