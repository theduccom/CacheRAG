#include <stdio.h> 
int main(void) {
  int l;
  for(l = 1; ; ++l ) {
  int i, j, k, n, w;
  scanf("%d", &w);
  if(!w) break;
  scanf("%d", &n);
  int dp[w + 1], v[n], we[n];
  for(i = 0; i <= w; ++i) dp[i] = 0;
  for(i = 0; i < n; ++i) scanf("%d,%d", &v[i], &we[i]);
  for(i = 0; i < n; ++i) for(j = w; j >= 0; --j) if(j + we[i] <= w && dp[j + we[i]] < dp[j] + v[i]) dp[j + we[i]] = dp[j] + v[i];
  int ans = 0, ansn;
  for(i = 0; i <= w; ++i) if(ans < dp[i]) ans = dp[i], ansn = i;
  printf("Case %d:\n%d\n%d\n", l, ans, ansn);
  }
  return 0; 
} 
