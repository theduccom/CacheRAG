#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MP make_pair
#define PB push_back
#define MOD 1000000007
#define INF (1LL << 30)
#define LLINF (1LL << 60)
#define PI 3.14159265359
#define EPS 1e-12
#define int ll

signed main(void) {
  bool prime[60000];
  memset(prime, true, sizeof(prime));
  prime[0] = prime[1] = false;
  for (int i = 2; i * i <= 50100; i++) {
    if (prime[i]) {
      for (int j = 2 * i; j <= 50100; j += i) {
        prime[j] = false;
      }
    }
  }

  int n;
  while (cin >> n) {
    for (int i = n - 1; i >= 2; --i)
      if (prime[i]) {
        cout << i << " ";
        break;
      }
    FOR(i, n + 1, 51000) if (prime[i]) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}