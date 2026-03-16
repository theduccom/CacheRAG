#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <complex>
#include <iomanip>
using namespace std;
#define rep(i,n) for (int i=0; i < (n); i++)

typedef double D;
typedef complex<D> P;
typedef pair<P, P> L;
typedef vector<P> VP;
const D EPS = 1e-9;
#define X real()
#define Y imag()
#define LE(n,m) ((n) < (m) + EPS)
#define GE(n,m) ((n) + EPS > (m))
#define EQ(n,m) (abs((n)-(m)) < EPS)

D cross(P a, P b) {		// (2)
  return (conj(a)*b).Y;
}

P crosspointLL(P a1, P a2, P b1, P b2) { // (16)
  D d1 = cross(b2-b1, b1-a1);
  D d2 = cross(b2-b1, a2-a1);
  if (EQ(d1, 0) && EQ(d2, 0)) return a1;
  return a1 + d1/d2*(a2-a1);
}

P circumcenter(P a, P b, P c) {
  a = (a-c)*0.5;
  b = (b-c)*0.5;
  return c + crosspointLL(a, a*P(1,1), b, b*P(1,1));
}

int main() {
  P a1, a2, a3;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a1 = P(x1, y1);
    a2 = P(x2, y2);
    a3 = P(x3, y3);
    P ans = circumcenter(a1, a2, a3);
    std::cout << fixed << setprecision(3) << ans.X << " " << ans.Y << " " << abs(ans-a1) << std::endl;
  }

}