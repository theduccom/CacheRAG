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
  string s, t = "";
  getline(cin, s);

  REP(i, s.size()-4) {
    string tmp = s.substr(i, 5);
    if(tmp == "peach") {
      s[i] = 'a'; s[i+1] = 'p'; s[i+2] = 'p'; s[i+3] = 'l'; s[i+4] = 'e';
    } else if(tmp == "apple") {
      s[i] = 'p'; s[i+1] = 'e'; s[i+2] = 'a'; s[i+3] = 'c'; s[i+4] = 'h';
    }
    //cout << tmp << endl;
  }
  cout << s << endl;
  return 0;
}