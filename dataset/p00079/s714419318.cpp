/* {{{ Shinobu kawaii */
/*
  ______   __        _                  __                 
.' ____ \ [  |      (_)                [  |                
| (___ \_| | |--.   __   _ .--.   .--.  | |.--.   __   _   
 _.____`.  | .-. | [  | [ `.-. |/ .'`\ \| '/'`\ \[  | | |  
| \____) | | | | |  | |  | | | || \__. ||  \__/ | | \_/ |, 
 \______.'[___]|__][___][___||__]'.__.'[__;.__.'  '.__.'_/ 

*/
/* }}} */

#include <bits/stdc++.h>
using namespace std;

// #define int long long

/* cpp template {{{ */

/* short */
#define pb push_back
#define mp make_pair
#define Fi first
#define Se second
#define ALL(v) (v).begin(), (v).end()

/* REPmacro */
#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

/* typedef */
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;
typedef double D;
typedef pair<D, D> P;

/* const */
const int INF = 999999999;
const double EPS = 1e-9;
const int dx[] = {0, 1, 0, -1, 1, -1, 1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

/* func */
inline bool inside(int y, int x, int H, int W) {return y >= 0 && x >= 0 && y < H && x < W;}
inline int in() {int x; std::cin >> x; return x;}
template <typename T>
void print(std::vector<T>& v, char c = ' ') {
  REP(i, v.size()) {
    if (i != 0) std::cout << c;
    std::cout << v[i];
  }
  std::cout << '\n';
}
template <typename T>
void print(T x) {
  std::cout << x << '\n';
}

/* }}} */
#define X Fi
#define Y Se
#define sq(x) (x) * (x)

P input() {
  D x, y;
  char c;
  cin >> x >> c >> y;
  return mp(x, y);
}

D area(D a, D b, D c) {
  D z = (a + b + c) / 2;
  return sqrt(z * (z - a) * (z - b) * (z - c));
}

D len(P a, P b) {
  return sqrt(sq(a.X - b.X) + sq(a.Y - b.Y));
}

signed main()
{
  //cin.tie(0);
  //ios::sync_with_stdio(false);
  vector<P> v;
  
  while (v.pb(input()), !cin.eof());
  D s = 0.0;
  REP(i, v.size()) {
    if (i < 2) continue;
    D a = len(v[0], v[i]),
      b = len(v[0], v[i - 1]),
      c = len(v[i], v[i - 1]);
    s += area(a, b, c);
  }
  cout << setprecision(10);
  print(s);

  return 0;
}