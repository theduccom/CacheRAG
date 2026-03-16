#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <cctype>
#include <numeric>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
enum { kInf = 1<<28 };
int N, W, v[1002], w[1002]; // v[i],w[i] := iツ氾板姪堋づ個品ツ閉ィツづ個可ソツ値ツ、ツ重ツつウ
int dp[1002][1002]; // dp[i][j] := iツ氾板姪堋づ個品ツ閉ィツづ慊づ考ツ猟カツつオツつスツ篠楪づ個、ツ重ツつウjツづ可つィツつッツづゥツ催妥・ツづ個可ソツ値
void solve() {
  // for (int i = 0; i <= N; ++i) fill(dp[i], dp[i] + W + 1, -kInf);
  // dp[0][0] = 0
  memset(dp, 0, sizeof dp);
  for (int i = 0; i < N; ++i) {
    // for (int j = 0; j <= W; ++j) {
    //   if (j + w[i] <= W)
    //     dp[i+1][j+w[i]] = max(dp[i][j+w[i]], dp[i][j]+v[i]);
    //   else
    //     dp[i+1][j+w[i]] = dp[i][j+w[i]];
    // }
    for (int j = 0; j <= W; ++j) {
      if (j < w[i]) {
        dp[i+1][j] = dp[i][j];
      } else {
        dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]] + v[i]);
      }
    }
  }
  // int *itr = max_element(dp[N], dp[N]+W+1);
  // printf("%d\n%d\n", *itr, itr - dp[N]);
  int ans = -1, itr = -1;
  for (int i = 0; i <= W; ++i) if (ans < dp[N][i]) ans = dp[N][i], itr = i;
  printf("%d\n%d\n", ans, itr);
}

int main() {
  int z = 1;
  while (scanf("%d",&W),W) {
    scanf("%d",&N);
    rep(i,N) scanf("%d,%d",v+i,w+i);
    printf("Case %d:\n", z);
    solve();
    ++z;
  }
  return 0; 
}