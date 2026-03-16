#include <bits/stdc++.h>
using namespace std;

#define iota(i,n,b,s) for(int i=int(b);i!=int((b)+(s)*(n));i+=(s))
#define range(i,n,m) iota(i,(((n)>(m))?((n)-(m)+1):((m)-(n)+1)),(n),((n)>(m)?-1:1))
#define rep(i,n) iota(i,(n),0,1)

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

int cost_a (int n) {
  int r = (n % 5) * 380;
  r += (n - (n%5)) * 38 * 8;
  return r;
}

int cost_b (int n) {
  int r = (n % 4) * 550;
  r += (n - (n % 4)) * 55 * 85 / 10;
  return r;
}

int cost_c (int n) {
  int r = (n%3)*850;
  r += (n-(n%3)) * 88 * 85 / 10;
  return r;
}

int main() {
  map<string, vector<int>> s;
  for (;;) {
    string w; cin >> w;
    if (!cin) break;
    int p; cin >> p;
    s[w].push_back(p);
  }
  for (auto&x : s) {
    cout << car(x) << endl;
    sort(all(cdr(x)));
    cout << cdr(x)[0];
    iota (i, cdr(x).size() - 1, 1, 1) cout << ' ' << cdr(x)[i];
    cout << endl;
  }
    
  return 0;
}