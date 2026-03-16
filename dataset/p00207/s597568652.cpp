#include <bits/stdc++.h>
/* Karen {{{
  ___  ____
 |_  ||_  _|
   | |_/ /    ,--.   _ .--.  .---.  _ .--.
   |  __'.   `'_\ : [ `/'`\]/ /__\\[ `.-. |
  _| |  \ \_ // | |, | |    | \__., | | | |
 |____||____|\'-;__/[___]    '.__.'[___||__]
}}} */
/* cpp template {{{*/
using namespace std;

#define endl '\n'

#define REP(i, n) for (int i = 0; i < (n); i++)
#define REPS(i, a, n) for (int i = (a); i < (n); i++)
#define RREP(i, n) for (int i = 1; i <= (n); i++)
#define EQ(n,m) (abs((n)-(m)) < EPS)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ALL(v) v.begin(), v.end()

typedef double D;
typedef long long ll;
typedef long double lb;
typedef complex<D> P;
typedef vector<P> VP;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, int> psi;

inline bool inside(int y,int x,int H,int W){return(y>=0&&x>=0&&y<H&&x<W);}
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
/* }}} */
/* ?????° {{{*/
const ll MOD = 1e9 + 7;
const ll INF = 1e9 + 9;
const D EPS  = 1e-9;
const int dx[] = {0, 1, 0, -1, 1, -1, 1, -1};
const int dy[] = {1, 0, -1, 0, 1, -1, -1, 1};
/* }}} */

int d[100][100];

int w, h;
int co;

void dfs(int x, int y, int c)
{
  if (!inside(y, x, h, w)) return;
  if (d[x][y] != c) return;

  d[x][y] = 0;
  REP(i, 4) {
    dfs(x + dx[i], y + dy[i], c);
  }
}

void update(int x, int y, int c)
{
  d[x][y] = d[x][y + 1] = d[x + 1][y] = d[x + 1][y + 1] = c;
}

int color(int x, int y) { return d[x][y];}

signed main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (cin >> w >> h, w){
    memset(d, -1, sizeof(d));

    int sx = in() - 1, sy = in() - 1;
    int gx = in() - 1, gy = in() - 1;
    int n = in();

    REP(_, n){
      int c = in(), D = in(), x = in() - 1, y = in() - 1;
      update(x, y, c);
      if (D) {
        update(x, y + 2, c);
      } else {
        update(x + 2, y, c);
      }
    }

    dfs(sx, sy, color(sx, sy));

    cout << (d[gx][gy] ? "NG" : "OK") << endl;
  }
}