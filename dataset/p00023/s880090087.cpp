#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <complex>
using namespace std;
#define rep(i,n) for (int i=0; i < (n); i++)

typedef double D;      // 座標値の型。doubleかlong doubleを想定
typedef complex<D> P;  // Point
typedef pair<P, P> L;  // Line
typedef vector<P> VP;
const D EPS = (1e-10);    // 許容誤差。問題によって変える
#define X real()
#define Y imag()
#define LE(n,m) ((n) < (m) + EPS)
#define GE(n,m) ((n) + EPS > (m))
#define EQ(n,m) (abs((n)-(m)) < EPS)

// 内積　dot(a,b) = |a||b|cosθ
D dot(P a, P b) {
  return (conj(a)*b).X;
}
// 外積　cross(a,b) = |a||b|sinθ
D cross(P a, P b) {
  return (conj(a)*b).Y;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    D xa, ya, ra, xb, yb, rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    P a = P(xa, ya);
    P b = P(xb, yb);

    if (ra+rb < abs(a-b)) {
      std::cout << 0 << std::endl;
    }else if (ra+abs(a-b) < rb) {
      std::cout << -2 << std::endl;
    }else if (rb+abs(a-b) < ra) {
      std::cout << 2 << std::endl;
    }else {
      std::cout << 1 << std::endl;
    }
  }

  
  return 0;
}