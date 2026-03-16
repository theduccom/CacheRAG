// clang-format off
#include <bits/stdc++.h>
#define int long long
#define main signed main()
// #define main int main()
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define prec(n) fixed << setprecision(n)
#define stlice(from, to) substr(from, (to) - (from) + 1)
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vpii> vvpii;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
const double PI = acos(-1);
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
bool odd(const int &n) { return n & 1; }
bool even(const int &n) { return !odd(n); }
template<typename V> typename V::value_type sum(const V &v) { return accumulate(all(v), 0); }
void solve();
main { solve(); return 0; }
// clang-format on

void solve() {
  vvi t(10, vi(10));
  int x, y, s;
  char gomiiiiiii;
  while (cin >> x >> gomiiiiiii >> y >> gomiiiiiii >> s) {
    t[x][y]++;
    switch (s) {
      case 3:
        if (x > 1) t[x - 2][y]++;
        if (x < 8) t[x + 2][y]++;
        if (y > 1) t[x][y - 2]++;
        if (y < 8) t[x][y + 2]++;
      case 2:
        if (x > 0 && y > 0) t[x - 1][y - 1]++;
        if (x > 0 && y < 9) t[x - 1][y + 1]++;
        if (x < 9 && y > 0) t[x + 1][y - 1]++;
        if (x < 9 && y < 9) t[x + 1][y + 1]++;
      case 1:
        if (x > 0) t[x - 1][y]++;
        if (x < 9) t[x + 1][y]++;
        if (y > 0) t[x][y - 1]++;
        if (y < 9) t[x][y + 1]++;
    }
  }
  int hai = 0, yarudake = 0;
  rep(i, 10) rep(j, 10) {
    hai += !t[i][j];
    cmax(yarudake, t[i][j]);
  }
  cout << hai << '\n'
       << yarudake << endl;
}