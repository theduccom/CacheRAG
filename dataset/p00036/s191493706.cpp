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

string fuck(vector<pair<int,int>>&xs) {
  int i0 = INF;
  int j0 = INF;
  int i1 = -INF;
  int j1 = -INF;
  bool zero = false;

  rep (k, 4) {
    int i = car(xs[k]);
    int j = cdr(xs[k]);
    i0 = min(i0, i);
    j0 = min(j0, j);
    i1 = max(i1, i);
    j1 = max(j1, j);
    if (!i && !j) zero = true;
  }

  if (i1 == 3) return "B";
  if (j1 == 3) return "C";
  if (i1 == 1 && j1 == 1) return "A";

  if (i1 == 2) {
    if (zero) return "F";
    return "D";
  }

  if (zero) return "E";
  return "G";
}

int main() {

  loop {
    string ln[8];
    rep (i, 8) cin >> ln[i];
    if (!cin) break;

    vector<pair<int,int>> xs;
    int mi = INF;
    int mj = INF;
    rep (i, 8) {
      rep (j, 8) {
        if (ln[i][j] == '1') {
          xs.push_back(cons(i, j));
          mi = min(mi, i);
          mj = min(mj, j);
        }
      }
    }

    rep (i, 4) {
      xs[i] = cons(car(xs[i]) - mi, cdr(xs[i]) - mj);
    }

    cout << fuck(xs) << endl;

  }

  return 0;
}