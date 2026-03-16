#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < int(n); i++)
#define rrep(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define reps(i, n) for (int i = 1; i <= int(n); i++)
#define rreps(i, n) for (int i = int(n); i >= 1; i--)
#define repc(i, n) for (int i = 0; i <= int(n); i++)
#define rrepc(i, n) for (int i = int(n); i >= 0; i--)
#define repi(i, a, b) for (int i = int(a); i < int(b); i++)
#define repic(i, a, b) for (int i = int(a); i <= int(b); i++)
#define repp(i, n) rep(i, n)
#define reppp(i, n) repp(i, n)
#define rrepp(i, n) rrep(i, n)
#define repss(i, n) reps(i, n)
#define repcc(i, n) repc(i, n)
#define repii(i, a, b) repi(i, a, b)
#define each(x, y) for (auto &x : y)
#define all(a) (a).begin(), (a).end()
#define bit(b) (1ll << (b))

using namespace std;

using i32 = int;
using i64 = long long;
using u64 = unsigned long long;
using f80 = long double;
using vi32 = vector<i32>;
using vi64 = vector<i64>;
using vu64 = vector<u64>;
using vf80 = vector<f80>;
using vstr = vector<string>;

inline void yes() { cout << "Yes" << '\n'; exit(0); }
inline void no() { cout << "No" << '\n'; exit(0); }
inline i64 gcd(i64 a, i64 b) { if (min(a, b) == 0) return max(a, b); if (a % b == 0) return b; return gcd(b, a % b); }
inline i64 lcm(i64 a, i64 b) { return a / gcd(a, b) * b; }
inline u64 xorshift() { static u64 x = 88172645463325252ull; x = x ^ (x << 7); return x = x ^ (x >> 9); }
void solve(); int main() { ios::sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(16); solve(); return 0; }
template <typename T> class pqasc : public priority_queue<T, vector<T>, greater<T>> {};
template <typename T> class pqdesc : public priority_queue<T, vector<T>, less<T>> {};
template <typename T> inline void amax(T &x, T y) { if (x < y) x = y; }
template <typename T> inline void amin(T &x, T y) { if (x > y) x = y; }
template <typename T> inline T power(T x, i64 n, T e = 1) { T r = e; while (n > 0) { if (n & 1) r *= x; x *= x; n >>= 1; } return r; }
template <typename T> istream& operator>>(istream &is, vector<T> &v) { each(x, v) is >> x; return is; }
template <typename T> ostream& operator<<(ostream &os, vector<T> &v) { rep(i, v.size()) { if (i) os << ' '; os << v[i]; } return os; }
template <typename T, typename S> istream& operator>>(istream &is, pair<T, S> &p) { is >> p.first >> p.second; return is; }
template <typename T, typename S> ostream& operator<<(ostream &os, pair<T, S> &p) { os << p.first << ' ' << p.second; return os; }

void solve() {
  vi32 v(5);
  char _;
  while (true) {
    rep(i, 4) if (!(cin >> v[i] >> _)) return;
    cin >> v[4];
    {
      map<int, int> ma;
      rep(i, 5) ma[v[i]]++;
      bool f = false;
      each(m, ma) {
        if (m.second == 4) f = true;
      }
      if (f) {
        cout << "four card" << '\n';
        continue;
      }
    }
    {
      map<int, int, greater<int>> ma;
      rep(i, 5) ma[v[i]]++;
      if (ma.size() == 2) {
        bool f1 = false, f2 = false;
        each(m, ma) {
          if (m.second == 3) f1 = true;
          if (m.second == 2) f2 = true;
        }
        if (f1 && f2) {
          cout << "full house" << '\n';
          continue;
        }
      }
    }
    {
      sort(all(v));
      if (v == vi32({1, 10, 11, 12, 13})) {
        cout << "straight" << '\n';
        continue;
      }
      bool f = true;
      rep(i, 4) if (v[i + 1] - v[i] != 1) f = false;
      if (f) {
        cout << "straight" << '\n';
        continue;
      }
    }
    {
      map<int, int, greater<int>> ma;
      rep(i, 5) ma[v[i]]++;
      bool f = false;
      each(m, ma) {
        if (m.second == 3) f = true;
      }
      if (f) {
        cout << "three card" << '\n';
        continue;
      }
    }
    {
      map<int, int, greater<int>> ma;
      rep(i, 5) ma[v[i]]++;
      int c = 0;
      each(m, ma) {
        if (m.second == 2) c++;
      }
      if (c == 2) {
        cout << "two pair" << '\n';
        continue;
      }
    }
    {
      map<int, int, greater<int>> ma;
      rep(i, 5) ma[v[i]]++;
      int c = 0;
      each(m, ma) {
        if (m.second == 2) c++;
      }
      if (c == 1) {
        cout << "one pair" << '\n';
        continue;
      }
    }
    cout << "null" << '\n';
  }
}

