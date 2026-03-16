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
constexpr bool odd(const int n) { return n & 1; }
constexpr bool even(const int n) { return ~n & 1; }
template<typename T> std::istream &operator>>(std::istream &is, std::vector<T> &v) { for (T &x : v) is >> x; return is; }
template<typename A, typename B> std::istream &operator>>(std::istream &is, std::pair<A, B> &p) { is >> p.first; is >> p.second; return is; }
using namespace std;
// clang-format on

using State = string::const_iterator;

int expr(State &);
int term(State &);
int factor(State &);
int number(State &);

int expr(State &begin) {
  int val = term(begin);
  forever {
    if (*begin == '+') {
      begin++;
      val += term(begin);
    } else if (*begin == '-') {
      begin++;
      val -= term(begin);
    } else {
      break;
    }
  }
  return val;
}

int term(State &begin) {
  int val = factor(begin);
  forever {
    if (*begin == '*') {
      begin++;
      val *= factor(begin);
    } else if (*begin == '/') {
      begin++;
      val /= factor(begin);
    } else {
      break;
    }
  }
  return val;
}

int factor(State &begin) {
  if (*begin == '(') {
    begin++;
    int val = expr(begin);
    begin++;
    return val;
  }
  return number(begin);
}

int number(State &begin) {
  int val = 0;
  while (isdigit(*begin)) {
    val *= 10;
    val += *begin - '0';
    begin++;
  }
  return val;
}

main {
  int n;
  cin >> n;
  cin.ignore();
  while (n--) {
    string s;
    getline(cin, s);
    s.pop_back();
    State begin = s.begin();
    cout << expr(begin) << endl;
  }
}