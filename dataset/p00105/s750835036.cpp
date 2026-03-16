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
typedef std::pair<int, int> pii;
typedef std::vector<int> vi;
typedef std::vector<double> vd;
typedef std::vector<std::string> vs;
typedef std::vector<pii> vpii;
typedef std::vector<vi> vvi;
typedef std::vector<vpii> vvpii;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
const double PI = acos(-1);
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
template<typename T> std::istream &operator>>(std::istream &is, std::vector<T> &v) { rep(i,v.size()) is >> v[i]; return is; }
template<typename A, typename B> std::istream &operator>>(std::istream &is, std::pair<A, B> &p) { is >> p.first; is >> p.second; return is; }
using namespace std;
// clang-format on

template<typename InputIterator> std::string join(InputIterator first, InputIterator last, const std::string &sep) {
  if (first == last) return "";
  std::stringstream ss;
  ss << *(first++);
  for_each(first, last, [&](typename InputIterator::value_type &x) { ss << sep << x; });
  return ss.str();
}

main {
  string s;
  int p;
  map<string, vi> m;
  while (cin >> s >> p) m[s].push_back(p);
  for_each(m.begin(), m.end(), [](pair<string, vi> p) {
    cout << p.first << endl;
    sort(all(p.second));
    cout << join(all(p.second), " ") << endl;
  });
}