#include <iostream>
#include <cstdio>
using namespace std;

#define rep(i,n) for(int (i)=0;(i)<(n);++(i))

int n, e, dp[22][22], s, g;
const int inf = 1<<29;

int solve() {
  for (int k = 0; k < n; ++k) {
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
      }
    }
  }
  return dp[s][g] + dp[g][s];
}

int main() {
  rep (i,22) fill(dp[i], dp[i] + 22, inf);
  rep (i,22) dp[i][i] = 0;

  cin >> n >> e;
  int a, b, c, d;
  char x;
  rep (i,e) {
    cin >> a >> x >> b >> x >> c >> x >> d;
    a--; b--;
    dp[a][b] = c;
    dp[b][a] = d;
  }
  int y1, y2;
  cin >> s >> x >> g >> x >> y1 >> x >> y2;
  s--; g--;
  cout << y1 - y2 - solve() << endl;
  
  return 0;
}