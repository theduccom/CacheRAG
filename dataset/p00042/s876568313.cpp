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
  os << v[0];
  for (int i=1, len=v.size(); i<len; ++i) os << ' ' << v[i];
  return os;
}

int dx[] = { -1, 0, 1, 0 };
int dy[] = {  0, -1, 0, 1 };

int main() {

  int case_index = 1;
  loop {
    int C, n; cin >> C >> n;
    if (!C) break;
    cout << "Case " << case_index << ':' << endl;
    ++case_index;

    vi cs(n);
    vi xs(n);
    char comma;
    rep (i, n) cin >> xs[i] >> comma >> cs[i];

    int dp[C+1];
    rep (c, C+1) dp[c] = 0;

    rep (i, n) {
      for (int c = C - cs[i]; c >= 0; --c) {
        int c2 = c + cs[i];
        if (dp[c2] < dp[c] + xs[i]) {
          dp[c2] = dp[c] + xs[i];
        }
      }
    }

    int mx = 0,
        mc = -1;
    rep (c, C + 1) {
      if (mx < dp[c]) {
        mx = dp[c];
        mc = c;
      }
    }
    cout << mx << endl;
    cout << mc << endl;
  }

  return 0;
}