//#define __USE_MINGW_ANSI_STDIO 0
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
#define IN(a, b, x) (a<=x&&x<b)
#define MP make_pair
#define PB push_back
#define INF (1LL<<30)
#define LLINF (1LL<<60)
#define PI 3.14159265359
#define EPS 1e-12
//#define int ll

template <typename T> T &chmin(T &a, const T &b) { return a = min(a, b); }
template <typename T> T &chmax(T &a, const T &b) { return a = max(a, b); }

int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

ll cost[4010];
signed main(void)
{
  while(true) {
    int n;
    cin >> n;
    if(!n) break;
    REP(i, 4010) cost[i] = 0;
    VI v;
    REP(i, n) {
      ll e, p, q;
      cin >> e >> p >> q;
      if(cost[e] < 1000000 && cost[e]+p*q>=1000000) {
        v.PB(e);
        cost[e] = 1000000;
      } else if(cost[e] < 1000000) {
        cost[e] += p*q;
      }
    }
    if(v.size() == 0) cout << "NA" << endl;
    REP(i, v.size()) cout << v[i] << endl;
  }

  return 0;
}