// clang-format off
#include <bits/stdc++.h>
#define int long long
#define main signed main()
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define forever for (;;)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define prec(n) fixed << setprecision(n)
template<typename A> using V = std::vector<A>;
template<typename A> using F = std::function<A>;
template<typename A, typename B> using P = std::pair<A, B>;
using pii = P<int, int>;
using vi = V<int>;
using vd = V<double>;
using vs = V<std::string>;
using vpii = V<pii>;
using vvi = V<vi>;
using vvpii = V<vpii>;
constexpr int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
constexpr int MOD = 1000000007;
constexpr double PI = 3.14159265358979;
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
constexpr bool odd(const int &n) { return n & 1; }
constexpr bool even(const int &n) { return ~n & 1; }
template<typename T> std::istream &operator>>(std::istream &is, std::vector<T> &v) { for (T &x : v) is >> x; return is; }
template<typename A, typename B> std::istream &operator>>(std::istream &is, std::pair<A, B> &p) { is >> p.first; is >> p.second; return is; }
using namespace std;
// clang-format on

std::vector<std::string> split(const std::string &s, const std::string &delim) {
  using string = std::string;
  std::vector<string> v;
  string::size_type pos = 0;
  while (pos != string::npos) {
    string::size_type p = s.find(delim, pos);
    if (p == string::npos) {
      v.push_back(s.substr(pos));
      break;
    }
    v.push_back(s.substr(pos, p - pos));
    pos = p + delim.size();
  }
  return v;
}

template<typename InputIterator> std::string join(InputIterator first, InputIterator last, const std::string &sep) {
  if (first == last) return "";
  std::stringstream ss;
  ss << *(first++);
  for_each(first, last, [&](auto &x) { ss << sep << x; });
  return ss.str();
}

main {
  vi dx = {1, -1, 4, -4};
  map<string, int> m;
  queue<string> q;
  q.emplace("01234567");
  while (q.size()) {
    string s = q.front();
    q.pop();
    int pos = distance(s.begin(), find(all(s), '0'));
    rep(i, 4) {
      if (pos + dx[i] < 0 || pos + dx[i] >= 8 || (i / 2 == 0 && pos / 4 != (pos + dx[i]) / 4)) continue;
      string t = s;
      swap(t[pos], t[pos + dx[i]]);
      if (m.count(t)) continue;
      q.push(t);
      m[t] = m[s] + 1;
    }
  }
  string s;
  while (getline(cin, s)) {
    auto x = split(s, " ");
    cout << m[join(all(x), "")] << endl;
  }
}