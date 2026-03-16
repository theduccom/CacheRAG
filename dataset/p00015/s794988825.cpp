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
void solve();
main { solve(); return 0; }
// clang-format on

string f(string a, string b, int c) {
  if (!a.size()) return c ? string(1, c + '0') : "";
  int ia = a.back() - '0', ib = b.back() - '0';
  int s = ia + ib + c;
  c     = s / 10;
  a.pop_back(),
    b.pop_back();
  return f(a, b, c) + char(s % 10 + '0');
}

void solve() {
  int n;
  cin >> n;
  rep(_, n) {
    string a, b;
    cin >> a >> b;
    while (a.size() < b.size()) a = "0" + a;
    while (a.size() > b.size()) b = "0" + b;
    string x                      = f(a, b, 0);
    cout << (x.size() > 80 ? "overflow" : x) << endl;
  }
}