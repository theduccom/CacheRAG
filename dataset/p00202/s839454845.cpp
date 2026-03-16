#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <cassert>
#include <bitset>
using namespace std;

typedef pair<int, int> P;
#define rep(i, n) for (int i=0; i<(n); i++)
#define all(c) (c).begin(), (c).end()
#define uniq(c) c.erase(unique(all(c)), (c).end())
#define _1 first
#define _2 second
#define pb push_back
#define INF 1145141919
#define MOD 1000000007

int N, X;
int A[30];
bool dp[1000001];

bool is_prime(int x) {
  int d = sqrt(x);
  for (int i=2; i<=d; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

signed main() {
  ios::sync_with_stdio(false); cin.tie(0);
  while (cin >> N >> X) {
    if (N == 0 && X == 0) break;
    rep(i, N) cin >> A[i];
    rep(i, X+1) dp[i] = 0;

    dp[0] = 1;
    for (int i=0; i<N; i++) {
      int a = A[i];
      for (int j=0; j<=X-a; j++) dp[j+a] |= dp[j];
    }
    int m = 0;
    for (int i=X; i>=2; i--) {
      if (dp[i] && is_prime(i)) {
        m = i;
        break;
      }
    }
    if (m == 0) cout << "NA\n";
    else cout << m << "\n";
  }
  return 0;
}