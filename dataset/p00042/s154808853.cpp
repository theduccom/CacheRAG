#include <iostream>
#include <vector>
using namespace std;

const int MAX_W = 1000+1;
const int MAX_N = 10000+1;

int dp[MAX_N][MAX_W]; // dp[i][j]: 重さj以下でi~n-1の宝を使った時の最大の価値
int weight[MAX_N];
int value[MAX_N];
int n, w;
int ans_v, ans_w; // 答え

void solve() {
  ans_v = ans_w = -1;
  for (int i = 0; i <= n; i++)
    for (int j = 0; j <= w; j++)
      dp[i][j] = -1;
  
  for (int j = 0; j <= w; j++)
    dp[n][j] = 0;

  for (int i = n-1; i >= 0; i--) {
    for (int j = 0; j <= w; j++) {
      if (j >= weight[i])
        dp[i][j] = max(
            dp[i+1][j],
            dp[i+1][j-weight[i]] + value[i]);
      else
          dp[i][j] = dp[i+1][j];

      if (ans_v < dp[i][j] || ans_v <= dp[i][j] && j < ans_w) {
        // 最小の重さを記録しておく
        ans_v = dp[i][j];
        ans_w = j;
      }
    }
  }
}

int main() {
  int case_num = 0;

  while(cin >> w, w != 0) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      char c; // カンマは読み捨てる
      cin >> value[i] >> c >> weight[i];
    }
    solve();
    case_num++;
    cout << "Case " << case_num << ":" << endl;
    cout << ans_v << endl << ans_w << endl;
  }
  return 0;
}