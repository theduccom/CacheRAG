#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int n;
  int w;
  int k=1;
  while(cin >> w >> n, w) {
    int p[n], a[w];
    REP(i, n) {
      scanf("%d,%d", &p[i], &a[i]);
    }
    int dp[n+1][w+1];           // dp[i][j]:iツ氾板姪堋づ慊づづ個陛ウツづ、ツ重ツつウツづ個堕債和ツつェjツ暗按可コツづ個づつォツづ個催妥・
    memset(dp, 0, sizeof(dp));
    REP(i, n) {
      REP(j, w+1) {
        if (j<a[i])
          dp[i+1][j] = dp[i][j];
        else
          dp[i+1][j] = max(dp[i][j],dp[i][j-a[i]] + p[i]);
      }
    }
    printf("Case %d:\n", k++);
    cout << dp[n][w] << endl;
    cout << lower_bound(dp[n], dp[n]+w+1, dp[n][w])-dp[n] << endl;
  }
}