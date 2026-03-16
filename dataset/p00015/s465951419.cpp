/* Karen {{{
  ___  ____
 |_  ||_  _|
   | |_/ /    ,--.   _ .--.  .---.  _ .--.
   |  __'.   `'_\ : [ `/'`\]/ /__\\[ `.-. |
  _| |  \ \_ // | |, | |    | \__., | | | |
 |____||____|\'-;__/[___]    '.__.'[___||__]
}}} */
// include {{{
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <complex>
#include <iostream>
#include <algorithm>

using namespace std;

// }}}
/* cpp template {{{*/


#define endl '\n'

#define REP(i, n) for (int i = 0; i < (n); i++)
#define REPS(i, a, n) for (int i = (a); i < (n); i++)
#define RREP(i, n) for (int i = 1; i <= (n); i++)
#define X real()
#define Y imag()
#define EQ(n,m) (abs((n)-(m)) < EPS)

typedef double D;      // ??§?¨?????????????double???long double?????????
typedef long long ll;
typedef long double lb;
typedef complex<D> P;  // Point
typedef pair<P, P> L;  // Line
typedef vector<P> VP;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, int> psi;

inline bool inside(int y, int x, int H, int W){return (y >= 0 && x >= 0 && y < H && x < W);}
inline int in() {int x; std::cin >> x; return x;}

template <typename T>
void print(std::vector<T>& v, char c = ' ') {
  REP(i, v.size()) {
    if (i != 0) std::cout << c;
    std::cout << v[i];
  }
  std::cout << endl;
}
template <typename T>
void print(T x) {
  std::cout << x << '\n';
}

/* ?????° */
const ll MOD = 1e9 + 7;
const ll INF = 1e9 + 9;
const D EPS  = 1e-9;
const int dx[] = {0, 1, 0, -1, 1, -1, 1, -1};
const int dy[] = {1, 0, -1, 0, 1, -1, -1, 1};


/* }}} */

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n = in();
  while (n--){
    string a, b, y;
    int cnt;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while (a.size() < b.size()) a += '0';
    while (b.size() < a.size()) b += '0';

    cnt = 0;
    REP(i, a.size()){
      cnt = a[i] - '0' + b[i] - '0' + cnt;
      y += (cnt % 10 + '0');
      cnt /= 10;
    }
    if (cnt) y += '1';
    reverse(y.begin(), y.end());
    if (y.size() > 80) y = "overflow";
    cout << y << endl;
  }


  return (0);
}