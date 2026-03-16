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
#define INF (1LL<<30)
#define LLINF (1LL<<60)
#define PI 3.14159265359
#define EPS 1e-12
#define int ll

signed main(void)
{
  double a, b[100], ma = -INF, mi = INF;
  int cnt = 0;
  while(cin >> a) {
    b[cnt] = a;
    cnt++;
    //cout << ma-mi << endl;
  }
  REP(i, cnt) {
    //cout << i << " ";
    ma = max(ma, b[i]);
    mi = min(mi, b[i]);
  }
  cout << fixed << setprecision(5) << ma-mi << endl;
  return 0;
}