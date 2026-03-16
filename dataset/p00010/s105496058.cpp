/* Karen {{{
  ___  ____
 |_  ||_  _|
   | |_/ /    ,--.   _ .--.  .---.  _ .--.
   |  __'.   `'_\ : [ `/'`\]/ /__\\[ `.-. |
  _| |  \ \_ // | |, | |    | \__., | | | |
 |____||____|\'-;__/[___]    '.__.'[___||__]
}}} */
/* include {{{ */
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <iostream>
#include <algorithm>

using namespace std;

/*  }}} */
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

D cross(P a, P b) {
  return (conj(a)*b).Y;
}

P crosspointLL(P a1, P a2, P b1, P b2) {
  D d1 = cross(b2-b1, b1-a1);
  D d2 = cross(b2-b1, a2-a1);
  if (EQ(d1, 0) && EQ(d2, 0)) return a1;  // same line
  if (EQ(d2, 0)) throw "kouten ga nai";   // ???????????????
  return a1 + d1/d2 * (a2-a1);
}

P circumcenter(P a, P b, P c) {
  a = (a-c)*0.5;
  b = (b-c)*0.5;
  return c + crosspointLL(a, a*P(1,1), b, b*P(1,1));
}

int main()
{
  //cin.tie(0);
  //ios::sync_with_stdio(false);

  int x = in();
  
  for (int i = 0; i < x; i++){
    D a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    P p = circumcenter( P(a1, a2), P(b1, b2), P(c1, c2));
    D r = sqrt(pow(a1 - p.X, 2) + pow(a2 - p.Y, 2));
    printf("%.3f %.3f %.3f", p.X, p.Y, r);

    cout << endl;
  }
  return (0);
}