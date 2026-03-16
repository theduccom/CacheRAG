#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main() {
  int n, m;
  while(cin >> n >> m, n+m) {
    pii dp[110][110];
    rep(i, m+1) rep(j, m+1) dp[i][j].first = dp[i][j].second = 1<<25;
    while(n--) {
      int a, b, cost, time; cin >> a >> b >> cost >> time;
      dp[a][b].first = dp[b][a].first = cost;
      dp[a][b].second = dp[b][a].second = time;
    }

    rep(i, m+1) dp[i][i].first = dp[i][i].second = 0;

    rep(k, m+1) rep(i, m+1) rep(j, m+1) {
      dp[i][j].first = min(dp[i][j].first, dp[i][k].first + dp[k][j].first);
      dp[i][j].second = min(dp[i][j].second, dp[i][k].second + dp[k][j].second);
    }
      
    int k; cin >> k;
    rep(i, k) {
      int p, q, r; cin >> p >> q >> r;
      if(r == 0) cout << dp[p][q].first << endl;
      else cout << dp[p][q].second << endl;
    }
  }
}