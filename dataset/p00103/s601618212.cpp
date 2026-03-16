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

signed main(void)
{
  int n;
  cin >> n;
  int idx = 0, out = 0, f = 0, s = 0, t = 0, score = 0;
  while(true) {
    if(out == 3) {
      cout << score << endl;
      idx++;
      out = 0, f = 0, s = 0, t = 0, score = 0;
      continue;
    }
    if(idx == n) break;
    string str;
    cin >> str;
    if(str == "OUT") out++;
    else if(str == "HIT") {
      if(t) score++;
      if(s) t = 1;
      else t = 0;
      if(f) s = 1;
      else s = 0;
      f = 1;
    } else if(str == "HOMERUN") {
      if(f) score++;
      if(s) score++;
      if(t) score++;
      score++;
      f = s = t = 0;
    }
    // cout << f <<" "<< s <<" "<< t <<" "<< score << endl;
  }

  return 0;
}