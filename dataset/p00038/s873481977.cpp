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
//#define int ll

signed main(void)
{
  int a[5];
  while(~scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4])) {
    bool s = true;
    sort(a, a+5);
    FOR(i, 1, 5) {
      //cout << a[i-1] << " " << a[i] << endl;
      if(a[i] != a[i-1] + 1) s = false;
    }
    if(a[0] == 1 && a[1] == 10 && a[2] == 11 && a[3] == 12 && a[4] == 13)
      s = true;

    int cnt[14] = {0};
    REP(i, 5) cnt[a[i]]++;
    int four = 0, three = 0, pair = 0;
    FOR(i, 1, 14) {
      if(cnt[i] == 4) four = 1;
      else if(cnt[i] == 3) three = 1;
      else if(cnt[i] == 2) pair++;
    }
    if(four) {
      cout << "four card" << endl;
    } else if(three && pair) {
      cout << "full house" << endl;
    } else if(s) {
      cout << "straight" << endl;
    } else if(three) {
      cout << "three card" << endl;
    } else if(pair == 2) {
      cout << "two pair" << endl;
    } else if(pair == 1) {
      cout << "one pair" << endl;
    } else {
      cout << "null" << endl;
    }
  }

  return 0;
}