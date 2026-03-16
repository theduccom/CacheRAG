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

void solve() {
  int n;
  cin >> n;
  rep(dataIndex, n) {
    cout << "Data " << dataIndex + 1 << ':' << endl;
    vs v(8);
    rep(i, v.size()) cin >> v[i];
    int sx, sy;
    cin >> sx >> sy;
    --sx, --sy;
    v[sy][sx] = '1';
    queue<pii> q;
    q.emplace(sx, sy);
    while (q.size()) {
      int x, y;
      tie(x, y) = q.front();
      q.pop();
      if (x < 0 || y < 0 || x >= 8 || y >= 8 || v[y][x] == '0') continue;
      v[y][x] = '0';
      vi dx = {-3, -2, -1, 1, 2, 3, 0, 0, 0, 0, 0, 0}, dy = {0, 0, 0, 0, 0, 0, -3, -2, -1, 1, 2, 3};
      rep(i, dx.size()) q.emplace(x + dx[i], y + dy[i]);
    }
    for (auto &x : v) cout << x << endl;
  }
}