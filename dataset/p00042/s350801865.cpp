#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int, int> napsacDP(int capacity, int n,
    const vector<pair<int, int>>& contents) {
  vector<vector<int>> dp(n+1, vector<int>(capacity+1));
  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j <= capacity; ++j) {
      dp[i][j] = dp[i-1][j];
      if (j >= contents[i-1].second) {
        dp[i][j] = max(dp[i][j],
            dp[i-1][j-contents[i-1].second]
                + contents[i-1].first);
      }
    }
  }
  int maxval = 0;
  int maxweight = 0;
  for (int i = 0; i <= capacity; ++i) {
    if (maxval < dp[n][i]) {
      maxval = dp[n][i];
      maxweight = i;
    }
  }
  return make_pair(maxval, maxweight);
}

int main() {
  int count = 1;
  while(1) {
    int w,n;
    cin >> w;
    if (w == 0) break;
    cin >> n;
    vector<pair<int, int>> contents;
    for (int i = 0; i < n; ++i) {
      int value, weight;
      scanf("%d,%d", &value, &weight);
      contents.emplace_back(value, weight);
    }
    auto result = napsacDP(w, n, contents);
    cout << "Case " << count << ":" << endl;
    cout << result.first << endl;
    cout << result.second << endl;
    ++count;
  }
  return 0;
}