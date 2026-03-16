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

double roundp(double x, int p) {
  double t = pow(10, p);
  return double((int) (x * t + 0.5)) / t;
}

template<typename T>
constexpr T det2(const T &a1, const T &a2, const T &b1, const T &b2) {
  return a1 * b2 - b1 * a2;
}

void solve() {
  int n;
  cin >> n;
  rep(i, n) {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double d1 = x1 * x1 + y1 * y1, d2 = x2 * x2 + y2 * y2, d3 = x3 * x3 + y3 * y3;
    double npx = det2(d1, d2, y1, y2) + det2(d2, d3, y2, y3) + det2(d3, d1, y3, y1);
    double npy = det2(d2, d1, x2, x1) + det2(d3, d2, x3, x2) + det2(d1, d3, x1, x3);
    double dp  = 2 * (det2(x1, x2, y1, y2) + det2(x2, x3, y2, y3) + det2(x3, x1, y3, y1));
    double px = npx / dp, py = npy / dp;
    double r = hypot(px - x1, py - y1);
    printf("%.3f %.3f %.3f\n", px, py, r);
  }
}