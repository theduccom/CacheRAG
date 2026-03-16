#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_w = 1000;
const int MAX_N = 1000;

int w, N;
int dp[MAX_N+1][MAX_w];
int V[MAX_N];
int W[MAX_N];

void solve() {
  for (int i = N-1; i >= 0; i--) {
    for (int j = 0; j <= w; j += 1) {
      if (j < W[i]) {
        dp[i][j] = dp[i+1][j];
      } else {
        dp[i][j] = max(dp[i+1][j], dp[i+1][j-W[i]] + V[i]);
      }
    }
  }
}

int main (int argc, char const* argv[]) {
  char com;
  int tv, tw, z = 1, max_value;
  while (true) {
    cin >> w;
    if (w == 0) break;
    cin >> N;
    memset(dp, 0, sizeof dp);
    memset(V, 0, sizeof V);
    memset(W, 0, sizeof W);
    for (int i = 0; i < N; i += 1) {
      cin >> V[i] >> com >> W[i];
    }
    solve();
    cout << "Case " << z << ":" << endl << dp[0][w] << endl;
    max_value = dp[0][w];
    for (int i = w;; i--) {
      if (max_value != dp[0][i]) {
        cout << i+1 <<endl;
        break;
      }
    }
    z++;
  }
  return 0;
}