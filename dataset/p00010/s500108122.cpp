#include<iostream>
#include<cstdio>
#include<complex>
#include<cmath>
using namespace std;

typedef complex<double> P;

inline double dot(P a, P b) {return real( conj(a)*b);}
inline double cross(P a, P b) {return imag( conj(a)*b);}

P IntersectionLL(P a1, P a2, P b1, P b2) {
  P a = a2 - a1; P b = b2 - b1;
  return a1 + a * cross(b, b1-a1) / cross(b, a);
}

int main() {
  int T; cin >> T;
  while( T--> 0 ) {
    P p[3];
    for(int i = 0; i < 3; i++) {
      double x, y; cin >> x >> y;
      p[i] = P(x, y);
    }

    P a = p[1] - p[0];
    P b = p[2] - p[0];

    P m1 = p[0] + a / 2.0;
    P m2 = p[0] + b / 2.0;

    P o = IntersectionLL( m1, m1 + a * P(0, 1), m2, m2 + b * P(0, 1) );

    printf("%.3f %.3f %.3f\n", o.real(), o.imag(), abs(o - p[0]) );
  }
}