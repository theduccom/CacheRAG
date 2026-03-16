#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n, W;
int v[1200], w[1200], dp[1200];

void solve() {
  fill(dp, dp+1200, 0);
  for(int i = 0; i < n; i++) {
    for(int j = W; j >= 0; j--) {
      if(j-w[i] >= 0) dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
    }
  }
  cout << dp[W] << endl;

  for(int i = W; i >= 0; i--) {
    if(dp[W] != dp[i]) {
      cout << i+1 << endl;
      break;
    }
  }
}

int main() {
  int cnt = 1;
  while(cin >> W, W) {
    cin >> n;
    for(int i = 0; i < n; i++) {
      scanf("%d,%d", &v[i], &w[i]);
    }
    
    printf("Case %d:\n", cnt++);
    solve();
  }
}