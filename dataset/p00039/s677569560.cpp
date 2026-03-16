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
  string s;
  while (cin >> s) {
    int c = 1;
    VI a;
    REP(i, s.size() - 1) {
      if (s[i + 1] == s[i])
        ++c;
      else {
        if (s[i] == 'I')
          a.push_back(1 * c);
        else if (s[i] == 'V')
          a.push_back(5 * c);
        else if (s[i] == 'X')
          a.push_back(10 * c);
        else if (s[i] == 'L')
          a.push_back(50 * c);
        else if (s[i] == 'C')
          a.push_back(100 * c);
        else if (s[i] == 'D')
          a.push_back(500 * c);
        else if (s[i] == 'M')
          a.push_back(1000 * c);
        c = 1;
      }
    }
    if (s[s.size() - 1] == 'I')
      a.push_back(1 * c);
    else if (s[s.size() - 1] == 'V')
      a.push_back(5 * c);
    else if (s[s.size() - 1] == 'X')
      a.push_back(10 * c);
    else if (s[s.size() - 1] == 'L')
      a.push_back(50 * c);
    else if (s[s.size() - 1] == 'C')
      a.push_back(100 * c);
    else if (s[s.size() - 1] == 'D')
      a.push_back(500 * c);
    else if (s[s.size() - 1] == 'M')
      a.push_back(1000 * c);

    // for(int i: a) cout << i << " "; cout << endl;
    REP(i, a.size() - 1) {
      if (a[i] < a[i + 1]) {
        a[i + 1] -= a[i];
        a[i] = 0;
      }
      // for(int i: a) cout << i << " "; cout << endl;
    }
    int ret = 0;
    for (int i : a) {
      ret += i;
    }
    cout << ret << endl;
  }
  return 0;
}