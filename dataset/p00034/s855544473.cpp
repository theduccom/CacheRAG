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

bool input(vi& l, D& v1, D& v2) {
  char c;
  REP(i, 10) cin >> l[i] >> c;
  cin >> v1 >> c >> v2;
  return cin.eof();
}

signed main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vi l(10); D v1, v2;

  while (!input(l, v1, v2)) {
    D b = accumulate(ALL(l), 0.0);
    D y = v1 * b / (v1 + v2);
    D sum = 0;
    REP(i, 10) {
      sum += l[i];
      if (y <= sum) {
        print(i + 1);
        break;
      }
    }
  }

  return 0;
}