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
using pii = pair<int, int>;
using vi = vector<int>;
using vd = vector<double>;
using vc = vector<char>;
using vb = vector<bool>;
using vs = vector<string>;
using vpii = vector<pii>;
using vvi = vector<vi>;
using vvb = vector<vb>;
using vvpii = vector<vpii>;
template<typename A> using fn = function<A>;
constexpr int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
constexpr int MOD = 1000000007;
constexpr double PI = acos(-1);
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
constexpr bool odd(const int &n) { return n & 1; }
constexpr bool even(const int &n) { return !odd(n); }
template<typename V> constexpr typename V::value_type sum(const V &v) { return accumulate(all(v), 0); }
void solve();
main { solve(); return 0; }
// clang-format on

void solve() {
  int x, y, s;
  char gomi;
  vvi t(10, vi(10));
  while (cin >> x >> gomi >> y >> gomi >> s) {
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
  int c = 0, maxi = 0;
  rep(i, 10) rep(j, 10) {
    c += !t[i][j];
    cmax(maxi, t[i][j]);
  }
  cout << c << endl
       << maxi << endl;
}