#include <bits/stdc++.h>
using namespace std;

#define iota(i,n,b,s) for(int i=int(b);i!=int((b)+(s)*(n));i+=(s))
#define range(i,n,m) iota(i,(((n)>(m))?((n)-(m)):((m)-(n))),(n),((n)>(m)?-1:1))
#define rep(i,n) iota(i,(n),0,1)
#define loop for(;;)

#define INF (1e9)
#define EPS (1e-9)
#define cons(a,b) (make_pair(a,b))
#define car(a) (a.first)
#define cdr(a) (a.second)
#define cadr(a) (car(cdr(a)))
#define cddr(a) (cdr(cdr(a)))
#define all(a) a.begin(), a.end()
#define trace(var) cerr<<">>> "<<#var<<" = "<<var<<endl;

typedef long long Integer;
typedef double Real;
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<string,int> Dictionary;
const Real PI = acos(-1);

template<class S, class T>
ostream& operator<<(ostream& os, pair<S,T> p) {
  os << '(' << car(p) << ", " << cdr(p) << ')';
  return os;
}

template<class T>
ostream& operator<<(ostream& os, vector<T> v) {
  if (v.size() == 0) {
    os << "(empty)";
    return os;
  }
  os << v[0];
  for (int i=1, len=v.size(); i<len; ++i) os << ' ' << v[i];
  return os;
}

int dx[] = { -1, 0, 1, 0 };
int dy[] = {  0, -1, 0, 1 };

int d(int x0, int y0,
      int x, int y) {
  int dx = abs(x - x0);
  int dy = abs(y - y0);
  if (dx + dy == 0) return 0;
  if (dx + dy == 1) return 1;
  if (max(dx, dy) == 1) return 2;
  if (dx + dy == 2) return 3;
  else return 100;
}

int main() {

  const int N = 10 + 2 + 2;
  int f[N][N];
  rep (i, N) rep (j, N) f[i][j] = 0;

  char comma;
  loop {
    int x, y, s;
    cin >> x >> comma >> y >> comma >> s;
    if (!cin) break;

    for (int xx = x - 2; xx < x + 3; ++xx) {
      for (int yy = y -  2; yy < y + 3; ++yy) {
        if (d(x,y,xx,yy) <= s) f[xx+2][yy+2]++;
      }
    }
  }

  int cx = 0,
      ac = -INF;
  for (int x = 2; x < N - 2; ++x) {
    for (int y = 2; y < N - 2; ++y) {
      if (!f[x][y]) ++cx;
      ac = max(ac, f[x][y]);
    }
  }

  cout << cx << endl;
  cout << ac << endl;


  return 0;
}