#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 1000000000;
using namespace std;
int main() {
  int n, m;
  char q;
  cin >> n >> m;
  int dp[n][n];
  rep(i, n) rep(j, n) dp[i][j] = i == j ? 0 : INF;
  rep(i, m) {
    int a, b, c, d;
    cin >> a >> q >> b >> q >> c >> q >> d;
    a--;
    b--;
    dp[a][b] = c;
    dp[b][a] = d;
  }
  rep(k, n) rep(i, n) rep(j, n) dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
  int s, g, V, P;
  cin >> s >> q >> g >> q >> V >> q >> P;
  s--;
  g--;
  cout << V - P - dp[s][g] - dp[g][s] << endl;
  return 0;
}