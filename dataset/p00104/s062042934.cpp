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

string s[105];
bool used[105][105];
signed main(void)
{
  while(true) {
    int h, w;
    cin >> h >> w;
    if(!h && !w) break;
    REP(i, h) cin >> s[i];

    int x = 0, y = 0;
    memset(used, false, sizeof(used));
    while(true) {
      if(used[y][x]) {
        cout << "LOOP" << endl;
        break;
      }
      used[y][x] = true;
      if(s[y][x] == '>') {
        x++;
      } else if(s[y][x] == '<') {
        x--;
      } else if(s[y][x] == '^') {
        y--;
      } else if(s[y][x] == 'v') {
        y++;
      } else {
        cout << x << " " << y << endl;
        break;
      }
    }
  }

  return 0;
}