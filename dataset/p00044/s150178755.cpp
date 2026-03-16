#include <bits/stdc++.h>
using namespace std;

#define iota(i,n,b,s) for(int i=int(b);i!=int((b)+(s)*(n));i+=(s))
#define range(i,n,m) iota(i,(((n)>(m))?((n)-(m)+1):((m)-(n)+1)),(n),((n)>(m)?-1:1))
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

bool* PrimeSieve(int n) {
  bool*s = new bool[n];
  for (int i = 0; i < n; ++i) s[i] = true;
  s[0] = s[1] = false;
  for (int i = 2; i < n; ++i)
    if (s[i]) for (int j = 2 * i; j < n; j += i) s[j] = false;
  return s;
}

int main() {

  const int N = 50022;
  auto isprime = PrimeSieve(N);

  loop {
    int n; cin >> n;
    if (!cin) break;
    int a,b;
    for (int m = n-1; m > 0; --m) {
      if (isprime[m]) {
        a = m;
        break;
      }
    }
    for (int m = n+1; m < N; ++m) {
      if (isprime[m]) {
        b = m;
        break;
      }
    }
    cout << a << ' ' << b << endl;
  }

  return 0;
}