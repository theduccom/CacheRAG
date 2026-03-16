#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

#define MAX_N 1000
#define MAX_W 1000

int main(void) {
  int W, N, cnt = 1;
  while (cin >> W, W) {
    cin >> N; cin.ignore();

    int dp[1001][1001] = {0};
    for (int i = 0; i < N; i++) {
      int v, w;
      scanf("%d,%d", &v, &w);
      for (int j = 0; j <= W; j++) {
        dp[i+1][j] = max(dp[i][j], (j - w >= 0 ? dp[i][j-w] + v : 0));
      }
    }
    cout << "Case " << cnt++ << ":" << endl;
    for (int j = 0; j < W + 1; j++) {
      if (dp[N][j] == dp[N][W]) {
        cout << dp[N][j] << endl << j << endl;
        break;
      }
    }
  }
  return 0;
}