#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359
#define EPS 1e-12

int W, N, v[1010], w[1010], dp[1010];

int main(void) {
  int ca = 1;
  while (true) {
    cin >> W;
    if(W == 0) break;
    cin >> N;
    REP(i, N) {
      cin >> v[i];
      getchar();
      cin >> w[i];
    }
    REP(i, W+5) dp[i] = 0; 

    for (int i = 0; i < N; i++) {
      for (int j = W; j >= w[i]; j--) {
        dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
      }
    }

    int a = -INF, b = 0;
    for (int i = 0; i < W+1; i++) {
      //cout << dp[i] << " ";
      if (a < dp[i]) {
        a = dp[i];
        b = i;
      }
    }
    //cout << endl;
    cout << "Case " << ca << ":" << endl << a << endl << b << endl;
    ca++;
  }
  return 0;
}