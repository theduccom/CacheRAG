#include <iostream>
#include <algorithm>
using namespace std;

#define N_MAX 30
#define X_MAX 1000000

int n, x;
int P[N_MAX];
int dp[X_MAX+1];
bool isPrime[X_MAX+1];

void make() {
  fill(isPrime, isPrime + X_MAX + 1, true);
  isPrime[0] = isPrime[1] = false;
  for(int i = 2; i <= X_MAX; ++i) {
    if(!isPrime[i]) continue;
    for(int j = i*2; j <= X_MAX; j += i) isPrime[j] = false;
  }
}

void solve() {
  fill(dp, dp + x + 1, -1);
  dp[0] = 0;
  for(int i = 0; i < n; ++i) {
    for(int j = P[i]; j <= x; ++j) {
      if(dp[j-P[i]] == -1) continue;
      dp[j] = max(dp[j], dp[j-P[i]] + P[i]);
    }
  }
  for(int i = x; i >= 0; --i) {
    if(dp[i] != -1 && isPrime[dp[i]]) {
      cout << dp[i] << endl;
      return;
    }
  }
  cout << "NA" << endl;
}

main() {
  make();
  while((cin >> n >> x) && (n || x)) {
    for(int i = 0; i < n; ++i) {
      cin >> P[i];
    }
    solve();
  }
}