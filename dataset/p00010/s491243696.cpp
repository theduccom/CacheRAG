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
typedef pair<Real, Real> P; // Point
typedef pair<P, P> L; // segment or line
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

/* inner dot */
Real dot(P&a, P&b) {
  return car(a) * car(b) + cdr(a) * cdr(b);
}
Real operator*(P&a, P&b) {
  return car(a) * car(b) + cdr(a) * cdr(b);
}

/* scalar multiple */
P operator*(P a, Real c) {
  return cons(c * car(a), c * cdr(a));
}
P operator*(Real c, P a) {
  return cons(c * car(a), c * cdr(a));
}

P operator/(P a, Real d) {
  return cons(car(a) / d, cdr(a) / d);
}

Real det(P&a, P&b) {
  return car(a) * cdr(b) - cdr(a) * car(b);
}

/* vector operator */
P operator+(P a, P b) {
  return cons(car(a) + car(b), cdr(a) + cdr(b));
}

P operator-(P a) {
  return cons(-car(a), -cdr(a));
}

P operator-(P a, P b) {
  return cons(car(a) - car(b), cdr(a) - cdr(b));
}


Real Euclidean(P a, P b) {
  P p = a - b;
  return sqrt(pow(car(p), 2) + pow(cdr(p), 2));
}

/* 外接円 */
struct Circumcenter {
  P x; // 外心
  Real r; // 半径
  Circumcenter(P p0, P p1, P p2) {
    Real a = Euclidean(p1, p2);
    Real b = Euclidean(p2, p0);
    Real c = Euclidean(p0, p1);
    Real A = a * a;
    Real B = b * b;
    Real C = c * c;
    
    Real den = 2 * (A * B + B * C + C * A) - (A * A + B * B + C * C);
    Real dec_a = A * (B + C - A);
    Real dec_b = B * (C + A - B);
    Real dec_c = C * (A + B - C);

    x = (dec_a * p0 + dec_b * p1 + dec_c * p2) / den;

    r = Euclidean(x, p0);
  }
};

int main() {

  int n; cin >> n;

  while (n--) {
    Real x0, y0, x1, y1, x2, y2;
    cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
    Circumcenter c(P(x0,y0), P(x1,y1), P(x2,y2)); 
    printf("%0.3f %0.3f %0.3f\n", car(c.x), cdr(c.x),  c.r);
  }

  return 0;
}