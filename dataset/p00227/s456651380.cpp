#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

#define MOD 1000000007
#define REP(i, N) for (int i = 0; i < N; ++i)
#define REP1(i, N) for (int i = 1; i <= N; ++i)
#define RREP(i, N) for (int i = N - 1; i >= 0; --i)
#define ALL(a) a.begin(), a.end()

int main() {
  int n, m;
  while (cin >> n >> m) {
    if (n == 0 && m == 0) break;
    vector<int> p(n);
    REP(i, n) cin >> p[i];
    sort(ALL(p));
    reverse(ALL(p));
    int ans = 0;
    REP(i, n) {
      if ((i + 1) % m == 0) continue;
      ans += p[i];
    }
    cout << ans << endl;
  }
  return 0;
}
